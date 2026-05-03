#include <iostream> 
#include "LinkedItem.h" 
using namespace std;

int main() {
    LinkedItem itemObject;
    int choice, position, menu;
    double item;

    do {
        cout << "\n------MAIN MENU------\n";
        cout << "1. Insert an item\n";
        cout << "2. Delete an item\n";
        cout << "0. Exit\n";
        cout << "Your choice :";
        cin >> menu;

        if (menu == 1) {

            if (itemObject.isEmpty())
                cout << "List is empty\n";

            else {
                cout << "Current list:";
                itemObject.retrieveItem();
                cout << endl;
            }
            do {
                if (itemObject.getNoOfItem() == 0) {
                    cout << "\n------INSERT ITEM MENU------\n";
                    choice = 1;

                }
                else if (itemObject.getNoOfItem() == 1) {
                    cout << "\n------INSERT ITEM MENU------\n";
                    cout << "1. Insert an item to the beginning of the list\n";
                    cout << "2. Insert an item to the end of the list\n";
                    cout << "0. Exit\n";
                    cout << "Your Choice:";
                    cin >> choice;
                }
                else {
                    cout << "\n------INSERT ITEM MENU------\n";
                    cout << "1. Insert an item to the beginning of the list\n";
                    cout << "2. Insert an item to the end of the list\n";
                    cout << "3. Insert an item between existing items in the list\n"; 
                    cout << "0. Exit\n";
                    cout << "Your Choice:";
                    cin >> choice;
                }
                if (choice >= 1 && choice <= 3) {
                    cout << "Enter the item:";
                    cin >> item;

                    if (choice == 1)
                        itemObject.insertItem(item);


                    else if (choice == 2) {
                        itemObject.insertItem(item, itemObject.getNoOfItem() +
                            1);
                    }

                    else {
                        cout << "The position must between 1 to "
                            << itemObject.getNoOfItem() << endl;
                        cout << "Enter position: ";
                        cin >> position;
                        itemObject.insertItem(item, position);
                    }

                    cout << "Current List: ";
                    itemObject.retrieveItem();
                    cout << endl;
                }
            } while (choice >= 1 && choice <= 3);
        }

        else if (menu == 2) {

            if (itemObject.isEmpty())
                cout << "List is empty\n";

            else {
                cout << "Current List:";
                itemObject.retrieveItem();
                cout << endl;
            }

            do {
                if (itemObject.isEmpty()) {
                    cout << "\nList is empty\n";
                    break;
                }

                if (itemObject.getNoOfItem() == 1) {
                    cout << "\n------DELETE ITEM MENU-----\n";
                    cout << "do you want to delete the last item?(1:Yes 0| 0:NO):"; 
                    cin >> choice;
                }

                else if (itemObject.getNoOfItem() == 2) {
                    cout << "\n------DELETE ITEM MENU------ - \n";
                    cout << "1. Delete the first item of the list\n";
                    cout << "2. Delete the last item of the list\n";
                    cout << "0. Exit\n";
                    cout << "Your choice: ";
                    cin >> choice;
                }

                else {
                    cout << "\n------DELETE ITEM MENU------ - \n";
                    cout << "1. Delete the first item of the list\n";
                    cout << "2. Delete the last item of the list\n";
                    cout << "3. Delete any item between the first and last items in the list\n"; 
                    cout << "0. Exit\n";
                    cout << "Your choice: ";
                    cin >> choice;
                }

                if (choice >= 1 && choice <= 3) {
                    if (choice == 1)
                        itemObject.deleteItem();

                    else if (choice == 2)
                        itemObject.deleteItem(itemObject.getNoOfItem());
                    else
                    {
                        cout << "The position must between 1 to "
                            << itemObject.getNoOfItem() << endl;
                        cout << "Enter position: ";
                        cin >> position;
                        itemObject.deleteItem(position);
                    }
                    if (!itemObject.isEmpty()) {

                        cout << "Current List: ";
                        itemObject.retrieveItem();
                        cout << endl;
                    }
                }
            } while (choice >= 1 && choice <= 3);
        }

        else
            cout << "\nProgram Terminated\n";
    } while (menu == 1 || menu == 2);


    return 0;
}






