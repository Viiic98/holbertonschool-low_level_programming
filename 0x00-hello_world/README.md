# INTRODUCING TO C LANGUAGE

1. Preprocessor
This step remove the comments and include the header file in source code, and replace all the macro name with the code
We can use only this step with the option -E in the gcc command

2. Compiling 
Generate an assembly code - instructions defined by English
We can use only this step with the option -c in the gcc command and we can create a file with extension .o

3. Assembler
This step convert the assembler code to binary code.
We can generate a file with extension .s with the option -S(Upper)

4. Linking
This step combine the C files and create an executable file using libraries
We can use this option with the option -o and this create an executable file
The syntax for this is gcc -o EXE_NAME CFILE

----------------------------------------------------MY FIRST HELLO WORLD IN C USING SHELL-------------------------------------

I create a C file and after this I compilate and print ./a.out for display the content
Instead write ./a.out I can create an executable file and after this run this file

I used for the first time puts() --- this command add a new line at the end, I need to put one variable for display the content of this variable
In the second time I used printf() --- this command is for display anything but I can display strings directly instead create any variable before 