# Workshop #4: Parallel Arrays.


In the process of doing your workshop 4 you are to create 2 functions to read student mark information into 2 parallel arrays and then print a report for them.


## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:
- Pass arrays to functions
- Access array elements
- modify the contents of an array in a function
- use "const" to pass a read-only array to a function
- use parallel arrays to handle records of an Item.

## Submission Policy


This workshop is divided into two parts, one coding part and one non-coding part.

- The coding part is worth 100% of the mark 
- *reflection*: non-coding part. The reflection doesn't have marks associated with it but can incur a penalty of max 30% of the whole workshop's mark if your professor deems it insufficient (you make your marks from the code, but you can lose some on the reflection).

The submission of the workshop will be under the name `144/w4/p1`

## Due Dates

The Due dates depend on your section. Please choose the "-due" option of the submitter program to see the exact due date of your section:

```bash
~profname.proflastname/submit 1??/wX/pY -due<ENTER>
```
- Replace **??** with your subject code (`00 or 44`)
- Replace **X** with Workshop number: [`1 to 10`]
- Replace **Y** with the part number: [`1 or 2`]

## Late penalties

The workshop is due Three days after the posting. Then 10% penalty for each day being late up to 5 days.

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


## Modules

### `report module`
You are to implement two functions in a file called 'report.c' and add their prototypes to a header file 'report.h'. These functions will receive the following students' mark information and then print a report based on the information entered:

- Student Number: a six-digit integer, example: 123123
- Mark: a float number, example: 85.6

The functions written in this file will be tested using a unit test in 'main.c'.


### `utils module` (provided)
You can use the provided utils module for your data entry.


## Functions to write:

You are to complete the following two functions for the lab section:

### `void readStudentInfo( int stno[], float mark[], int num );`
This function will receive three parallel arrays and fill the arrays with the information entered by the user as follows.

First the function will display a message for the data entry:
```text
Enter ?? student records:
```
`??` is replaced with the value of `num`

Then it will get the students' information as follows

```text
Enter Student Information # ??:
Student Number
> 123123
Mark
> 55.6
---------------------------------
```
> The above example assumes `123123` and `55.6` are entered by the user and the `??` is replaced with the data entry number

We will assume the user enters valid information. (no validation needed)

### `void printReport(const int stno[],const float mark[], int num);

This function will print the student information in the following format:

- Student number in 15 spaces left justified
- `|`
- Mark in 6 spaces with one digit after the decimal point

Example
```text
123123         |  55.6
```

The student report should have a header and a closing footer displaying the class average as follows:

```text
student number   mark
---------------+------
123123         |  66.6
234234         |  55.5
345345         |  99.9
---------------+------
       Average:   74.0
```



## Main tester program:
[main.c](lab/main.c)

## Coding

## Sample output

[correct_output.txt](lab/correct_output.txt)

## Submission Process:
### Reflection

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.  **This should take no less than 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

### Data Entry

Follow the instructions of the unit test.

### Files to Submit
```text
utils.c
utils.h
report.c
report.h
main.c
reflect.txt
```


### Submission 

Upload the files listed above to your `matrix` account (use git or SFTP). Compile and run your code using the `gcc` compiler as shown in [Compiling and Testing Your Program](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your matrix account

```bash
~fardad.soleimanloo/submit 144/w4/p1  <ENTER>
```

and follow the instructions.

> **Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

