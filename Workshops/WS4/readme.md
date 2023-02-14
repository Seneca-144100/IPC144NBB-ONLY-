# Workshop #4: LOGIC <br />Loops, Switch Functions with return statement and simple header files

- Version 0.5: Only lab posted with no active submission scripts.
- Version 0.6: Added clarifications
- Version 0.7: Submission for lab is now open
- Version 0.8: Output Corrected
- Version 0.9: DIY posted and submission open 
- Version 1.0: Updated DIY instructions and fixed main.c's print statement

In the process of doing your workshop 4, in the **lab** (part 1) you are to create a `Ski Equipment Rental` program. You will code `rental.c` and `rental.h` and reuse functions in the `utils` module `utils.c and utils.h files` developed by your professor in class. **DIY** (part 2) Will be added later

## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:
- Use switch statements to code decision-making logic
- Use simple header files
- Perform foolproof numerical data entry
- Reuse functions written in previous workshops (utils module)
- Describe to your instructor what you have learned in completing this workshop.

## Submission Policy

This workshop is divided into two coding parts and one non-coding part:

- Part 1 (**LAB**): A step-by-step guided workshop, worth 20% of the workshop's total mark
> Please note that the part 1 section is **not to be started in your first session of the week**. You should start it on your own before the day of your lab and join the session for problem-solving and submission of work. Part 1 (**LAB**) can only be submitted from a **Seneca Lab Computer** from your matrix account.
- Part 2 (**DIY**): A Do It Yourself type of workshop that is much more open-ended and is worth 50% of the workshop's total mark.  
- *reflection*: non-coding part, to be submitted together with *DIY* part. The reflection is worth **30%** of the whole workshop's mark. If your professor deems it insufficient, you will lose 30% of your workshop mark.

## Due Dates

The Due dates depend on your section. Please choose the "-due" option of the submitter program to see the exact due date of your section:

```bash
~profname.proflastname/submit 1??/wX/pY -due<ENTER>
```
- Replace **??** with your subject code (`00 or 44`)
- Replace **X** with Workshop number: [`1 to 10`]
- Replace **Y** with the part number: [`1 or 2`]

## Late penalties 
### Part 1 (Lab)
There are no late submission exceptions as your **lab** must be submitted from the lab computer before the end of the lab session.
### Part 2 (DIY)
You are allowed to submit your work up to 2 days after the due date with a 30% penalty for each day. After that, the submission will be closed and the mark will be zero.

## Citation

Every file that you submit must contain (as a comment) at the top:<br />
**your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

### For work that is done entirely by you (ONLY YOU)

If the file contains only your work or the work provided to you by your professor, add the following message as a comment at the top of the file:

> I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

### For work that is done partially by you.

If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which part of the assignment is given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrongdoing.

> - Add the citation to the file in which you have the borrowed code
> - In the 'reflect.txt` submission of part 2 (DIY), add exactly what is added to which file and from where (or whom).

> :warning: Workshops with no Citation will receive a mark of zero

> :warning: This [Submission Policy](#submission-policy) only applies to the workshops. All other assessments in this subject have their own submission policies.

### If you have helped someone with your code

If you have helped someone with your code. Let them know of these regulations and in your 'reflect.txt' of part 2 (DIY), write exactly which part of your code was copied and who was the recipient of this code.<br />By doing this, you will be clear of any wrongdoing if the recipient of the code does not honour these regulations.



## Compiling and Testing Your Program

All your code should be compiled using this command on `matrix`:

```bash
gcc -Wall -o ws file1.c file2.c ... <ENTER>
```

- `-Wall`: the compiler will report all warnings
- `-o ws`: the compiled application will be named `ws`

Check the output, and closely compare it with the expected output. Make sure the match exactly since with submitting your work, only perfect outputs can pass the submission program.


# LAB (20%)
## Seneca Ski Equipment Rentals

## Lab files
In this part of the workshop, you will start by writing a program implemented in a file called `rental.c`:

Your **rental** module (`rental.c and rental.h`) will hold the following functions:  

```C
void menu(void);
void rental(void);
double rent(int sku);
```


Your Ski rental program provides the following ski rental pieces of equipment:


| Equipment     | Price | SKU |
|----------|-------|------|
| Skis | 12.30    | 101 |
| Boots | 10.45    | 102 |
| Poles | 2.99    | 203 |
| Helmet | 3.99    | 204 |
| Winter Pants | 14:30    | 305 |
| Winter Jacket | 20:55    | 306 |


## Main logic

The following program is the main program running your rental code:

```C
/***********************************************************************
// IPC Workshop 4 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file may be replaced by another tester program during the submission
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <stdio.h>
#include "utils.h"
#include "rental.h"
int main(void) {
   printf("Welcome to Seneca Ski Equipment Rentals...\n"
          "------------------------------------------\n");
   do {
      rental();
      printf("Exit Program? ");
   } while(!yes());

   return 0;
}

```

## Coding

Before starting to code, in `rental.c` include the `rental.h` custom header file.

### `void menu(void)`

Add the prototype above to `rental.h` and then create the menu function in `rental.c` to print the following menu:  

```text
Equipment     Price      SKU
----------------------------
Skis          12.30      101
Boots         10.45      102
Poles         2.99       203
Helmet        3.99       204
Winter Pants  14.30      305
Winter Jacket 20.55      306
----------------------------

```

### `double rent(int sku)`

This function receives an SKU number. Based on the SKU received, it will print the equipment name and its rental price then proceed to return the rental price of the item. 

Here is the format of the printout:
```text
Equipment name .... 99.99$
```

If the SKU is not found in the list, `Invalid Selection!` is printed and `0.0` is returned.

#### Step 1
Create the function in `rental.c` and add the prototype to `rental.h`.

#### Step 2
Add a double variable for the price and initialize it to `0.0`. 

#### Step 3
Create a switch statement based on the value of the SKU argument. You need to have an appropriate case statement for each SKU listed above. In each case statement, set the price's value to the listed price above, then proceed to print the name and the price of the equipment in the shown format and go to a new line.

If the SKU is not found in the cases listed, your `default` case should print the `Invalid Selection!` error message and go to new line.

#### Step 4
Return the price value.

### `void rental(void)`
The rental function keeps getting SKU numbers from the user and prints the name and the price for the corresponding equipment, adding up all the prices for final pricing.
If the user enters `0` for an SKU number, then the user entry is stopped and the total price, tax and total price with tax is printed. 

#### Step 1
Create two variables: 
1. an integer for receiving SKU numbers
2. a double to calculate the price of rentals.

#### Step 2 in a `do while` loop

#### Step 2.1
The rental function receives a valid integer for an SKU using the `getInt()` function in the `utils` module using the following prompt:

```text
Enter Sku or 0 to exit: 
```


#### Step 2.2
If the SKU is not zero it will be passed to the rent function for pricing and the return value of the `rent` function is added to the (double) price variable.

#### Step 2.3 (condition of the loop) 

the loop continues while the received SKU is not zero.

#### Step 3
The total price, tax and total price with tax are printed assuming the tax value is `%13` in the following format:

```text
----------------------------
Total price:      999.99
Tax:              999.99
Total + Tax:      999.99$
****************************
```


## Sample output
```text
Welcome to Seneca Ski Equipment Rentals...
------------------------------------------
Equipment     Price      SKU
----------------------------
Skis          12.30      101
Boots         10.45      102
Poles         2.99       203
Helmet        3.99       204
Winter Pants  14.30      305
Winter Jacket 20.55      306
----------------------------
Enter Sku or 0 to exit: 102
Boots ............ 10.45$
Enter Sku or 0 to exit: 204
Helmet ...........  3.99$
Enter Sku or 0 to exit: 101
Skis ............. 12.30$
Enter Sku or 0 to exit: 111
Invalid Selection!
Enter Sku or 0 to exit: 306
Winter Jacket .... 20.55$
Enter Sku or 0 to exit: 0
----------------------------
Total price:       47.29
Tax:                6.15
Total + Tax:       53.44$
****************************
Exit Program? (Y)es or (N)o: y

```

## Submission Process:

### Data Entry
```text
101
305
102
301
0
y

```

### Files to Submit
```text
utils.h
utils.c
rental.h
rental.c
main.c
```
### Submission 

Upload the files listed above to your `matrix` account (use git or SFTP). Compile and run your code using the `gcc` compiler as shown in [Compiling and Testing Your Program](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your matrix account

```bash
~fardad.soleimanloo/submit 144/wX/pY  <ENTER>
```
- Replace **X** with Workshop number: [`1 to 8`]
- Replace **Y** with the part number: [`1 or 2`] (part 1 is the lab and part 2 is DIY)

and follow the instructions.

> **??Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.


# Part 2 DIY (50%)

## My Simple Calculator

### `int calc()`
For the DIY section of the workshop, you are responsible for coding: 'calc.c' and 'calc.h'. These files will contain the logic for a function that you code called `calc`. `calc` starts by prompting the user with the following indicator: `> ` to enter a single calculation command. Based on the calculation command entered by the user, calc will print the result of the calculation command (underlined with dashes '-') OR an error message if a bad command is entered. In both of these cases, the `calc` function flushes the keyboard and then returns true.

If instead of a command the key `<Enter>` is pressed the function, just returns false.

### Command Entry Format
The function will receive the calculation command in the following format:  

```text
> ?num1@num2<ENTER>

?: All calculation commands start with a '?' (question mark)
num1: the first number
@: the operation, one of: +, -, x, /, ^ and %, explained below
num2: second number
<ENTER>: enter key is pressed

Specifications:
mum1: Numbers are doubles for +, -, x, / and ^
    : integer for % (read as double, cast to long)
@: Addition(+), Subtraction(-), Multiplication(x), Division(/), Exponentiation(^) and Modulus(%)
num2: doubles values for +, -, x,/ (non zero for /)
    : integers for % and ^ (read as double, cast to long)
    
```

### Result printing format

For all cases, the result is printed as a double with three digits after the decimal point. Only when the user enters a "Modulus" calculation using the modulus operator ('%') should the result be printed as an integer

### Implementation restrictions

In your implementation of the `calc` function, if the user enters a valid query command, you must use a switch statement to do the right calculation/operation based on the operator that is read. 

### Error handling

If in any case, the command does not start with a `?` or `\n` or the three parts of the command (2 numbers and an operator) are not read successfully print the following error message:
```text
Invalid Command!
[Question mark][First Number][Operation][Second Number]<ENTER>
```

If the operator is not recognized the following error message will be printed:
```text
'@' is not a valid operation, (only +,-,/,x,% and ^ are acceptable
```
(the `@` will be replaced with the invalid operator character that the user entered)


## A Tester program

The main function will have the 'calc' function in a loop as long as it returns true: 

```C++
#include <stdio.h>
#include "calc.h"
int main(void) {
   printf("My Simple Calculator\n"
          "-------------------------\n");
   while(calc());
   printf("Goodbye!\n");
   return 0;
}

```

> Note: the submission main tester program may be different

## Sample execution

```text
My Simple Calculator
-------------------------
> abc
Invalid Command!
[Question mark][First Number][Operation][Second Number]<ENTER>
> ?2.2#1.1
'#' is not a valid operation, (only +,-,/,x,% and ^ are acceptable)
> ?2.2+1.1
3.300
-----
> ?2.2-1.1
1.100
-----
> ?2.2/1.1
2.000
-----
> ?2.2*1.1
'*' is not a valid operation, (only +,-,/,x,% and ^ are acceptable)
> ?2.2x1.1
2.420
-----
> ?2.2^3.3
10.648
------
> ?10%4
2
-
> ?10.5%4.2
2
-
>
Goodbye!

```

## Reflection (30%)

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.  **This should take no less than 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

You may be asked to talk about your reflection (as a presentation) in class.



## Submission Process:

### Data Entry
```text
abc
?2.2#1.1
?2.2+1.1
?2.2-1.1
?2.2/1.1
?2.2*1.1
?2.2x1.1
?2.2^3.3
?10%4
?10.5%4.2
<ENTER>
```

### Files to Submit

```text
main.c
calc.h
calc.c
utils.h  // for flushing keyboard and other possible utility functions (already provided)
utils.c
```

### Submission 

Upload the files listed above to your `matrix` account (use git or SFTP). Compile and run your code using the `gcc` compiler as shown in [Compiling and Testing Your Program](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your matrix account

```bash
~profname.proflastname/submit 144/wX/pY  <ENTER>
```
- Replace **X** with Workshop number: [`1 to 1`]
- Replace **Y** with the part number: [`1 or 2`]

and follow the instructions.


> **??Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

