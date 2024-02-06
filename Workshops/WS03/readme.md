# Workshop #3: LOGIC <br />If, Else, Validation, Functions 


In the process of doing your workshop 3, in the **lab** (part 1) you are to create 4 functions to be used in the DIY section to write a program.


## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:
- Use If, If else and If /else if statements to code decision-making logic
- Use functions which receive and return a value
- Perform foolproof numerical data entry
- reuse functions 
- describe to your instructor what you have learned in completing this workshop.

## Submission Policy

This workshop is divided into two coding parts and one non-coding part:

- Part 1 (**LAB**): A step-by-step guided workshop, worth 20% of the workshop's total mark.
> In this workshop we are introducing unit tests. Therefore We will start the workshop in the lab.
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
The lab part is due the day after the lab. Then 10% penalty for one day and then 30% for each day after that.
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


## Lab files
In this part of the workshop, you will start by writing a module implemented in a file called `marks.c` which contains your function definitions for: `prnGrade`, `grade`, `getNoOfStudents` and `getMark`.

After completion, your program will receive a series of marks for a test received by students. Then it will convert each mark to a percentage and grade, find the maximum, minimum and average of all the marks and print a report. Grade conversion is done based on the following table:

### Mark-Grade table
| Mark     | Grade |
|----------|-------|
| 0 to 50 | F     |
| 50 to 59 | D     |
| 60 to 69 | C    |
| 70 to 79 | B    |
| 80 to 89 | A    |
| 90 to 100 | A+    |

## Functions to write:
You are to complete the following four functions for the lab section:

### `void prnGrade(char letterGrade);`
Receives a character and prints it. If the character is `'+'`, it will print `A+`

For example:
```c
prnGrade('X');
prints: X
prnGrade('B');
prints: B
prnGrade('+');
prints: A+
```
#### `prnGrade` pseudo code
```text
receive a character argument: arg,
if arg is '+' 
   print 'A'
print arg
```
### `char grade(int markOutOf100);`
Receives an argument with a percentage value for a mark. Returns the character representation of the mark base the [Mark-Grade table](#mark-grade-table). Invalid mark values will return the character `'X'`. Valid marks above 89 will return the character `'+'`.

For example:
```c
ch = grade(-10);
ch will be 'X';
ch = grade(75);
ch will be 'B'
ch = grade(95);
ch will be '+'
```

#### `grade` pseudo code
```text
Receive an integer argument: arg
Having a character called `grd` set to `'X'`
if arg is greater than -1 and less than 50
   set grd to `'F'`
if arg is greater than 49 and less than 60
   set grd to `'D'`
....
....
....
if arg is greater than 79 and less than 90
   set grd to `'A'`
if arg is greater than 89 and less than 101
   set grd to `'+'`
return grd
```

### `int getNoOfStudents(void);`
Receives an integer from the console representing the number of students and if the value is between 5 and 35 (inclusive) it will return it, otherwise, it will print an appropriate error message and return 0;

#### `getNoOfStudents` pseudo code
- Receives an integer from the console after printing the prompt:
`"Please enter the number of students\n> "`
- If the integer is less than 5 it prints `"Minimum number of students is 5!\n"` and sets the integer to 0
- if the integer is more than 35 it prints `"Maximum number of students is 35!\n"` and sets the integer to 0
- at the end returns the integer

### `int getMark(int maximumAcceptableMarkValue);`
Receives an integer argument for the maximum acceptable mark value and asks the user for a mark. If the mark is below zero or more than the argument value, prints an error and sets the mark t0 -1. Otherwise, it will calculate the percentage value of the mark using the following formula: `mark = mark * 100 / maximumAcceptableMarkValue`. At the end, the mark is returned

### `getMark` pseudo code
```text
Receive an integer argument: max
Prompt "Please print a mark between 0 and max value:\n> "
Read the mark
if the mark has an invalid value
  set the mark to -1
  print "Invalid Mark!\n"
else
  set the mark to mark * 100/ max
end if
return the mark
```

## Unit Test
A Unit test is a program written to test all possible executions of a code to make sure it works correctly. Looking at the main provided you will notice that initially 4 tester functions are called,  to test the four functions you have written and then at the end a simple application is written using those functions to make sure the presentation of functions is done properly. 

Initially, all but one of these functions are commented out. By doing so, you can develop and test the functions one at a time:

```c
// the main function:
int main(void) {
   prnGradeTester();  // testing prnGrade
//   gradeTester();   // testing grade
//   getNoOfStudentsTester(); // testing getNoOfStudents
//   getMarkTester(); // testing getMark
//   testerProgram(); // presentation test.
   return 0;
}
```

When coding, start your development (always) by creating hollow functions that just compile and do nothing:

```c
void prnGrade(char grade) {
}

int getNoOfStudents(void) {
   int value;
   return value;
}

int getMark(int maximum) {
   int mark;
   return percentage;
}

char grade(int mark) {
   char ret;
   return ret;
}

```

This allows you to compile the entire code and develop your functions one at a time. This routine is called `Prototyping`.

## Main tester program:
[main.c](lab/main.c)

## Coding

Clone/Download the workshop to your local computer. 

Pull your repository

Copy the Workshop 3 files to your local repository or folder.

Open the project and start creating the hollow functions in marks.c.

1. Then start by coding the simplest function that preferably doesn't rely on other functions. 
2. Comment out all the tester function calls in the main but the one that is testing the function you are implementing. 
3. Complete the implementation, commit and push your code 
4. Repeat (step 1) and code the next function until all of them are developed.

## Sample output

[correct_output.txt](lab/correct_output.txt)

## Submission Process:

### Data Entry

Follow the instruction of unit tests.

### Files to Submit
```text
marks.c
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

Under construction!

## Reflection (30%)

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.  **This should take no less than 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

You may be asked to talk about your reflection (as a presentation) in class.

## Submission Process:

### Data Entry

Follow the instructions during submission

### Files to Submit
```text
marks.c
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


> **??Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

