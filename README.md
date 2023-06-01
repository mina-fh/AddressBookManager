# AddressBookManager

This README provides an overview of an address book management program. The program allows users to perform various operations on a list of addresses, such as reading from a file, sorting, adding, deleting, and writing the results to files.

**Menu Options**
The program offers the following menu options:

MENU

1: Load Address Book

2: Overwrite Address Book

3: Sort

4: Add

5: Delete

6: Write Results (to result file)

0: Exit


The user can input the menu number from the keyboard to execute the corresponding operation. 
To prompt the user for input, the program displays the following message:

Enter menu number >

**Functionality**
Each menu option corresponds to a specific operation, which is implemented as a separate function. Here's a brief description of each operation:

**Load Address Book:** Reads data from a file called address and stores it in an array of structures. The file contains 100 records of addresses.

**Overwrite Address Book:** Writes the current array content to the address file, but only if sorting, adding, or deleting operations have been performed. File writing is done by a common function used by option 6 as well.

**Sort:** Sorts the current array content based on a selected key. The user can choose to sort by name, name furikana, zip code, address, or address furikana. The program prompts the user to enter the sorting key number.

**Add:** Adds a new address record to the end of the current array. The user inputs the new address details from the keyboard. The program automatically assigns a number to the record.

**Delete:** Deletes an address record from the array based on the specified number entered from the keyboard. The program shifts the subsequent records forward one by one.

**Write Results:** Writes the current array content to a file called result. Similar to option 2, file writing is done by a common function used by both options.
The program operates in an infinite loop until the user inputs 0, which breaks the loop and terminates the program.

**Source File Structure**
The program is structured with multiple source files and a header file. 
