# Project: Simple Point Of Sale System


### Milestones

|Milestone| Revision | Approximate<br />(days) | Overview | Comments | Workload |
|------|:---:|:----:|:----|:----|:-----| 
| [MS1](#milestone-1) | V1.0 | 7 |  | POS mock-up application | `=============` |
| [MS2](#milestone-2-inventory-listing) | V1.0 | 5 |  | Inventory listing |  `==========` |
| [MS3](#milestone-3) | V1.0 | 9 |  | Point of Sale | `==================` |
| Deliverable 1: | [MS31](#ms31--void-saveitemsconst-char-filename) |   |  |   | `==.` |
| Deliverable 2: | [MS32](#ms32-double-billdisplayconst-struct-item-item) |   |  |   | `=-` |
| Deliverable 3: | [MS33](#ms33-void-displayconst-struct-item-item) |   |  |   | `==-` |
| Deliverable 4: | [MS34](#ms34-int-searchvoid) |   |  |  | `==-` |
| Deliverable 5: | [MS35](#ms35-void-posvoid) |   |  |   | `====-` |
| [MS4](#milestone-4-stock-item) |  |  |  | Stock Item | `===-` |
| [MS5](#milestone-5-add-and-remove) |  |  |  | Add and Remove Items | `======` |


Your task for the project for this semester is to create a simple Point of Sale (POS) application that keeps track of a small inventory of Goods to sell and can sell them at the cashier, issuing a bill of sale. 

## Milestones due dates
This project will be done in 3 milestones and each milestone will have its due date. The due date of each milestone is stated below, and it is based on the amount of work to be done for that milestone.

Two additional milestones are added as a bonus for those who want to do some extra work to make up for marks lost during the semester. 
## Final project mark and due dates

|Milestone| Mark | Due date | Submission Policy|
|:------:|:---:|:---:|-------|
| MS1 | 20% | Apr 2 | gets full mark even if 1 week late. gets 0% afterwards|
| MS2 | 20% | Apr 7 | gets full mark even if 1 week late. gets 0% afterwards|
| MS3 | 60% | Apr 16 | See below|
| MS4 | +10% | use -due |  10% bonus if submitted before rejection day  |
| MS5 | +10% | use -due |  10% bonus if submitted before rejection day    |

> To make the final submission of the project easier and to make it possible to partially submit a project we have divided the submission of milestone 3 into five small ones. Each submission is worth 12% of the project mark. Your project will be marked only if you have all four milestones and at least have one of the five submissions of milestone 5. 

|Milestone 3<br/> Divided into<br/>five submission| Mark | Due date | Submission Policy|
|:------|:---:|:---:|-------|
| [m31](#ms31--void-saveitemsconst-char-filename) | 12% | Apr 16th | 10% penalty for each day being late up to 5 days|
| [m32](#ms32-double-billdisplayconst-struct-item-item) | 12% | Apr 16th | 10% penalty for each day being late up to 5 days|
| [m33](#ms33-void-displayconst-struct-item-item) | 12% | Apr 16th | 10% penalty for each day being late up to 5 days|
| [m34](#ms34-int-searchvoid) | 12% | Apr 16th | 10% penalty for each day being late up to 5 days|
| [m35](#ms35-void-posvoid) | 12% | Apr 16th | 10% penalty for each day being late up to 5 days|


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

For milestone 1 you will create a mock-up module for the Point Of Sale that will demonstrate how the system is going to run (eventually) by only printing the name of the actions, instead of executing them. In later stages of development, you will replace these messages with the proper logic to actually perform the action. 

Note that the signature of many of the functions created now may be changed to accommodate what needs to be done later.

#### The `PosUI` functions

In the `PosUI` module, you will create two functions: `menu` and `runPos`

##### `int menu(void)` 

Write a function that displays the name of the application and the other options to select in the application.<br />
This function will display the menu of the system, receive the user's choice (in a foolproof way, *hint*: use your utils) and returns the choice. See below:

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
6. loadItems(filename)
7. saveItem(filename)

Call the above functions in the `runPos` function when corresponding option is selected by the user.

##### `void runPos(const char filename[])` 

receives the name of the data file and returns void.

> implement the following actions calling the corresponding mockup methods

This method first loads all the item records and then displays the menu waiting for the user to make the selection. After the (foolproof) selection, the proper action is executed, then the menu is displayed again until the 'exit' option is selected. When the 'exit' option is selected, all the records are saved and a `Goodbye!` message is displayed.

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

> *tip*: maximum length refers to the amount of 'readable characters' the c-string has.

Add a global array of `Item` structure type and set the number of elements that it can contain to: the `MAX_NO_ITEMS`. This will be important when storing the items read from the file into our application. (we will call this array `items` array from now on)

Add a global integer variable to hold the number of records read from the file (we call this integer `noOfItems` from now on)

## Inventory listing

The Inventory listing component of our application starts with a call to the `void inventory(void)` function. To implement this function you need to create 3 helper functions first:

#### 1- `double cost(const struct Item* item)`

This function receives an address of an item structure and returns the cost of that item after tax using the following calculation:
 
`the_cost = price * (1+ taxed* TAX)`

- the_cost: value to be returned
- price: the price of the item
- taxed: The tax flag that is either true(1) or false(0)
- TAX: defined in `POS.h`

As a side note, consider why we pass pointers to an item structure as opposed to passing an item structure by value.

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

- print `>>>> Loading Items...` *hint*: reuse logic that you've coded already
- In a `File*` variable open the `filename` for reading
- If the opening is successful (The file pointer is not null)
    - in a loop read all the items of the file into the `items` array
    - set `noOfItems` to the number of records read
- print `>>>> Done!...`
- return the `noOfItems`
- For a refresher on working with files, visit: https://intro2c.sdds.ca/E-Secondary-Storage/records-and-files 

#### 3- `void listItems(void)`

A display function that lists the items in the `items` array up to `noOfItems`.

To accomplish this do the following:

Create a local c-string for printing name (18 readable characters+ 1 for the null byte), let's call this `iName`

- print the header:
```text
 Row | SKU    | Item Name          | Price |TX | Qty |   Total |
-----|--------|--------------------|-------|---|-----|---------|
```
- in a loop starting from zero up to `noOItems`, go through the elements of the `items` array
    - copy the first 18 characters of the `item` element into `iName`
    - print row number (loop index + 1) under  (in 4 spaces)
    - print `" | "`
    - print the SKU  (in 6 spaces)
    - print `" | "`
    - print the `iName` (in 18 spaces left-justified)
    - print `" |"`
    - print the price  (in 6 spaces 2 digits after the decimal point)
    - print `" | "`
    - print if it is taxed (`T` if is taxed or space if not) *hint*: try doing this all in one printf using inline calculations
    - print quantity (in 3 spaces)
    - print `" |"`
    - print total price using the following inline calculation: ([cost](#1--double-costconst-struct-item-item) * quantity in 8 spaces 2 digits after the decimal point )
    - print `" |\n"`
- print the footer
```text
-----^--------^--------------------^-------^---^-----^---------^
```
### `void inventory(void)` 
Now that the 3 helper functions are done, use the three functions implement this function as follows to:

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
For Milestone 3, that is the Point Of Sale system (menu option 5), you need to create 5 functions; Each function is one of the 5 parts of Milestone 3 with its own tester program

### reflection 

Create a file called `reflect.txt` and add the following:  
- Citation, for any part of the code that is not yours. 
- Any additional (extra) work done that needs your professor's attention.
- Your overall reflection on the project and work done in the milestones (You don't need to repeat this in all your MS3 reflections; this can be done only in your last submissions of milestone 3)


## MS31  `void saveItems(const char filename[])`

Create a function in PosApp.c module called saveItems, this function receives a filename and saves all the elements of the `items` array in the file in a comma-separated format identical to the `posdata.csv` file.

- open the file (using the `filename` argument) for writing. 
- If the opening was successful...
    - in a loop that goes up to `noOfItems`, write all the variables of the `items` elements in a comma-separated format. Make sure each record is separated from the next one with a new-line character(`\n`). 
    - close the file
- If the opening was not successful print `Could not open >>?????<<\n` replace `?????` with the file name 
- for a refresher on writing to opening a file for writing, visit: https://intro2c.sdds.ca/E-Secondary-Storage/text-files#writing

## MS31 submission test

### tester program

<a href="MS3/main31.c" target="_blank">main31.c</a>

### Data entry

No manual data entry needed

Data file: <a href="MS3/posdata.csv" target="_blank">posdata.csv</a>

### Expected outcome

Please note that, unlike the following output, the data file during submission will have only 3 records; therefore, the output will be much shorter.
<a href="MS3/correct_output_31.txt" target="_blank">correct_output_31.txt</a>


### MS31 Submission command
```
~profname.proflastname/submit 144/prj/m31 
```
## MS32 `double billDisplay(const struct Item* item)`

This function will be used in POS to print a bill. 

- Create a temporary cString with a size of 14 readable characters + 1 for the null-byte
- Display the item's name, cost, and if the item is taxed as follows;
    - print `"| "`
    - print the first 14 characters of the name in 14 spaces left justified
    - print `"|"`
    - print the cost of the item (price after tax, in 10 spaces with 2 digits after the decimal point)
    - print `" | "`
    - print `Yes` if the item is taxed or three spaces if not
    - print `" |\n"`
- return the cost

### tester program 

<a href="MS3/main32.c" target="_blank">main32.c</a>

### Data entry

No data entry is required

### Expected outcome

<a href="MS3/correct_output_32.txt" target="_blank">correct_output_32.txt</a>

### MS32 Submission command
```
~profname.proflastname/submit 144/prj/m32
```
## [Back to milestones](#milestones)


## MS33 `void display(const struct Item* item)`


This function is used to print an Item in a "Form" (i.e non-linear, detailed) format.

- print `=============v`
- print `Name:`
- print the name aligned with the `v` of the first line
- print `Sku:`
- print the SKU aligned with the `v` of the first line
- print `Price: `
- print the price aligned with the `v` of the first line with 2 digits after the decimal point
- print `Price + tax:`
- print the `cost()` with 2 digits after the decimal point or `N/A` if the Item is not taxed, aligned with the `v` of the first line  
- print `Stock Qty:`
- print the quantity aligned with the `v` of the first line
- print `=============^`
- go to a new line



### sample ouptut

```text
=============v
Name:        Joe's Organic Potato Chips
Sku:         6539
Price:       3.29
Price + tax: 3.72
Stock Qty:   15
=============^
=============v
Name:        Milk
Sku:         1234
Price:       3.99
Price + tax: N/A
Stock Qty:   1
=============^
```

## MS33 submission

### Data entry

N/A

### Tester program

<a href="MS3/main33.c" target="_blank">main33.c</a>

### Expected outcome

<a href="MS3/correct_output_33.txt" target="_blank">correct_output_33.txt</a>

### MS33 Submission command
```
~profname.proflastname/submit 144/prj/m33 
```
## [Back to milestones](#milestones)


## MS34 `int search(void)`

The search function asks for an SKU entry from the user and loops and searches through the `items` array for the SKU entered. 

1. if the SKU is found in the `items` array, the index of the item holding the `SKU` will be returned.
2. if the SKU is not found in the `items` array, -1 is returned.
3. if the user does not enter any SKU and just hits enter, -2 is returned. 

- Prompt the user with `Sku: `
- Scan the Sku in a local variable 
- flush the keyboard if needed. 
- loop through the `items` array and search for the SKU
- After the loop return one of the stated above options in 1, 2 or 3. 

> Note: a function with a good coding style should have only one `return` statement.

### Sample executions for the following code snippet:

```C
int retValue = search();
printf("The search function returns: %d", retValue);
```

- Assuming there is an item with the SKU `1234` in the `items` array at the index 20:
```
SKU: 1234<ENTER>
The search function returns: 20
```
- Assuming there is no item with the SKU `1234` in the `items` array:
```
SKU: 1234<ENTER>
The search function returns: -1
```
- Assuming the user only hits enter:
```
SKU: <ENTER>
The search function returns: -2
```


## MS34 submission


### Data entry
```text
1313
5656
9852
3333
<ENTER>
```
> You need <a href="#2--int-loaditemsconst-char-filename" target="_blank">the loaditems function</a> implemented for this part  

### tester program

<a href="MS3/main34.c" target="_blank">main34.c</a>

### Expected outcome

<a href="MS3/correct_output_34.txt" target="_blank">correct_output_34.txt</a>

### MS34 Submission command
```  
~profname.proflastname/submit 144/prj/m34 
```
## [Back to milestones](#milestones)

## MS35 `void POS(void)`

The POS function is the most important in the application. 

This function can be implemented in two different ways; 
1. Uses an array of Item structures to keep copies of the sold items for bill printing (uses more memory)
2. Uses an array of Item structure pointers to keep the addresses of the sold items for bill printing (uses less memory )

You can implement your POS function either way. The first version is less complicated and receives a full mark. The second way uses an array of pointers whose concept is not covered in IPC144 and is more complicated, hence receiving bonus marks. I recommend doing the first version and if successful, converting it to the second version later.
> Note that you may be asked to defend or explain your method of implementation. 

### Version 1: less complicated 
The function POS in a loop using the search() function, asks the user for an SKU and then if the Item is found it will reduce the quantity of the item by one and then adds a copy of the item to a local array of Items (let us call this the `bill` Item array) and increases the value of a local integer variable to keep track of the items added to the bill. This integer number should be less than the `MAX_BILL_ITEMS` values, if the number reaches the `MAX_BILL_ITEMS` then the function ends by printing the bill.

If the item is not found the message `"SKU not found!\n"` is printed.

If the item is found but the quantity of the Item is zero, the message `"Item sold out!\n"` is printed.

If the user does not enter an SKU and instead only hits `<ENTER>` the POS function ends by printing the bill.


### Version 2: more complicated (bonus marks)
If you have completed this bonus section you must indicate it in the `reflect.txt` file to get bonus morks.

The function POS in a loop using the search() function, asks the user for an SKU and then if the Item is found it will reduce the quantity of the item by one and then adds the address of the item to a local array of Item pointers (let us call this the `bill` Item pointer array) and adds one to a local integer variable to keep track of the items added to the bill. This integer number should be less than the `MAX_BILL_ITEMS` defined value, if the number reaches the `MAX_BILL_ITEMS` then the function ends by printing the bill.

If the item is not found the message `"SKU not found!\n"` is printed.

If the item is found but the quantity of the Item is zero, the message `"Item sold out!\n"` is printed.

If the user does not enter an SKU and instead only hits `<ENTER>` the POS function ends by printing the bill.


### printing the bill
Print the bill by first printing the bill title:
```text
+---------------v-----------v-----+
| Item          |     Price | Tax |
+---------------+-----------+-----+
```
Then in a loop go through the local `bill` array and print each element using the `billDisplay` array. Meanwhile, in a local double variable, accumulate the total bill price to be printed later.

When done close the bill by printing a footer containing the total price as follows:
```text
+---------------^-----------^-----+
| total:          999999.99 |
^---------------------------^
````


## MS35 submission
> Before testing you must modify the `POS.h` file by setting the defined value of `MAX_BILL_ITEMS` to `3`.



### Data entry

```text
5
5656
5656
1234
1234
<ENTER>
5
1313
1212
4567
5
5544
<ENTER>
0
```

### tester program 

<a href="MS3/main35.c" target="_blank">main35.c</a>

### Expected outcome

<a href="MS3/correct_output_35.txt" target="_blank">correct_output_35.txt</a>

### MS35 Submission command
```
~profname.proflastname/submit 144/prj/m35 
```
## [Back to milestones](#milestones)






# Milestone 4 (Stock Item)

Implement the option 4 of the POS system to add to the quantity of the Items to the maximum of `MAX_STOCK_NUMBER`.
> Note: This output is only a sample for debugging purposes; the tester 
      output may have different values
      
The execution should be as follows assuming there are 9 items in the inventory:
```text
>>>> Loading Items...
>>>> Done!...
The Sene-Store
1- Inventory
2- Add item
3- Remove item
4- Stock item
5- POS
0- exit program
> 4
>>>> Stock Items...
Select an item:
-----v--------v--------------------v-------v---v-----v---------v
 Row | SKU    | Item Name          | Price |TX | Qty |   Total |
-----|--------|--------------------|-------|---|-----|---------|
   1 |   9852 | Seedless Grapes    | 10.56 |   |  20 |  211.20 |
   2 |   9318 | Tide Detergent     | 16.99 | T |  10 |  191.99 |
   3 |   5496 | Veal Parmigiana    |  5.49 | T |   3 |   18.61 |
   4 |   3854 | Beefsteak Pie      |  5.29 | T |  40 |  239.11 |
   5 |   5228 | 7up 12 pack        |  6.49 | T |  20 |  146.67 |
   6 |   3456 | Bic Pen(Blue)      |  1.49 | T | 580 |  976.55 |
   7 |   7913 | Banana             |  0.44 |   | 100 |   44.00 |
   8 |   3695 | Honeydew Melon     |  5.99 |   |  20 |  119.80 |
   9 |   1679 | Jack's Apple Juice |  1.50 |   |  80 |  120.00 |
-----^--------^--------------------^-------^---^-----^---------^
Select row: abc
Invalid Integer, try again: 0
[1<=Row Number<=9], retry: 10
[1<=Row Number<=9], retry: 6
=============v
Name:        Bic Pen(Blue)
Sku:         3456
Price:       1.49
Price + tax: 1.68
Stock Qty:   580
=============^
Quantity to add: abc
Invalid Integer, try again: 0
[1<=Quantity to Add<=419], retry: 500
[1<=Quantity to Add<=419], retry: 200
>>>> Done!...
The Sene-Store
1- Inventory
2- Add item
3- Remove item
4- Stock item
5- POS
0- exit program
> 1
>>>> List Items...
 Row | SKU    | Item Name          | Price |TX | Qty |   Total |
-----|--------|--------------------|-------|---|-----|---------|
   1 |   9852 | Seedless Grapes    | 10.56 |   |  20 |  211.20 |
   2 |   9318 | Tide Detergent     | 16.99 | T |  10 |  191.99 |
   3 |   5496 | Veal Parmigiana    |  5.49 | T |   3 |   18.61 |
   4 |   3854 | Beefsteak Pie      |  5.29 | T |  40 |  239.11 |
   5 |   5228 | 7up 12 pack        |  6.49 | T |  20 |  146.67 |
   6 |   3456 | Bic Pen(Blue)      |  1.49 | T | 780 | 1313.29 |
   7 |   7913 | Banana             |  0.44 |   | 100 |   44.00 |
   8 |   3695 | Honeydew Melon     |  5.99 |   |  20 |  119.80 |
   9 |   1679 | Jack's Apple Juice |  1.50 |   |  80 |  120.00 |
-----^--------^--------------------^-------^---^-----^---------^
                               Total Asset: $  |      2,404.67 |
-----------------------------------------------^---------------^
The Sene-Store
1- Inventory
2- Add item
3- Remove item
4- Stock item
5- POS
0- exit program
> 0
>>>> Saving Items...
>>>> Done!...
Goodbye!

```

### Suggestions implementation
This is an open bonus section. You can implement it any way you like but if asked, you should be able exactly how your code works.

If you like some suggestions for implementation, here they are:

1. Reuse your `listItems()` function to create a function called `selectItems` that receives nothing and returns an integer.  This function should display a header for the items with a message to prompt the user to select an item and then do a full proof entry between 1 and the number of items in the inventory and return that value. This function will be used in the next function to let the user select an item to add to its quantity.
2. Implement the `StockItem()` function by first letting the user select an Item, then do a full proof entry for an integer between 1 and the difference between the current quantity of the item and the `MAX_STOCK_NUMBER`. Add that number to the quantity of the item.


## MS4 Submission 
### data entry
```text
4
abc
0
27
6
abc
0
620
200
0
```

### MS4 Submission proccess

Upload your source code and the tester program to your `matrix` account. Compile and run your code using the `gcc` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account (replace `profname.proflastname` with your professor’s Seneca userid):
```
~profname.proflastname/submit 144/prj/m4
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

# Milestone 5 (Add and Remove)
This is an open bonus section. You can implement it any way you like but if asked, you should be able exactly how your code works.

For milestone 5 set the `MAX_NO_ITEMS` defined value to `28`.

Implement the add (option 2) and the remove (option 3) functionalities to the POS system as follows:

## Add
Perform a foolproof data entry and receive the information of a new Item and add it to the `items` array as shown in the execution sample.

## Remove
Show the user the list of all the items and let the user select one, then remove it from the `items` array.

### Execution Sample  

> Note: This output is only a sample for debugging purposes; the tester 
      output may have different values
      
```text
>>>> Loading Items...
>>>> Done!...
The Sene-Store
1- Inventory
2- Add item
3- Remove item
4- Stock item
5- POS
0- exit program
> 2
>>>> Adding Item...
SKU: 1111
Name: Red Apples
Price: abc
Invalid Double, try again: 3.99
Is the item Taxed? (Y)es/(N)o: n
Quantity: abc
Invalid Integer, try again: 5000
[1<=Quantity<999], retry: 50
>>>> Done!...
The Sene-Store
1- Inventory
2- Add item
3- Remove item
4- Stock item
5- POS
0- exit program
> 2
>>>> Adding Item...
SKU: 2222
Name: Paper
Price: 14.99
Is the item Taxed? (Y)es/(N)o: y
Quantity: 60
>>>> Done!...
The Sene-Store
1- Inventory
2- Add item
3- Remove item
4- Stock item
5- POS
0- exit program
> 2
>>>> Adding Item...
This system cannot store more that 28 different Items in the inventory!
The Sene-Store
1- Inventory
2- Add item
3- Remove item
4- Stock item
5- POS
0- exit program
> 3
>>>> Remove Item...
Select an item:
-----v--------v--------------------v-------v---v-----v---------v
 Row | SKU    | Item Name          | Price |TX | Qty |   Total |
-----|--------|--------------------|-------|---|-----|---------|
   1 |   9852 | Seedless Grapes    | 10.56 |   |  20 |  211.20 |
   2 |   9318 | Tide Detergent     | 16.99 | T |  10 |  191.99 |
   3 |   5496 | Veal Parmigiana    |  5.49 | T |   3 |   18.61 |
   4 |   3854 | Beefsteak Pie      |  5.29 | T |  40 |  239.11 |
   5 |   5228 | 7up 12 pack        |  6.49 | T |  20 |  146.67 |
   6 |   3456 | Bic Pen(Blue)      |  1.49 | T | 380 |  639.81 |
   7 |   7913 | Banana             |  0.44 |   | 100 |   44.00 |
   8 |   3695 | Honeydew Melon     |  5.99 |   |  20 |  119.80 |
   9 |   1679 | Jack's Apple Juice |  1.50 |   |  80 |  120.00 |
  10 |   6539 | Joe Org Chips      |  3.29 | T |  15 |   55.77 |
  11 |   9462 | Kiwifruit          |  0.50 |   | 123 |   61.50 |
  12 |   4297 | Lays Chips S&V     |  3.69 | T |   1 |    4.17 |
  13 |   1234 | Milk               |  3.99 |   |   1 |    3.99 |
  14 |   3461 | Nestea 12 Pack     |  7.29 | T |  50 |  411.88 |
  15 |   3456 | Paper Cups         |  5.99 | T |  38 |  257.21 |
  16 |   1313 | Paper Tissue       |  1.22 | T | 204 |  281.23 |
  17 |   1627 | Peaches            |  1.44 |   |  14 |   20.16 |
  18 |   3214 | Pomegranate        |  2.50 |   |   5 |   12.50 |
  19 |   1596 | Royal Gala Apples  |  4.42 |   |  10 |   44.20 |
  20 |   1212 | Salted Butter      |  5.99 |   | 108 |  646.92 |
  21 |   6458 | Blueberries        |  3.99 |   |  30 |  119.70 |
  22 |   4567 | Butter             |  4.56 | T |   9 |   46.38 |
  23 |   3815 | Chicken Alfredo    |  4.49 | T |  20 |  101.47 |
  24 |   3512 | Coke 12 Pack       |  6.69 | T |  30 |  226.79 |
  25 |   2564 | Curry Checken      |  4.79 | T |  30 |  162.38 |
  26 |   5656 | Honey              | 12.99 | T |  10 |  146.79 |
  27 |   1111 | Red Apples         |  3.99 |   |  50 |  199.50 |
  28 |   2222 | Paper              | 14.99 | T |  60 | 1016.32 |
-----^--------^--------------------^-------^---^-----^---------^
Select row: abc
Invalid Integer, try again: 0
[1<=Row Number<28], retry: 29
[1<=Row Number<28], retry: 6
>>>> Done!...
The Sene-Store
1- Inventory
2- Add item
3- Remove item
4- Stock item
5- POS
0- exit program
> 0
>>>> Saving Items...
>>>> Done!...
Goodbye!
Contents of file >>posdata.csv<<:
9852,Seedless Grapes,10.56,0,20
9318,Tide Detergent,16.99,1,10
5496,Veal Parmigiana,5.49,1,3
3854,Beefsteak Pie,5.29,1,40
5228,7up 12 pack,6.49,1,20
7913,Banana,0.44,0,100
3695,Honeydew Melon,5.99,0,20
1679,Jack's Apple Juice,1.50,0,80
6539,Joe Org Chips,3.29,1,15
9462,Kiwifruit,0.50,0,123
4297,Lays Chips S&V,3.69,1,1
1234,Milk,3.99,0,1
3461,Nestea 12 Pack,7.29,1,50
3456,Paper Cups,5.99,1,38
1313,Paper Tissue,1.22,1,204
1627,Peaches,1.44,0,14
3214,Pomegranate,2.50,0,5
1596,Royal Gala Apples,4.42,0,10
1212,Salted Butter,5.99,0,108
6458,Blueberries,3.99,0,30
4567,Butter,4.56,1,9
3815,Chicken Alfredo,4.49,1,20
3512,Coke 12 Pack,6.69,1,30
2564,Curry Checken,4.79,1,30
5656,Honey,12.99,1,10
1111,Red Apples,3.99,0,50
2222,Paper,14.99,1,60
End of data in >>posdata.csv<<

```

## MS5 Submission 
### Data entry
```text
2
1111
Red Apples
abc
3.99
n
abc
5000
50
2
2222
Paper
14.99
y
60
2
3
abc
0
29
6
0
```

## MS5 Submission process

> If you would like to successfully complete the project and be on time, **start early** and try to meet all the due dates of the milestones.

Upload your source code and the tester program to your `matrix` account. Compile and run your code using the `gcc` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account (replace `profname.proflastname` with your professor’s Seneca userid):
```
~profname.proflastname/submit 144/prj/m5
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
