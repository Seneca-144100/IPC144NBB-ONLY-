# Workshop #1: First program
(V1.0)

In the process of doing your first workshop, in the **lab** (part 1) you are to create a project using Visual Studio and write a simple program that prints few messages. In the **DIY** (part 2) you will write a simple program that receives simple information from a user and performs a task and printing the result.

## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:
- create your first C program
- organize source code into functions
- compile and link programs in different platforms.
- transfer you files from one computer to another.
- describe to your instructor what you have learned in completing this workshop.

## Submission Policy

This workshop is divided into two coding parts and one non-coding part:

- Part 1 (**LAB**): A step-by-step guided workshop, worth 20% of the workshop's total mark
> Please note that the part 1 section is **not to be started in your first session of the week**. You should start it on your own before the day of your lab and join the session for problem solving and submission of work. Part 1 (**LAB**) can only be submitted from a **Seneca Lab Computer** from your matrix account.
- Part 2 (**DIY**): A Do It Yourself type of workshop that is much more open-ended and is worth 50% of the workshop's total mark.  
- *reflection*: non-coding part, to be submitted together with *DIY* part. The reflection is worth **30%** of the whole workshop's mark. If your professor deems it insufficient, you will lose 30% of your workshop mark.

## Due Dates

The Due dates depend on your section. Please choose the "-due" option of the submitter program to see the exact due date of your section:

```bash
~profname.proflastname/submit 144/wX/pY -due<ENTER>
```
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

In this part of the workshop, you will start by writing a program implemented in one file:
- lab1.c  (containing three functions for printing a title, a line and your information and the `main()` function )



## Preparing the workshop 1 project.

- Pull your IPC144-Works repository (created in workshop zero) to make sure your computer and GitHub repositories are in sync.
- In your IPC144-Works folder (that is a cloned repository) create a new folder called `workshops`
- In the `workshops` folder create another folder called `ws1` for workshop 1.

Video: 
- [Windows GUI](https://youtu.be/_3PcUI68MXs)
- [Command line: Linux, gitbash (Matrix)](https://youtu.be/N7B4hl4Wr9E)
- [Command line (Mac)](https://youtu.be/SX-8qW_Ndgo)

### Create a Project
#### Visual studio 
- Open Visual Studio
- Create a new project
- Select Empty Project: `C++` `Windows` `Console`
- in project name type: `lab`
- in location select the `ws1` folder you just created
- Make sure `Place solution and project in the same directory is checked
- Click on `Create`
- [Video](https://youtu.be/01vRI3RnH_c)

#### Xcode
- Open Xcode
- Select `Create a new Xcode project`
- From the template window select `macOS` 
- In the application section of the same window select `Command Line Tool`
- Click on `Next`
- In `Product Name` type the name of the project. In our case, it is `lab`
- In `Organization Idendtifier` type whatever you want to appear in the comment of the sample file
- Click on `Next`
- Select the `ws1` you created earlier
- Click on `Create`
- rename the sample `main.c` file to `lab1.c`
- [video](https://youtu.be/LmOb-IA5x90)

### Using the command line
If you are using the command line, simply create a folder called `lab` in the `ws1` folder<br />
[Video](https://youtu.be/WjVb8uwX7GU)

## Writing your first program
Create a file called lab1.c in the lab project: `IPC144-Works/workshops/ws1/lab/lab1.c`

### Visual Studio
- Click on Solution Explorer 
- Right-click on `Source Files`, select `Add`, and then `New Item`
- In the `Visual C++` section, select `C++ files` (this includes C files too)
- In the Name section, type `lab1.c`
- Click on `Add`
 
### XCode Mac
- Edit the `lab1.c` file you created in the previous step.

### Mac, Linux (Matrix) command line
- Open the terminal client
- Change the directory to the `ws1` folder you created
- Make a directory for the lab part of workshop 1<br />
  `$ mkdir lab<ENTER>`
- Change the directory to the `lab` folder
- Using the nano text editor create a file called `lab1.c`<br />
  `$ nano lab1.c<ENTER>`



## Start coding 
Open `lab1.c` and add the following:

- Include the `stdio.h`
- Create an empty main function:<br />
    `int main(void)`
- Add an empty function below the main function called `title` that receives and returns nothing (i.e. void):

`void title(void)`

- Inside the title function, use `printf` to print the following:

    - `IPC144 NBB`
    - TAB (\t)
    - `Workshop 1`
    - TAB (\t)
    - `Part 1`
    - Newline (\n) 
    
- Add the prototype of the `title` function above the main function. Call the title function within main. The prototype of a function is its name without a body: `void title(void);`


### Compiling and running the program
#### Visual Studio:

To test and run your program using Visual Studio, you can do one of the following options:  
- Hold `<Ctrl>` key and press `[F5]`<br />
OR
- From the `Debug` Menu select `Start Without Debugging

If there are no errors in your program, you should see that the program compiles and the output will be displayed on a `Console` window. You can hit `Enter`
on your keyboard to close the console window after the program's execution.

#### Xcode (mac)

Click the "play button" :arrow_forward: at the top of the left panel to compile and run your program

#### Command line
- Save lab1.c and exit the text editor
- Issue the command: `gcc  -Wall -o ws.exe lab1.c<ENTER>`
    - gcc: C compile command (the compiler)
    - `-Wall` shows all the warnings
    - `-o` set output executable file name
    - `ws.exe` naming the executable to ws.exe
    - `lab1.c`: the name of the file to compile <br />
        (this can be several files if needed: i.e. '`file1.c file2.c file3.c...`)
- If no error messages are displayed, the compilation is successful!<br />
  ***No news is good news!*** :wink:  
- run the compiled program as follows:<br />
  `./ws.exe<ENTER>`

> The executable file in Linux does not need the `.exe` extension. We add it just to show that the file is an executable. Adding the extension also prevents the file from being pushed to GitHub.

### The first step output
The output should be EXACTLY as follows:
```text
IPC144 NBB      Workshop 1      Part 1
```

## Additional functions to write:
Create two more functions:

### line function
Create a function called `line` that returns and receives nothing (void) that prints exactly 60 dashes (`-`) and a new line (`\n`). Add the prototype of the function line above the main. 

### info function
Create a function called `info` that returns and receives nothing (void) that prints EXACTLY the following:

- `Name:`
- Newline and TAB characters
- Your Name
- Newline
- `Email:`
- Newline and TAB characters
- Your Seneca Email
- Newline

If your name is `Fred Soley` and your email is `fsoley@myseneca.ca`, the output should be exactly as follows:

```text
Name:
        Fred Soley
Email:
        fsoley@myseneca.ca
```

Add the prototype of function `info` above the main.

### completing the main program.
Call the three functions in the main function in a way that the following output is produced:


## LAB Execution example

```text
IPC144 NBB      Workshop 1      Part 1
------------------------------------------------------------
Name:
        Fred Soley
Email:
        fsleima@myseneca.ca
------------------------------------------------------------
```

## Add, commit and push your code to GitHub
If everything worked correctly, pull, add, commit and push your code (upstream) to GitHub:

### Using TortoiseGit (Windows)
- Go back to the main repository folder `IPC144-Works`.
- Pull the repository to make sure it is in sync with your computer<br />
  Right-click on the folder and select `TortoiseGit/Pull`
- Add and commit<br />
  Right-click on the folder and select `TortoiseGit Commit`
    - Between the top and bottom panels click on `All`
    - Click on `Commit`
- Click on `Push`

### Command line (mac, Linux, Matrix)
- Go back to the main repository folder `IPC144-Works`.
- type `git pull<ENTER>`
- type `git add *<ENTER>`
- type `git commit -m"ws1 lab"<ENTER>` This tags the commit with `ws1 lab`
- type `git push<ENTER>`


## LAB Submission (part 1)

### sending the files to matrix

- Login to matrix (SSH or Putty) and Pull your `IPC144-Works` to get the files from GitHub.
- Change the current directory to the `lab` directory you created where your `lab1.c` is.


Then, run the following command from your matrix account

```bash
~fardad.soleimanloo/submit 144/wX/pY  <ENTER>
```
- Replace **X** with Workshop number: [`1 to 8`]
- Replace **Y** with the part number: [`1 or 2`] (part 1 is the lab and part 2 is DIY)

and follow the instructions.

> **⚠️Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

# Part 2 DIY (50%)

> This part must be done after the `scanf` function is covered

Write a program in a file called `diy1.c` that receives three marks from a student for subjects IPC144, ULI101, and EAC150. These marks are integers from 0 to 100. After receiving the marks, print the average mark of the three subjects.

> Use your `info` and `line` functions from the lab section of this workshop. Also, use your `title` function from lab but make it print `Part 2 instead of Part 1`

### Execution sample:
If the marks for the there subjects are entered as 77, 55 and 82 the execution should be as follows:

> values 77, 55 and 82 are entered by the user

```text
IPC144 NBB      Workshop 1      Part 2
------------------------------------------------------------
Name:
        Fred Soley
Email:
        fsoley@myseneca.ca
------------------------------------------------------------
Enter the marks for the following subjects,
IPC144: 77
ULI101: 55
EAC150: 82
The average is: 71
------------------------------------------------------------
```
## Reflection (30%)

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.  **This should take no less than 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

You may be asked to talk about your reflection (as a presentation) in class.

## Submission Process:

### Data Entry
```text
77
55
82
```
### Files to Submit
```text
diy1.c
reflect.txt
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

