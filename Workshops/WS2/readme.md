# Workshop #2: Repetition, Expressions, Functions with arguments
(V1.0)

For your second workshop, the **lab** (part 1) will involve creating a `Money Spending Calculator` program that is coded in two source files. In the **DIY** (part 2), you will write a program that draws rectangles with a custom border and fill settings.

## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:
- Create a C program with multiple files
- Organize source code into functions and files
- Compile and link programs on different platforms
- Use expressions and loops in functions that have arguments
- Describe to your instructor what you have learned in completing this workshop

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
You are allowed to submit your work up to 2 days after the due date with 30% penalty for each day. After that, the submission will be closed and the mark will be zero.

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

In this part of the workshop, you will start by writing a program implemented in two files:
```text
main.c
shopping.c
```
- main.c  (containing the `main` function and the prototype of other functions)
- shopping.c (containing the functions `line` and `shoppingStats` )

(**The Money Spending Calculator**) should ask the user for the number of items they have purchased. Then, the program will ask for the price of each item. While doing so, it should accumulate the price of the items in a variable. After entering the price of each item, the program will tell the user the total money they spent and the average price of each item.

Here is a sample of the expected execution:

```text
Money Spending Calculator
=========================
How many items were bought?
> 3
Please enter the price of the 3 items bought...
1> 453.22
2> 100.60
3> 255.40
--------------------------------------------------
Total price for all the items purchased: 809.22
Average price of the items: 269.74
==================================================
```

The values entered by the user in this example are:
```text
3
453.22
100.60
255.40
```

## Preparing the workshop 2 project.

- Create a Visual studio or an XCode project and add two new files to it (`main.c` and `shopping.c`).

## Coding
### the `line` function
As shown in the execution sample, the different lines you display can have different sizes and use different characters. Design your function to accept two arguments: one argument for the character that will be used throughout the entire line (e.g., = - #) and another argument for the size of the line (i.e., the number of characters in that line).
```C
// fill: the character to draw the line with.
// length: the number of characters to print.
void line(char fill, int length);
```

Start by creating a tester program for the function `line` even before implementing it:

In `main.c` include the standard input/output header file and add the prototype of the function `line`. Then, write the main function and call the `line` in different ways.

For example:

```c
int main(void){
    line('=', 20);
    line('-', 40);
    line('#', 60);
    return 0;
}
```

You can even compile the `main.c` code (without creating the executable) just to check and see if the syntax is ok. 

Using the command line (using `gcc`) you can compile the individual files without creating the executable as follows:

```bash
gcc filename.c -c<ENTER>
```

### Coding the `line` function
In `shopping.c` file create the line function and code it using the latest topics you learned as follows:

- Create the function complete with its name and body
- Inside the body of the function, write a loop that starts from zero and goes up to the value of the argument `length`. (a loop that repeats `length` number of times)
- In the body of the loop, print the character argument `fill` once.
- After the body of the loop, print a new line. 

Test the function by compiling (building) the whole project or using the command line as follows:

```bash
gcc shopping.c main.c -o ws.exe -Wall<ENTER>
```
If successful, this command compiles the two files and links them to create an executable called `ws.exe`

Run the executable and the output of the tester (having the above three `line` function calls in `main`) and the output should look like this:

```text
====================
----------------------------------------
############################################################
```

## the `shoppingStats` and `main` function
`shoppingStats` job is to receive the number of items and then ask the user for each item's price and do the calculations and print the report. Therefore this function only needs one argument for the number of items:

```C
// noOfItem: the number of items purchased
void shoppingStats(int noOfItems);
```

### the main program
Assume that the function is already written and modify and complete your `main` function in `main.c` to do what it is responsible to do:

- Add the function prototype to the top of the file (now you have two prototypes)

In `main` function:
- Create an integer variable to get the number of items purchased from the user.
- Print the title of the program:  `"Money Spending Calculator"`
- Draw a line with `=` character and length of 25.
- Ask the user for the number of items purchased:<br />
`"How many items were bought?"`
- Go to a new line and display a prompt:<br />
`"> "`
- Scan the number of items into the address of the integer variable
- call `shoppingStats` by passing the value of the integer as its argument
- done! (return 0)

### the `shoppingStats` function
To test the main program add the `shoppingStats` function to the `shopping.c` file. For now, just create the function with an empty body. (don't code anything in it).

Now the function actually exists, but since its body is empty, it will do nothing. 

Compile and run the whole project and make sure your main program runs properly. 

> Note that the `shoppingStats` function is only a mockup function and therefore your main program (after getting the number of items) will not do anything.

The program should run like this at this stage:  

```text
Money Spending Calculator
=========================
How many items were bought?
> 3
```

#### Coding `shoppingStats` function
This function needs to calculate the  following:
- the sum of all the items
- the average price of an item.

For this the function needs the following variables:
- an integer to keep track of the number of loops done and prompt the row number to the user
- A double variable to scan each item's price from the (user's) console
- A double variable to accumulate the sum of all the items. 
- A double variable to calculate the average into.

- After creating these variables (with proper names and comments in front of each variable) start by prompting the user to start entering the item prices:<br />
`"Please enter the price of the ## items bought...\n"`, place the number of items (`noOfItems` argument value) where `##` is (using the integer format specifier)

- Set the value of the sum variable to zero to start accumulating the values from zero.

- Then create a loop to start from zero going up to the number of items. 
- At the beginning of each loop prompt the user with a row number and an entry sign:<br />
`"##> "`, replace the `##` with the row number.
- Then Scan the double number from the console into the address of the item price variable
- And add the scanned value to the sum variable. This is the end of the body of the loop(except maybe adding one to the counter, if you are using a while loop)
- After the loop calculate the average by dividing the sum by the number of items.
- print the report in the following format: 

```text
--------------------------------------------------
Total price for all the items purchased: ###.##
Average price of the items: ###.##
==================================================
```
> To print the double values with two digits after the decimal point use this form of the double format specifier: `"%.2lf"`. The `.2` before the `lf` means two digits after the decimal point




## LAB Submission (part 1)
Test and run your program and make sure everything works exactly as requested.

- Add, commit and push your code (upstream) to GitHub.
- Login to matrix (SSH or Putty) and Pull your `IPC144-Works` to get the files from GitHub.
- Change the current directory to the Workshop 2, lab directory 


Then, run the following command from your matrix account

> Note: The submitter program will compile your code using another file called `main_prof.c`. This file will be copied to your working directory automatically. The `main_prof.c` uses the `line` and the `shoppingStats` to test your code. The output of the program may be different from your tester. If you have designed your functions exactly as stated in the workshop your submission will pass. Otherwise, you will get a message specifying exactly what is wrong with your code.


```bash
~fardad.soleimanloo/submit 144/wX/pY  <ENTER>
```
- Replace **X** with Workshop number: [`1 to 8`]
- Replace **Y** with the part number: [`1 or 2`] (part 1 is the lab and part 2 is DIY)

and follow the instructions.

> **⚠️Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

# Part 2 DIY (50%)

Write a function called `rectangle` in a file called `draw.c` to draw a rectangle as follows:
```C
void rectangle(char leftTop, char top, char topRight, 
               char right,char rightButtom, char buttom, 
               char buttomLeft, char left, char fill, 
               int width, int height);
```
The rectangle function will receive the border setting of a rectangle in text format and the character to fill it with and also its width and length and then it will draw it. 

You can create as many functions as you need to make the work more organized but the prototype of the rectangle function must remain the same. 

After the successful development of the function, the following main tester program should generate the expected output.

## DIY part 2 tester program

```C
/***********************************************************************
// IPC Workshop 2 p2: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file will be replaced by another tester program during the submission 
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
void rectangle(char leftTop, char top, char topRight, 
               char right,char rightButtom, char buttom, 
               char buttomLeft, char left, char fill, 
               int width, int height);

int main(void) {
   rectangle('+', '-', '+', '|', '+', '-', '+', '|', ' ', 20, 8);
   rectangle('/', '-', '\\', '|', '/', '-', '\\', '|', 'X', 50, 14);
   return 0;
}
```
## DIY expected output
```text
+------------------+
|                  |
|                  |
|                  |
|                  |
|                  |
|                  |
+------------------+
/------------------------------------------------\
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
\------------------------------------------------/
```
## Reflection (30%)

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.  **This should take no less than 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

You may be asked to talk about your reflection (as a presentation) in class.

## Submission Process:

### Data Entry

Follow the instructions during submission

### Files to Submit
```text
draw.c
main.c
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


> **⚠️Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

