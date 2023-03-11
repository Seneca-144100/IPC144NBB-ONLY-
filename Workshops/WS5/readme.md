# Workshop #5: Arrays, C strings (null-terminated array of characters) and functions

Version 0.8 (under review)
Version 0.9: updated instructions. Fixed spelling mistakes
Version 0.91: updated instructions again. 

In the process of doing your workshop 5 (lab and DIY), you will create a **Subject Mark Report** program. This program will receive Subject-Code (i.e., IPC144NAA) and a series of student information (student number and mark) and print a report based on the received information 

## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:
- Use Cstrings to hold text
- Use arrays to hold the formation to process later.
- Pass read-only arrays to functions
- Pass arrays to functions and fill them with information remotely (using the function)
- Describe to your instructor what you have learned in completing this workshop.

## Submission Policy

This workshop is divided into two coding parts and one non-coding part:

- Part 1 (**LAB**): A step-by-step guided workshop, worth 20% of the workshop's total mark
> Please note that the part 1 section is **not to be started in your first session of the week**. You should start it on your own before the day of your lab and join the session for problem-solving and submission of work. Part 1 (**LAB**) can only be submitted from a **Seneca Lab Computer** from your matrix account.
- Part 2 (**DIY**): A Do It Yourself type of workshop that is much more open-ended and is worth 50% of the workshop's total mark.  
- *reflection*: non-coding part, to be submitted together with *DIY* part. The reflection is worth **30%** of the whole workshop's mark. If your professor deems it insufficient, you will lose 30% of your workshop mark.

### Custom code submission

If you have any additional custom code, (i.e. custom utility functions) that you want to reuse in the workshop save them under a module called utils (`utils.c and utils.h`) and submit them with your workshop using the instructions in the "[Submitting Utils Module](#submitting-utils-module)" section.

> use this only if the workshop does not have a utils module already in the use

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
## Subject Marks Report Program

### printReport
```C
void printReport(const char subjectCode[], const int studentNumbers[], 
                                           const int marks[], int noOfStudents)`
```
In this part of the workshop, code a function to generate a report from information stored in several arrays in a module called `classList`  (i.e., classList.h and classList.c)

The following tester program [printReportTester.c](lab/printReportTester.c) demonstrates how the function is used and what is the output:

```C++
#include "classList.h"
int main() {
   int stno[4] = { 12345, 23456, 345678, 45678 };
   int mark[4] = { 55,66,44,88 };
   printReport("IPC144NBB", stno, mark, 4);
   return 0;
}
```

#### printReport() output:

```text
SUBJECT MARKS REPORT!
  +---------------+
  | IPC144NBB     |
  +--------+------+
  | Std No | mark |
  +--------+------+
  | 012345 |   55 |
  | 023456 |   66 |
  | 345678 |   44 |
  | 045678 |   88 |
  +--------+------+
  |Average |   63 |
  |Highest |   88 |
  |Lowest  |   44 |
  +--------+------+
```
#### implementation 

##### step 1 
Add the function body to `classList.c` and the prototype to `classList.h`. In your function, you will add four integer variables. Specifically,
you will be adding a variable for your loop counter, the average mark, lowest mark, and highest mark.


##### step 2
Make the function only print the first six lines of output. Use the output sample of the static lines and use `%s` format specifier in printf to print the subject Code. Use a specific width setting in `%s` to have the surrounding bars (`|`) aligned. To review how to align our character string's output, check out: https://intro2c.sdds.ca/F-Refinements/character-strings#qualifiers 

Now test the function and make sure you get this output:

```text
SUBJECT MARKS REPORT!
  +---------------+
  | IPC144NBB     |
  +--------+------+
  | Std No | mark |
  +--------+------+
```

#### step 3
In a loop that starts from zero that goes up to the `number of students` argument value - print each data line with student number and marks. These values are held in the elements of the `student numbers` array argument and the `marks` array argument

#### step 4
While looping, keep track of the lowest and highest marks (as covered in class) and the value of each `marks` element to the average mark.

#### step 5
Divide the value of the average by the number of students and then print the last five lines of the report using these values.

### main.c
Add the code in the [main.c]([](lab/main.c)) file as commented in the file.

#### Messages and data entry formats:

##### Student Information Entry Prompt
`Enter ## student numbers and student marks...`  ## is replaced with the number of students 

##### Student Data Entry Format
```text
RR:
Student Number: 123456
Mark: 99
```
- RR is replaced with the row number of the current data entry. (1 to number of students)
- 123456 is an example of a valid user-entered student number
- 99 is an example of a valid user-entered student mark

### execution sample:
```text
Enter subject Name: IPC144ZAA
Enter the number of students (max 50): 4
Enter 4 student numbers and student marks...
1:
Student Number: 11111
Mark: 11
2:
Student Number: 22222
Mark: 22
3:
Student Number: 33333
Mark: 33
4:
Student Number: 44444
Mark: 44

SUBJECT MARKS REPORT!
  +---------------+
  | IPC144ZAA     |
  +--------+------+
  | Std No | mark |
  +--------+------+
  | 011111 |   11 |
  | 022222 |   22 |
  | 033333 |   33 |
  | 044444 |   44 |
  +--------+------+
  |Average |   27 |
  |Highest |   44 |
  |Lowest  |   11 |
  +--------+------+
```
## Submission Process:

### Data Entry
```text
IPC144ZAA
4
11111
11
22222
22
33333
33
44444
44
```

### Files to Submit

```text
main.c
classList.h
classList.c
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

#### Submitting Utils Module
To have your custom utils module compiled with your workshop and submitted, add a **u** to the part number of your workshop (i.e **u**p1 for part one and **u**p2 for part two) and issue the following submission command instead of the above:
```text
~profname.proflastname/submit 144/w#/upX
```
Replace **#** with workshop number<br />
Replace **X** with part number


See [Custom Code Submission](#custom-code-submission) section for more detail

> **⚠️Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty
# Part 2 DIY (50%)

Improve your lab work by making your number of data entries foolproof and your report repeatable using the provided main function.

## Code improvement 

### step 1
Study the main function below. You will be coding `void subjectMarksReport(void)` and `int getMMInt(int min, int max, const char valueName[])`.
For `void subjectMarksReport(void)`, put its definition in `classList.c` and its prototype in `classList.h`.
For `int getMMInt(int min, int max, const char valueName[])`, put its definition in `utils.c` and its prototype in `utils.h`.
Note, `void subjectMarksReport(void)` call the `int getMMInt(int min, int max, const char valueName[])` that you code.

### step 2
compile and run your code with the provided main tester and make sure everything works.

```C++
#include <stdio.h>
#include "classList.h"
#include "utils.h"
int main(void) {
   int i;
   printf("Subject Performance report\n");
   printf("-------------------------\n");
   do {
      subjectMarksReport();
      printf(" Exit? ");
   } while(!yes());
   return 0;
}
```

### step 3
```C++
int getMMInt(int min, int max, const char valueName[]);
```
add a function to utils.c to get an integer within a range. Call the `getInt()` function for integer validation and then check the received value to be between min and max. If not print the following message:  
```text
[1<=??????<=50], try again: _
```
replace ?????? with the valueName received from the argument list. 

For example the following function call:  
```C++
int age:
printf("Enter your age: ")
age = getMMInt(18, 99, "AGE");
printf("You are %d years old!\n", age);
```
should run as follows:  
```text
Enter your age: 9
[18<=AGE<=99], try again: abc
Invalid Integer, try again: 100
[18<=AGE<=99], try again: 40
You are 40 years old!
```

### step 4
Have all your integer entries use the `getMMInt` function with the following value names and ranges:  

```text
[1<=Number of students<=50]
[9999<=Student Number<=1000000]
[0<=Mark<=100]

```

### step 5
Improve your report output as displayed below:
```text
 SUBJECT MARKS REPORT!
 +-------------------+
 | IPC144NAA         |
 +---+--------+------+
 |Row| Std No | mark |
 +---+--------+------+
 | 1 | 012345 |   66 |
 | 2 | 023456 |   77 |
 | 3 | 034567 |   88 |
 | 4 | 045678 |   99 |
 +---+--------+------+
 | Average    |   82 |
 | Highest    |   99 |
 | Lowest     |   66 |
 +------------+------+
```

## Test program

[main.c](DIY/main.c)

## Execution Sample

[correct_output.txt](DIY/correct_output.txt)

## Reflection (30%)

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.  **This should take no less than 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

You may be asked to talk about your reflection (as a presentation) in class.



## Submission Process:

### Data Entry
```text
OOP244NCC
5
1111111
11111
abc
101
100
22222
22
33333
33
44444
44
55555
55

```

### Files to Submit

```text
main.c
classList.h
classList.c
utils.h  
utils.c
```

### Submission 

Upload the files listed above to your `matrix` account (use git or SFTP). Compile and run your code using the `gcc` compiler as shown in [Compiling and Testing Your Program](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your matrix account

```bash
~profname.proflastname/submit 144/wX/pY  <ENTER>
```
- Replace **X** with Workshop number: [`1 to 8`]
- Replace **Y** with the part number: [`1 or 2`]

and follow the instructions.


> **??Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

