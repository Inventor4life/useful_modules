# Table Of Contents:
- [Including the library](#including-the-library)
- [Library dependencies](#library-dependencies)
- [Available Methods](#available-methods)
  - [ReadLine()](#readline) -- Reads a single line from the csv stream

---

# Including the library

1. Copy the module directory into your project
2. Add the following to your CMakeLists.txt file:
```
add_subdirectory({path-to-csv_parser-dir})
target_link_libraries({your-target-name} PUBLIC csv_parser)
```

---

# Library dependencies

### Included Automatically
| Dependency | Reasoning                        |
|------------|----------------------------------|
|std::istream|Input stream to parse as CSV      |
|std::vector |Used to return multiple strings   |
|std::string |To store a field from the csv file|

---
# Available methods

## Readline()
### `std::vector<std::string> ReadLine(std::istream& input_stream, char escape_character='"')`
> ### Note: Escape sequences are not currently supported.

### Arguments: {#readline-arguments}

|name            |type         |description                                               |
|----------------|-------------|----------------------------------------------------------|
|input_stream    |std::istream&|Stream to read characters from (interpreted as csv stream)|
|escape_character|char         |Character used to mark escape sequences. (Not implemented)|

### Description: {#readline-description}
Takes an input stream representing csv-parseable text and returns a vector of individual fields. Accepts an optional `escape_character` argument, which causes any char in the current entry in `istream` that matches `escape_character` to be ignored (see [example](#readline-example))

### Example: (#readline-example)

<table><thead><th>
test.csv
</th></thead><td><pre>
one," two", "three"
</pre></td></table>

<table><thead><th>
main.cpp
</th></thead><td><pre>
#include "csv_parser.h"
...
std::ifstream my_csv("test.csv");
std::vector&ltstring&gt csv_entry = csv::ReadLine(my_csv);
</pre></td></table>

<table><thead><th>
<code>csv_entry</code> contains
</th></thead><td>
<code>one</code>,<code> two</code>,<code> three</code>
</td></table>

