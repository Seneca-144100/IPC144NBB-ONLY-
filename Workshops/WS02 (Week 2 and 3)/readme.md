# Workshop #2: Repetition, Expressions, Functions with return values
(V1.0)

For your second workshop, the **lab** (part 1) will involve creating a `Mark Average calculator` program that is coded in three source files. In the **DIY** (part 2), you will write a program that draws rectangles with a custom border and fill settings.

## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:
- Create a C program with multiple files
- Organize source code into functions and files
- Compile and link programs on different platforms
- Use expressions and loops in functions that return values and have arguments
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

## Early Testing

If you have started early (before the publish date) and need to chack the submission,  you can use the submit command to see if your workshop is done correctlty or not by using the `-beedback` option:

```bash
~profname.proflastname/submit 1??/wX/pY -feedback<ENTER>
```
- Replace **??** with your subject code (`00 or 44`)
- Replace **X** with Workshop number: [`1 to 10`]
- Replace **Y** with the part number: [`1 or 2`]

This option does everything except submitting you work.

## Late penalties 
### Part 1 (Lab)
- Submission during the lab session will get 100%. 
- Submission on the same day of the lab will get 70%.
- Submission on the next day of the lab will get 50%.
- Later submissions will get a mark of zero.

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
utils.c
marks.c
```

Also, two files are provided that use the functions written in the above two files:

- [`utilsTester.c`](lab/utilsTester.c); this file  (containing a `main` function and the prototype of the functions written in `utils.c`) tests the functions in your `utils.c` file.
- [`main.c`](lab/main.c); this file runs your main program (containing the `main` function and the prototype of the function it uses).




(**The Mark Average Calculator**) should ask the user for the number of marks received by a student. Then, the program will ask for each mark. While doing so, it should accumulate the marks of the student in a variable. After entering all the marks, the program will calculate the average of the marks and display it to the user. 

Here is a sample of the expected execution:

[correct_output.txt](lab/correct_output.txt)

## Data Entry
The values entered by the user in this example are:
```text
3
77.66
88.55
99.44
```
## Pseudo code
> Pseudocode is a simple way of writing programming code in English. It is a method of planning which enables the programmer to plan without worrying about syntax. It’s not an actual programming language. Instead, it uses human language.<br />Here’s an example of pseudocode for a program that prints all the numbers from 1 to 10:
>   ```text 
>      Start
>      Loop numbers from 1 to 10
>          Print the number
>      End loop
>   ```
> This pseudocode tells you what the program does, but not how to write it in a specific programming language. It’s a great way to start when you’re planning a new program!

We will use Pseudocodes to describe the logic in functions written in this lab.

### functions to code 
These are the functions that we will code during this lab. Use the pseudocodes to write the C code when implementing it in the coding section of the workshop.

#### **utils.c** file (utils module)
Here are the functions written `utils.c`
##### `int getInt(void)`
Pseudo code:
```text
   have 'value' as an integer variable
   read an integer into value from the console
   return the value;
```

##### `double getDouble(void)`
Pseudo code:
```text
   have 'value' as a double variable
   read a double into value from the console
   return the value;
```

#### **marks.c** file (marks module)
Only one function is written in `marks.c`

##### `double calculateAverageMark()`
Pseudocode

```text
Start calculateAverageMark
   have 'markTotal' as a double variable and initialize to zero
   have 'counter' as an integer variable and initialize to zero
   have 'markValue' as a double variable  
   have 'average' as a double variable  
   have 'noOfMarks' as an integer variable

   print "Please enter the number of marks:"
   read the number into 'noOfMarks'  <<< using getInt() function
   Loop while 'counter' is less than 'noOfMarks'
      print "Enter mark number " and ('counter' + 1)
      read the entered value into 'markValue' <<< using getDouble function
      add the 'markValue' to the 'markTotal'
      add one to the 'counter'
   End Loop
   divide 'markTotal' by 'noOfMarks' and put into average
   
   return the 'average' value;
   
End calculateAverageMark
```

#### **utilsTester.c**
This file (unitTest module) contains a main function to test the two functions in `utils.c`.

#### **main.c**
This file holds the main function running the program.


## Preparing the Workshop 2 project.

- Create a Visual studio or an XCode project and add two new files to it (`utils.c` and `marks.c`).
> For now leave marks.c empty and add the `utilsTester.c` file to your project. By doing this, first, we will develop the functions needed for data entry and test them before proceeding with the more complex function for average calculation.
- 

## Coding

### utils.c

- Add `#define _CRT_SECURE_NO_WARNINGS` in the first line of the file to turn the safety warning for the scanf function
- Include the `stdio.h` header file for data entry
- Write the two funcitons (`getInt()` and `getDouble()`) in **utils.c** using the pseudo codes above for guidance and compile and run the tester and make sure the function works correctly.

### marks.c

- After testing the utils module and making sure they work correctly, remove the `utilsTester.c` from your project and add `main.c`.
- Include `stdio.h` (there is no need for `#define _CRT_SECURE_NO_WARNINGS` here because scanf is not used in this file)
- Add the protytpes for `getInt()` and `getDouble()` functions.<br /> Prototype of a function is the complete name of the function without the body. For example, for the `greetings` function below:
   ```c
   void greetings(void){
      printf("Hello everyone!\n");
      printf("Have a beautiful day...\n");
   }
   ```
   The prototype will be:
   ```c
   void greetings(void);
   ```
- Write the function `calculateAverageMark()` uisng the provided pseudo code.
- Make sure your program works correctly with `main.c` by compiling the code as stated in the comment section of `main.c`

## LAB Submission (part 1)

Test and run your program and make sure everything works exactly as requested.

- Add, commit and push your code (upstream) to GitHub.
- Login to matrix (SSH or Putty) and Pull your `IPC144-Works` to get the files from GitHub.
- Change the current directory to the Workshop 2, lab directory 


Then, run the following command from your matrix account


```bash
~fardad.soleimanloo/submit 144/wX/pY  <ENTER>
```
- Replace **X** with Workshop number: [`1 to 8`]
- Replace **Y** with the part number: [`1 or 2`] (part 1 is the lab and part 2 is DIY)

and follow the instructions.

> Note: The submitter program will compile your code using another file called `main_prof.c`. This file will be copied to your working directory automatically. Copying the `main_prof.c` and replacing your `main.c` guaranties that your `main.c` is not modified and your functions are written the way they were supposed to.


> **⚠️Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

# Part 2 DIY (50%)

To start, first, copy your utils.c to the DIY section.

Write a function called `rectangle` in a file called `draw.c` to draw a rectangle as follows:
```c
void rectangle(char leftTop, char fillTop, char topRight, 
               char fillRight,char rightButtom, char fillButtom, 
               char buttomLeft, char fillLeft, char fillInside, 
               int width, int height);
```

The rectangle function will receive the border setting of a rectangle in character arguments and the character to fill it with and also its width and length and then it will draw it. 

For example, a call to a rectangle as follows,

`rectangle('/','=','\\', '|','/',-,'\\','|','x', 10, 5);`

will draw the following:

```text
/========\
|xxxxxxxx|
|xxxxxxxx|
|xxxxxxxx|
\--------/
``` 


You can create as many functions as you need to make the work more organized but the prototype of the rectangle function must remain the same. 

After the successful development of the function, the following main tester program should generate the expected output.

## DIY part 2 tester program

[main.c](DIY/main.c)
 
### test data entry:
```text
2
20
8
40
12
```
## DIY expected execution result

[correct_output.txt](DIY/correct_output.txt)

## Reflection (30%)

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.  **This should take no less than 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

You may be asked to talk about your reflection (as a presentation) in class.

## Submission Process:

During submission, your `main.c` will be replaced with `main_prof.c`.

This program draws 26 tables in a loop to make sure you have implemented your rectangle function correctly.

### Data Entry

```text
26
```

### Submission Output

[Submission correct output](DIY/submission_correct_output.txt)

### Files to Submit
```text
utils.c
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

