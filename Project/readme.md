# Project: Simple Point Of Sale System


### Milestones

|Milestone| Revision | Approximate<br />(days) | Overview | Comments | Workload |
|------|:---:|:----:|:----|:----|:-----| 
| [MS1](#milestone-1) | V0.9 | 7 |  | POS mock-up application | `=============` |
| [MS2](#milestone-2-inventory-listing) | V1.0 | 5 |  | Inventory listing |  `==========` |
| [MS3](#milestone-3) | | 9 |  | Point of Sale | `==================` |
| [MS4](#milestone-4) |  |  |  | Stock Item | `===` |
| [MS5](#milestone-5) |  |  |  | Add and Remove Items | `======` |


Your task for the project for this semester is to create a simple Point of Sale (POS) application that keeps track of a small inventory of Goods to sell and can sell them at the cashier, issuing a bill of sale. 

## Milestones due dates
This project will be done in 3 milestones and each milestone will have its due date. The due date of each milestone is stated below, and it is based on the amount of work to be done for that milestone.

Two additional milestones are added as a bonus for those who want to do some extra work to make up for marks lost during the semester. 
## Final project mark and due dates

|Milestone| Mark | Due date | Submission Policy|
|:------:|:---:|:---:|-------|
| MS1 | 20% | Apr 2 | gets full mark even if 1 week late. gets 0% afterwards|
| MS2 | 20% | Apr 10 | gets full mark even if 1 week late. gets 0% afterwards|
| MS3 | 60% | Apr 18 | See below|
| MS4 | +10% | Apr 23 |         |
| MS5 | +10% | Apr 23 |         |

> To make the final submission of the project easier and to make it possible to partially submit a project we have divided the submission of milestone 3 into five small ones. Each submission is worth 12% of the project mark. Your project will be marked only if you have all four milestones and at least have one of the five submissions of milestone 5. 

|Milestone 3<br/> Divided into<br/>five submission| Mark | Due date | Submission Policy|
|:------|:---:|:---:|-------|
| [m31](#ms31-submission-test) | 12% | Apr 18th | 10% penalty for each day being late up to 5 days|
| [m32](#ms32-submission-test) | 12% | Apr 18th | 10% penalty for each day being late up to 5 days|
| [m33](#ms33-submission-test) | 12% | Apr 18th | 10% penalty for each day being late up to 5 days|
| [m34](#ms34-submission-test) | 12% | Apr 18th | 10% penalty for each day being late up to 5 days|
| [m35](#ms35-submission-test) | 12% | Apr 18th | 10% penalty for each day being late up to 5 days|


> :warning: The first two milestones must be submitted successfully even if they are very late.<br /> Your project will receive a mark of zero if any of the first 2 milestones are not submitted by the rejection date (Apr 21) . For your project to be marked, you must submit the 2 milestones and at least one of the 5 submissions of Milestone 3 (The rejection date for all milestones is Apr 21)

You can check the due date of each milestone using the ```-due``` flag in the submission command:
```bash
~profname.proflastname/submit 144/prj/m? -due
```
- replace **m?** with the milestone number

## Citation, Sources

When submitting your work, all the files submitted should carry full student information along with the "citation and sources" information. See the following example:

If you have multiple submissions of the same milestone, please update the Revision History in each submission so your professor knows what changes to look for.

```C
/* Citation and Sources...
Final Project Milestone? 
Module: Whatever
Filename: Whatever.c
Version 1.0
Author	John Doe
Revision History
-----------------------------------------------------------
Date      Reason
2020/?/?  Preliminary release
2020/?/?  Debugged DMA
-----------------------------------------------------------
I have done all the coding by myself and only copied the code 
that my professor provided to complete my project milestones.
-----------------------------------------------------------
OR
-----------------------------------------------------------
Write exactly which part of the code is given to you as help and 
who gave it to you, or from what source you acquired it.
-----------------------------------------------------------*/
```

**Failing to include the above citation in any of the files containing your work will cause the rejection of your project submission**

#### See below for details:

### For work that is done entirely by you (ONLY YOU)

If the file contains only your work or the work provided to you by your professor, add the following message as a comment at the top of the file:

> I have done all the coding by myself and only copied the code that my professor provided to complete my project milestones.

### For work that is done partially by you.

If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which part of the assignment is given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrongdoing.


> :warning: This [Submission Policy](#submission-policy) only applies to the project. All other assessments in this subject have their own submission policies.

### If you have helped someone with your code

If you have helped someone with your code. Let them know of these regulations and in an email write exactly which part of your code was copied and who was the recipient of this code.<br />By doing this you will be clear of any wrongdoing if the recipient of the code does not honour these regulations.

## Compiling and Testing Your Program

All your code should be compiled using this command on `matrix`:

```bash
gcc -Wall -o ws file1.c file2.c ... <ENTER>
```

- `-Wall`: the compiler will report all warnings
- `-o ws`: the compiled application will be named `ws`

Check the output, and closely compare it with the expected output. Make sure the match exactly since with submitting your work, only perfect outputs can pass the submission program.


> Make sure that all the debugging code and debugging comments are removed before submission.

## Project Implementation notes:  *Very Important, read carefully*

- You are free and encouraged to add any additional functions you find necessary to complete your code. If you are not sure about your strategy for adding functionalities, ask your professor for advice.  

- Unless you are asked for a specific definition, name the variables, and functions yourself. Use proper names and follow the naming conventions instructed by your professor. Having meaningless and misleading names will attract a penalty.

- When passing pointers as arguments to functions, make sure they are constant if the target of the pointer is not meant to be changed within the function.

- You may reuse and copy any code your professor provided for your workshops or functions you may have from previous work in this subject or other subjects and place it in the Utils module. Just make sure you cite them. This citation will not reduce your mark.  


# The Point Of Sale system

We will start the development of the project by creating its user interface (PosUI module). Through this, we will create a mockup application that represents what the application will look like and act without actually doing anything. In short, we are creating a prototype of the application (in MS1) then coding its engine (in MS2, MS31 to MS35) and meanwhile adding functionality to the POS system (MS1) to make it fully functional (by the end of MS35). MS4 and MS5 add Inventory functionality to the POS system and is optional

# Milestone 1

## `POS.h` header file

Create a file called `POS.h` and add the following defined values to be used in the POS application:

- TAX  `0.13`
- MAX_SKU_LEN  `6`
- MAX_STOCK_NUMBER  `999`
- MAX_NO_ITEMS  `500`
- MAX_BILL_ITEMS `10`

## The PosUI Module (Point of Sale User Interface)

This Module contains one Module called `PosUI`. This module is responsible to offer the user a menu of features provided by the POS system. 

The user, then, can select an option representing the feature and execute it. After the execution is complete, the system displays the menu again, until the user selects to exit the application.

### `utils` Module
The utils Module (that is fully implemented) is the module you have developed throughout the semester in your workshops. This module contains basic fool-proof user input functionalities. Use this module for data numeric data entry in your project. 

### The `PosApp` module 
This module is already created and contains the mock-up functions of what needs to be done in the POS system.  Call these functions in your PosUI module when the user selects different POS menu options.

### The features of the POS system

1. Inventory  
2. Add Item
3. Remove Item
4. Stock Item
5. Point Of Sale


### Implementation

For milestone 1 you are responsible to create a mock-up module for the Point Of Sale that will demonstrate how the system is going to run (eventually) by only printing the name of the actions, instead of executing them. In later stages of development, you will replace these messages with the proper logic to actually perform the action. 

Note that the signature of many of the functions created now may be changed to accommodate what needs to be done later.

#### The `PosUI` functions

In the module `PosUI` create two functions `menu` and `runPos`

##### `int menu(void)` 

Write a function to display the name of the application and the options to select for the user.<br />
This function will display the menu of the system, receive the user's choice (in a foolproof way) and returns the choice. See below:

```text
The Sene-Store
1- Inventory
2- Add item
3- Remove item
4- Stock item
5- POS
0- exit program
> a
Invalid Integer, try again: -1
[0<=Selection<=5], retry: 6
[0<=Selection<=5], retry: 1
>>>> Inventory...
```

##### Mockup functions:

the following 7 mock-up functions are provided in the `PosAp` module that only print `>>>>> ` and their names.

1. inventory()
2. addItem()
3. removeItem()
4. stockItem()
5. POS()
6. LoadItems(filename)
7. saveItem(filename)

Call the above functions in the `runPos` function when needed.

##### `void runPos(const char filename[])` 

receives the name of the data file and returns void.

> implement the following actions calling the corresponding mockup methods

This method first loads all the item records and then displays the menu waiting for the user to make the selection. After the (foolproof) selection the proper action is executed and again the menu is displayed until the option exit is selected. In the latter case, all the records are saved and a `Goodbye!` message is displayed.

See the <a href="MS1/correct_output.txt" target="_blank">correct_output.txt</a> file for sample execution.

The tester file for this output is <a href="MS1/main.c" target="_blank">main.c</a>




## MS1 Submission 

### files to submit
```text
POS.h
PosApp.c
PosApp.h
PosUI.c
PosUI.h
utils.c
utils.h
main.c
```

### Data entry
```text
abc
-1
6
1
2
3
4
5
0
```

### Submission Process

> If you would like to successfully complete the project and be on time, **start early** and try to meet all the due dates of the milestones.

Upload your source code and the tester program to your `matrix` account. Compile and run your code using the `gcc` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account (replace `profname.proflastname` with your professor’s Seneca userid):
```
~profname.proflastname/submit 144/prj/m1
```
and follow the instructions.


### The submit program's options:
```bash
~prof_name.prof_lastname/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may attract penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may attract penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to milestones](#milestones)

# Milestone 2 (Inventory listing)

For your milestone 2 implement the first menu option of the application.

## Item definition and the data array

Add a structure for an `Item` to the `PosApp.h` header file to hold a record for an Item to be sold using the POS system.

An item has the following:

- SKU (Character C-string with a maximum length of MAX_SKU_LEN )
- name (Character C-string with a maximum length of 60)
- price (double)
- taxed (an integer flag; true or false)
- quantity (integer)


Add a global array of `Item` structure with `MAX_NO_ITEMS` elements to store the items read from the file (we will call this array `items` array from now on)

Add a global integer variable to hold the number of records read from the file (we call this integer `noOfItems` from now on)

## Inventory listing

Inventory listing is a call to the `void inventory(void)` function. To implement this function you need to create 3 helper functions first:

#### 1- `double cost(const struct Item* item)`

This function receives an address of an item structure and returns the cost of that item after tax using the following calculation:
 
`the_cost = price * (1+ taxed* TAX)`

- the_cost: value to be returned
- price: the price of the item
- taxed: The tax flag that is either true(1) or false(0)
- TAX: defined in `POS.h`

#### 2- `int LoadItems(const char filename[])`

This function loads all the items from a data file (the name received from the argument) into the `items` array and sets the `noOfItems` variable to the number of records read.

The records are in the following format:  
- SKU
- comma (`,`)
- item name
- comma (`,`)
- price 
- comma (`,`)
- taxed or not (0 or 1)
- comma (`,`)
- quantity
- newline

To accomplish this do the following:

- print `>>>> Loading Items...`
- In a `File*` variable open the `filename` for reading
- If the opening is successful (The file pointer is not null)
    - in a loop read all the items of the file into the `items` array
    - set `noOfItems` to the number of records read
- print `>>>> Done!...`
- return the `noOfItems`

#### 3- `void listItems(void)`

Lists the items in the `items` array up to `noOfItems`.

To accomplish this do the following:

Create a local c-string for printing name (18+1 characters), let's call this `iName`

- print the header:
```text
 Row | SKU    | Item Name          | Price |TX | Qty |   Total |
-----|--------|--------------------|-------|---|-----|---------|
```
- in a loop starting from zero up to `noOItems` go through the elements of the `items` array
    - copy the first 18 characters of the `item` element into `iName`
    - print row number (loop index + 1) under  (in 4 spaces)
    - print `" | "`
    - print the SKU  (in 6 spaces)
    - print `" | "`
    - print the `iName` (in 18 spaces left-justified)
    - print `" |"`
    - print the price  (in 6 spaces 2 digits after the decimal point)
    - print `" | "`
    - print if it is taxed (`T` if is taxed or space if not)
    - print quantity (in 3 spaces)
    - print `" |"`
    - print total price ([cost](#1--double-costconst-struct-item-item) * quantity in 8 spaces 2 digits after the decimal point )
    - print `" |\n"`
- print the footer
```text
-----^--------^--------------------^-------^---^-----^---------^
```
### `void inventory(void)` 
Now that the 3 helper functions are done, using the three functions implement this function as follows:

- Create a double variable for total asset value (let's call it `tav`) and set it to zero
- Print `>>>> List Items...`
- Call `listItems()`
- Calculate the total asset value (`tav`) by looping through the `items` elements and accumulating the `cost * quantity` of each element in `tav`; 
- print the total asset value in a footer in the following format:
```text
                               Total Asset: $  | 9999999999.99 |
-----------------------------------------------^---------------^
```



## MS2 Submission 

### tester program
<a href="MS2/main.c" target="_blank">main.c</a>

### files to submit
```text
POS.h
PosApp.c
PosApp.h
PosUI.c
PosUI.h
utils.c
utils.h
main.c
```
### Data entry
```text
1
0
```

### expected output

<a href="MS2/correct_output.txt" target="_blank">correct_output.txt</a>




### Submission Process

> If you would like to successfully complete the project and be on time, **start early** and try to meet all the due dates of the milestones.

Upload your source code and the tester program to your `matrix` account. Compile and run your code using the `gcc` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account (replace `profname.proflastname` with your professor’s Seneca userid):
```
~profname.proflastname/submit 144/prj/m2
```
and follow the instructions.


### The submit program's options:
```bash
~prof_name.prof_lastname/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may attract penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may attract penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to milestones](#milestones)


# Milestone 3

> :construction: under construction


## MS31 submission test

> :construction: under construction

### Data entry
### Expected outcome

### reflection 
Create a file called `reflect.txt` and add the following:  
- Your Citation if you have any borrowed code in your project.
- Any additional (extra) work done that needs your professor's attention.
- Your overall reflection on the project and work done in the 5 milestones. 

### MS31 Submission command
```
~profname.proflastname/submit 144/prj/m31 
```
## MS32 submission test

> :construction: under construction

### Data entry
### Expected outcome

### MS32 Submission command
```
~profname.proflastname/submit 144/prj/m32
```
## [Back to milestones](#milestones)

## MS33 submission test

> :construction: under construction

### Data entry

### Expected outcome

### MS33 Submission command
```
~profname.proflastname/submit 144/prj/m33 
```
## [Back to milestones](#milestones)


## MS34 submission test

> :construction: under construction

### Data entry
### Expected outcome
[m34-correct-output.txt](ms5/m34-correct-output.txt)

### MS34 Submission command
```
~profname.proflastname/submit 144/prj/m34 
```
## [Back to milestones](#milestones)

## MS35 submission test
### Data entry
### Expected outcome

### MS35 Submission command
```
~profname.proflastname/submit 144/prj/m35 
```
## [Back to milestones](#milestones)






# Milestone 4


## MS4 Submission 


> If you would like to successfully complete the project and be on time, **start early** and try to meet all the due dates of the milestones.

Upload your source code and the tester program to your `matrix` account. Compile and run your code using the `g++` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account (replace `profname.proflastname` with your professor’s Seneca userid):
```
~profname.proflastname/submit 144/prj/m3
```

### The submit program's options:
```bash
~prof_name.prof_lastname/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may attract penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may attract penalty.
  "-feedback":
       Check the program execution without submission.
```

# Milestone 5

> :construction: under construction

## MS5 Submission 

> If you would like to successfully complete the project and be on time, **start early** and try to meet all the due dates of the milestones.

Upload your source code and the tester program to your `matrix` account. Compile and run your code using the `gcc` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account (replace `profname.proflastname` with your professor’s Seneca userid):
```
~profname.proflastname/submit 144/prj/m4
```
and follow the instructions.



### The submit program's options:
```bash
~prof_name.prof_lastname/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may attract penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may attract penalty.
  "-feedback":
       Check the program execution without submission.
```


## [Back to milestones](#milestones)
