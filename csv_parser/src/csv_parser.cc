// Copyright (c) 2025 Inventor4life (ethan.goode@wsu.edu)
// See LICENSE.txt in project root
// SPDX-License-Identifier: MIT

#include "csv_parser.h"

namespace csv {
// Very (very) basic csv parser, with no support for escape sequences
std::vector<std::string> ReadLine(std::istream& in_stream, char escape_character) {
  std::vector<std::string> result;
  char current_char = 0;
  while(current_char != '\n') { // Return vector at end of line
    bool first_char = true;
    std::string current_field = "";
    while(true) {
      current_char = in_stream.get();
      if(in_stream.eof()) {
        result.push_back(current_field);
        return result;
      }
      if(current_char == escape_character) { // Ignore escape characters
        continue;
      }
      if(current_char == ',' || current_char == '\n') { // Either of these indicates End Of Field
        break;
      }
      current_field += current_char; // Append the non-special character to string
    }
    result.push_back(current_field);
  }
  return result;
}

}
