# C - Variadic functions

### General Objective
-	What are variadic functions
-	How to use va_start, va_arg and va_end macros
-	Why and how to use the const type qualifier

### Requirements
-	All files should be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-	Example: use the following to run Task 1.
 
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b

### Mandatory Tasks
| Task | Description |
| --- | --- |
| 0. | Write a Function that returns the sum of all its parameters. |
| | 	-	Prototype: int sum_them_all(const unsigned int n, ...); |
| |	-	if n == 0, return 0 |
| 1. | Write a function that prints numbers, followed by a new line. |
|  | Prototype: void print_numbers(const char \*separator, const unsigned int n, ...);
| | where separator is the string to be printed between numbers|
| | and n is the number of integers passed to the function
| | You are allowed to use printf
| | If separator is NULL, don’t print it
| | Print a new line at the end of your function |
| 2. | A function that prints strings, followed by a new line. |
|    | Prototype: void print_strings(const char \*separator, const unsigned int n, ...);
| | where separator is the string to be printed between the strings
| | and n is the number of strings passed to the function
| | You are allowed to use printf
| | If separator is NULL, don’t print it
| | If one of the string is NULL, print (nil) instead
| |  Print a new line at the end of your function |
| 3. | A function that prints anything. |
|  | Prototype: void print_all(const char * const format, ...);
| | where format is a list of types of arguments passed to the function
| | -	c: char
| | -i: integer
| | f: float
| | s: char * (if the string is NULL, print (nil) instead
| | any other char should be ignored
| | see example
| | You are not allowed to use for, goto, ternary operator, else, do ... while
| | You can use a maximum of
| | 2 while loops
| | 2 if
| | You can declare a maximum of 9 variables
| | You are allowed to use printf
| | Print a new line at the end of your function |
