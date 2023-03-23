# Workshop #6: Structures, structure pointers, functions



In the process of doing your workshop 6 (lab ony), you will create a series of functions to load and display movie information from a file. 

## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:
- Design and create structures
- Use an Array of structures 
- Access text files to read information
- Format and display structure information on screen.
- Describe to your instructor what you have learned in completing this workshop.

## Submission Policy

This workshop is divided into one coding part and one non-coding part:

- Part 1 (**LAB**): A step-by-step guided workshop, worth 70% of the workshop's total mark
> Please note that the part 1 section is **not to be started in your first session of the week**. You should start it on your own before the day of your lab and join the session for problem-solving and submission of work. Part 1 (**LAB**) can only be submitted from a **Seneca Lab Computer** from your matrix account.
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


# LAB (60%)
## Movie record 
Having the file `movies.dat` which holds several movie records in the following format:
```text
Movie name (C-string maximum 60 chars )
tab (\t)
year (integer; four digits)
tab (\t)
Rating (C-string maximum 3 chars)
tab (\t)
Duration in minutes (integer)
tab (\t)
Genre  (C-string maximum 60 chars)
tab (\t)
Consumer Rating (float)
New line (\n)
```

In a module called `Movie` (Movie.h and Movie.c) implement the following:

### Movie structure

In `Movie.h` Create a structure called `Movie` that can hold the above information.

### Movie-related functions
create the following movie-related and utility functions
#### Load Movie
```C
int loadMovie(struct Movie* mptr, FILE* fptr)
```
This function scans a record from the open file pointed by `fptr` and stores the values in the `Movie` structure pointed by the `mptr`  argument.

If the read is successful, function returns true(1), otherwise false (0)

### Print in Width
This function prints strings in a specified width and truncates them if needed.
```C
void printInWidth(const char str[], int width);
```
The function starts printing the `str` characters one by one until it reaches either the end of the `str` data (NULL character) or the `width`; whichever comes first. 

If the number of characters printed is less than `width` then it will continue printing spaces up to the `width` value.

Execution example:
```C
putchar('|');
printInWidth("ABC", 10);
puthchar('|');
```
will print the following:
```text
|ABC       |
```
And
```C
putchar('|');
printInWidth("ABCDEFGHIJKLMNOPQ", 10);
puthchar('|');
```
will print the following:
```text
|ABCDEFGHIJ|
```

### List Movie
Create the following function:
```C
void list(const struct Movie* mptr, int row);
```
Prints the information of one Movie record pointed by the `mptr` argument on the screen in a linear format as follows:

```text
|  12 | A Beautiful Mind     | 2001 |   PG | 2:15 | Biography,Drama           |  8.2 |
```
The above information (left to right) are: row (the argument), Movie title, year, rating, duration in (hour:min), Genres, Consumer rating
- Movie Title format: only the first 20 chars are printed and if the title is shorter the rest is filled with spaces (use the PrintInWidth function)
- Genre Format: only the first 25 chars are printed and if the Genre is shorter the rest is filled with spaces (use the PrintInWidth function)
- The rest are printed as you see above

### Display movie
```C
void display(const struct Movie* m);
```
This function will display all the information of the Movie pointed by the `mptr' argument in a Form format as follows:

```text
Title: Terminator 2, Judgment Day
Year: 1991
Rating: 14A
Duration: 2:17
Genres: Action,Sci-Fi
Consumer Rating: 8.5
```

### get Movie Title
Returns the address of the title of the movie structure pointed by the `mptr` argument:
```C
const char* getMovieTitle(const struct Movie* mptr);
```

## Submission Process:
Test your functions using <a href="lab/main.c" target="_blank">the `main.c` tester program</a>

### Data Entry
```text
Apo
y
tur
n
```

### Expected output

<a href="lab/correct_output.txt" target="_blank">correct_output.txt</a>

### Files to Submit
```text
Movie.h
Movie.c
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

#### Submitting Utils Module
To have your custom utils module compiled with your workshop and submitted, add a **u** to the part number of your workshop (i.e **u**p1 for part one and **u**p2 for part two) and issue the following submission command instead of the above:
```text
~profname.proflastname/submit 144/w#/upX
```
Replace **#** with workshop number<br />
Replace **X** with part number


See [Custom Code Submission](#custom-code-submission) section for more detail

> **⚠️Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty



## Reflection (30%)

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.  **This should take no less than 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

You may be asked to talk about your reflection (as a presentation) in class.



## Submission Process:

### Submission 

Upload the files reflect.txt file to you matrix account.

Then, run the following command from your matrix account

```bash
~profname.proflastname/submit 144/wX/pY  <ENTER>
```
- Replace **X** with Workshop number: [`1 to 8`]
- Replace **Y** with the part number: [`1 or 2`]

and follow the instructions.


> **??Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

