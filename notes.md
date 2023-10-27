# Chapter 1 - Up and Running
## Compiler toolchain
The *preprocessor* perfomrs basic source code manipulation. For example, #include <cstdio>
is a directive that instructs the preprocessor to include info about the cstdio library.
When this step is done it produces a single translation unit. Each translation unit is then passed to the compiler for further processing.

The *compiler* reads a translation unit and generates an object file. These contain an intermediate format called object code. These files
contain data and instructions in an intermediate format that most humans wouldn't understand. Compilers work on one
translation unit at a time, so each translation unit coresponds to a single object file.

The *linker* generates programs from object files. Linkers are also responsible for finding the libraries you've included within your 
source code.

## Debuging
In order to debug using GCC or Clang you have to use GDB / LLDB. 
To do this you add the -g flag when you compile the code.
Then run:
`lldb EXECUTABLE_NAME`
This will open up a interactive environment.
Documentation for this is found here: https://lldb.llvm.org/use/tutorial.html
Some basic commands are:
breakpoint set -f file_name -l line_num
run
step

# Chapter 2 - Types
The primitive types include: integer, floating-point, character, Boolean, byte, size_t, and void.

## Arrays
`int my_array[100];`
Declares an array of size 100.

## Classes vs Structs
One difference is that by default class members are private and struct members are public.

# Chapter 4 - Object Life Cycles
Static in different places:
- Global scope: makes a the lifetime the life of the app, innaccessable to other translation units. 
  Extern does the same but it is accessable to other translation units.
- Local Scope (in functions): the variables is declared once and its life time is from the functions
  first run until the end of the program
- Members: Object's life time is static, start to end of program, and can be refered to
  without a specific instance of the class. Refer to them via CLASSNAME::VarName. These also
  must be initialized at global scope.

Dynamic Storage:
You make a dynamic object by doing the following: int* pInt = new int{1};
The new keyword dynamically allocates the memory for the object. You must
call delete on the variable when doing this though. Delete takes the pointer
to the object you want to delete.
For arrays you would do: int* arrptr = new int[100];
then to deallocate you would do: delete[] arrptr;
