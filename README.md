# General information
## Introduction
This is a collection of useful modules that came about as an easy way to package and reuse code in WSU CptS 223. The recommended method for using these modules is to copy the directory of the module you want into your project, then use CMakeLists add_subdirectory() function on the module directory.

## Academic integrity notice
If using these modules for a class assignment, please be aware of any relevant Academic Integrity policies.

## Getting the latest release
The public interfaces and functionality of some of these modules may change at any point. While the changes will be noted in the changelog.txt, that won't help during unsupervised upgrades :P. There are no structured rollouts/releases of these modules. To get the latest complete version of a module, check the [releases](#releases) section at the end of this file for github links.

## Module structure
The basic library structure is defined below. All modules will have these files, but some modules may have additional files.
```
{module_name}/
  include/
    // Public interface files (to be included by superproject)
  src/
    // Private source/header files. Normal module use shouldn't require editing or #include'ing these files
  CMakeLists.txt  // Packages the module as a library, intended for use with CMake's add_subdirectory()
  changelog.txt   // List of changes since last version
  docs.md         // basic documentation for library functions
```

# Releases
| Module   | Description                                | Link to latest release |
|--------  |-------------                               |------------------------|
|csv_parser|basic module to parse csv files line-by-line|<https://github.com/Inventor4life/useful_modules/tree/fe38963e8fe2172d0d981499fd9eabdb89cd34b2>|
