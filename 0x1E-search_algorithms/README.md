# 0x1E. C - Search Algorithms


## Resource
**Read or watch:**
- [Search algorithm](https://intranet.alxswe.com/rltoken/ap2kuRv8qrUMyQ0-MY3EXw)
- [Space complexity (1)](https://intranet.alxswe.com/rltoken/QK9ENdoTyqGs0d4_M3XE3g)
- [Serach Algorithms video playlist](https://intranet.alxswe.com/rltoken/_4-JUPlg6lfKZO2YPHCA7g)
## Learning Objectives
- What is a search algorithm
- what is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called search_algos.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Compilate and Run source code

```bash
 gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <file containing main> <filecontainin you function> -o <name of the output file>

 ./<name of the output file>
 ```
 - Example:
 ```bash
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear

  ./0-linear
  ```
## Tasks 0: Linear search
Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://intranet.alxswe.com/rltoken/17RKhbmvh_u4ebCwaSxCxg)

## Task 1: Binary search
Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://intranet.alxswe.com/rltoken/SnveFJhSDE7o8bEx-kGGpA)
