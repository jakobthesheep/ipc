## Command line options

-v: verbose
-g: include debug information in its output files
-c: tells gcc to stop after creating object file
-E: stop after source code has undergone preprocessing
-S: stop after translating source in assembly language
Wall: turns on all of gcc's most popular warning
-o: tells linker what name to use for the output file

## The steps

### 1. Preprocessor
    - gets rid of comments
    - includes the code of the header files
    - replaces all the macros

    Output of this step is stored with .i extension

### 2. The Compiler
    - compiler will take the preprocessed file and generated IR code (Intermediate Representation) and produces a file with .s extension

### 3. The Assembler 
    - takes IR code and transforms it into object code, that is code in machine language. This file ends in .o

### 4. The Linker
    - created final executable, in binary and can play two roles
        -- linking all source files together
        -- linking function codes with their definition. The linker knows where to look for the function definitions in the static libraries or dynamic libraries. 
        -- Static libraries are the result of the linker making a copy of all used librarz functions to the executable file.
        -- Dynami libraries don't require the code to be copied, it is done by just placing the name of the library in the binary file. Note that gcc uses by default dynamic libraries.