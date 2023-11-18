
# 0x0A. C - argc, argv

## GENERAL OBJECTIVE
    -How to use arguments passed to your program
    -What are two prototypes of main that you know of, and in which case do you use one or the other
    -How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

## TASKS
### There are five mandatory tasks and one      advanced task    

### Task 1: It ain't what they call you, it's what you answer to
Description: This code prints a name followed by a new line
    -If you rename the program, it will print the new name, without having to compile it again
    -You should not remove the path before the name of the program
### Task 2: Silence is argument carried out by other means
Description: This program prints the number of argument passed into it 
    - This program prints a number followed by a new line

## Task 3: The best argument against democracy is a five-minute conversation with the average voter
Description: This program prints all arguments it receives 
    - All arguments are printed, including the first one
    - Only print one argument per line, ending with a new line

## Task 4: Neither irony nor sarcasm is argument
Description: This program multiplies two numbers
    -This programs prints the result of the multiplication, followed by a new line
    -You can assume that the two numbers and result of the multiplication can be stored in an integer
    -If the program does not receive two arguments, program should print Error, followed by a
     new line, and return 1

## Task 5: To infinity and beyond 
Description: This program adds positive numbers
    - Print the result, followed by a new line
    - If no number is passed to the program, print 0 , followed by a new line
    - If one of the number contains symbols that are not digits, print Error , followed by a new line, and return 1
    - You can assume that numbers and the addition of all the numbers can be stored in an int

## Task 6: Minimal Number of Coins for Change 
Description: This program prints the minimum number of coins to make change for an amount of money.
    - Usage: ./change cents
    - Where cents is the amount of cents you need to give back 
    - If the number of arguments passed to the program is not exactly 1, print Error, followed by a new line, and return 1
    - You should use atoi to parse the parameter passed to your program
    - If the number passed as the argument is negative, print 0 , followed by a new line
    - You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
