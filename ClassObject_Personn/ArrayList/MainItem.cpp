#include <iostream>
#include "Item.h"
using namespace std;

void displayList(Item itemObject) {
	double* ptrArrayItem;
	if (!itemObject.isEmpty()) {
		ptrArrayItem = itemObject.getArrayItem();
		cout << "\nCurrent List: ";
		for (int i = 0; i < itemObject.getNoOfItem(); i++) {
			cout << *(ptrArrayItem + i) << " ";
		}
		cout << endl;
	}
	else {
		cout << "\nCurrently , there is NO item in the list.\n";
	}
}

int main() {
	Item itemObject;
	int choice, position, menu;
	double item;
	do {
		cout << "\n------MAIN MENU-----\n";
		cout << "1. Insert an item\n";
		cout << "2. Delete an item\n";
		cout << "3. View current list \n";
		cout << "4. Display the number of the items\n";
		cout << "0. Exit\n";
		cout << "Your Choice:";
		cin >> menu;

		if (menu == 1) {
			displayList(itemObject);
			do {
				if (itemObject.isFull()) {
					cout << "\nList is Full\n";
					break;
				}

				if (itemObject.getNoOfItem() == 0) {
					cout << "\n------INSERT ITEM MENU------\n";
					choice = 1;
					cout << endl;
				}
				else if (itemObject.getNoOfItem() == 1) {
					cout << "\n------INSERT ITEM MENU------\n";
					cout << "1. Insert an item to the beginning of the list\n";
					cout << "2. Insert an item to the end of the list\n";
					cout << "0. Exit\n";
					cout << "Your Choice :";
					cin >> choice;
				}
				else {
					cout << "\n------INSERT ITEM MENU------\n";
					cout << "1. Insert an item to the beginning of the list\n";
					cout << "2. Insert an item to the end of the list\n";
					cout << "3. Insert an item between existing items in the list\n";
					cout << "0. Exit\n";
					cout << "Your Choice :";
					cin >> choice;
				}

				if (choice >= 1 && choice <= 3) {
					cout << "Enter the item:";
					cin >> item;

					if (choice == 1)
						itemObject.insertItem(item, 1);
					else if (choice == 2)
						itemObject.insertItem(item);
					else {
						cout << "The position must between 1 to " << itemObject.getNoOfItem() << endl;
						cout << "Enter position:";
						cin >> position;
						itemObject.insertItem(item, position);
					}
					displayList(itemObject);
					cout << "The total number of items in the list is " << itemObject.getNoOfItem() << endl;
				}
			} while (choice >= 1 && choice <= 3);
		}

		else if (menu == 2) {
			displayList(itemObject);
			do {
				if (itemObject.isEmpty()) {
					cout << "\nList is Empty\n";
					break;
				}
				if (itemObject.getNoOfItem() == 1) {
					cout << "\n------DELETE ITEM MENU------\n";
					cout << "do you want to delete the last item?(1:Yes | 0: No): ";
					cin >> choice;
				}

				else if (itemObject.getNoOfItem() == 2) {
					cout << "\n------DELETE ITEM MENU------\n";
					cout << "1. Delete first item of the list\n";
					cout << "2. Delete the last item of the list\n";
					cout << "0. Exit\n";
					cout << "Your Choice :";
					cin >> choice;
				}
				else {
					cout << "\n------DELETE ITEM MENU------\n";
					cout << "1. Delete first item of the list\n";
					cout << "2. Delete the last item of the list\n";
					cout << "3. Delete any item between the first and last item of the list\n";
					cout << "0. Exit\n";
					cout << "Your Choice :";
					cin >> choice;
				}

				if (choice >= 1 && choice <= 3) {
					if (choice == 1)

						itemObject.deleteItem(1);
					else if (choice == 2)
						itemObject.deleteItem();
					else {
						cout << "The position must between 1 to " <<
							itemObject.getNoOfItem() << endl;
						cout << "Enter position:";
						cin >> position;
						itemObject.deleteItem(position);
					}
					displayList(itemObject);
					cout << "The total number of items in the list is " << itemObject.getNoOfItem() << endl;
				}
			} while (choice >= 1 && choice <= 3);
		}
		else if (menu == 3) {
			displayList(itemObject);
		}
		else if (menu == 4) {
			cout << endl;
			cout << "The number of items in the list is " <<
				itemObject.getNoOfItem();
			cout << endl;
		}
		else
			cout << "\nProgram Terminated\n";
	} while (menu == 1 || menu == 2 || menu == 3 || menu == 4);
	
	return 0;
}