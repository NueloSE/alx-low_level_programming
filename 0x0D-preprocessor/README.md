# OxOD. C - Preprocessor

## Resources

Read or watch:
- [Understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/X0ithSsqlz_D0c8V8uA1HQ)
- [Object-like Macros](https://intranet.alxswe.com/rltoken/kaqIw352MSJ8xoi1xU09ZA)
- [Macro Arguments](https://intranet.alxswe.com/rltoken/wcQZzunlgjepxExZFc2ORQ)
- [Pre Processor Directives in C](https://intranet.alxswe.com/rltoken/S4zfCHzg82fUAxdt8_SaZQ)
- [The C Preprocessor](https://intranet.alxswe.com/rltoken/G33GiOIZofiIN4Tx9_acbQ)
- [Standard Predefined Macros](https://intranet.alxswe.com/rltoken/0OYhpL2cJfsIMBWhTuZsAA)
- [include guard](https://intranet.alxswe.com/rltoken/oF2vgIZNePdU965jCEZLHA)
- [Common Predefined Macros](https://intranet.alxswe.com/rltoken/ROl5xAMKX-JpenEqmf7FnQ)

## General Objectives
	- What are macros and how to use them
	- What are the most common predefined macros
	- How to include guard your header files

## Compile
	- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	- Use the main.c file for each task when compiling to test your code

## TASKS
| Task | Name | Description |
| --- | --- | --- |
| 0 | Object-like Macro | Create a header file that defines a macro named SIZE as an abbreviation for the token 1024 |
| 1 | Pi | Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359 |
| 2 | File name | Write a program that prints the name of the file it was compiled from, followed by a new line. You are allowed to use the standard library |
| 3 | Function-like macro | Write a function-like macro ABS(x) that computes the absolute value of a number x |
| 4 | sum | Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y |