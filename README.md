
Many banks need an effective and accurate record system to be able to assure their
records. The record involves receiving banking records from various systems,
determining the record rates associated with the customer’s records, calculating the
amount foreach customers, aggregating these records periodically to generate in
voices, showing invoices to the customer, and collecting balance received from the
customer . Banking record System application is so simple to use.

APPROACH AND METHOD:
File handling has been effectively used for each feature of this project.
• Add
For this feature void read_data() function has been used to add banking record
into the file. It asks for information such as account number, first name, last
name and balance to be entered.
• Show/List
With the information provided in add record, the void show_data() function in
this banking record system project in C++ show the record corresponding to a
particular account number, first name and last name. Current balance of the account
holder is displayed. • Search
When the function for this feature is first executed, it shows the total records in
the file, and the user can then search by record number. If the record searched
for is not found, the banking record system project in C++ displays the message
– “Error in opening!
File Not Found!!”
• Edit
Subject: OOPL SE/SEM-III Page No.
This works in similar manner to the Search feature. When the function for Edit
Record is first executed, it shows the total records in the file, and the user can
edit the information by providing record number. Then, the C++ project shows
all the data in that record, and the user can enter any data to modify. If the
record to be edited for is not found, it displays the message – “Error in opening!
File Not Found!!”
• Delete
First of all, when the function of this feature is executed, it shows all the records
in the file, and the user can enter the record number to delete. If the record was
not found, this banking record system project in C++ displays the message –
“Error in opening! File Not Found!!”

OBJECTIVES:
The researcher aims to create or develop a system that is capable and reliable in the
whole record about the customer,retrieving and storing data in an appropriate way.
The Banking Record System serves the following objectives:
1. Provide a database that will store information.
2. Develop a system that will lessen process delay in terms of customer’s record.
3. Make an easy to use environment for users and customers.
4. Provides a convenient solution of record pattern.
5. Add and maintain new entered category of records.
6. Add and maintain customer details.
7. Search the customer using numbers of existing record.
8. Show the details of record from files.
9. Show the details of programmer after exit.

HEADER FILES USED:
#include<iostream>
#include<fstream>
#include<cstdlib>
fstream:
This header file mainly describes the file stream. This header file is used to handle the
data being read from a file as input or data being written into the file as output.
stdlib :
The header filestdlib.h stands for Standard Library. It has the information of memory
allocation/freeing functions . Thestdlib.h header defines four variable types, several
macros, and various functions for performing general functions.
This header defines several general purpose functions, including dynamic memory
management, random number generation, and communication with the environment,
integer arithmetic, searching, sorting and converting.

MODULES USED IN PROJECT
Banking Record System application is so simple to use.
1: Add record to file
2: Show record from file
3: Search Record from file
4: Update Record
5: Delete Record
6: Quit
