#include<iostream>
#include "Element.h"
using namespace std;

template<class DataTypeObject, class DataTypeMain>
void startOperation(DataTypeObject object, string title, DataTypeMain arrayElement[]) {
	DataTypeMain item;

	cout << "\n------INPUT SECTION------\n";
	cout << "Enter SEVEN " << title << ": ";
	for (int i = 0; i < SIZE; i++)
		cin >> arrayElement[i];

	object.setArrayElement(arrayElement);

	cout << "\nSearch Element ? : ";
	cin >> item;
	object.setTarget(item);

	int menuSearching;
	cout << "Choose the type of Searching:" << endl;
	cout << "1. Sequential Search\n";
	cout << "2. Binary Search\n";
	cout << "Your Choice: ";
	cin >> menuSearching;

	bool status;

	if (menuSearching == 1)
		status = object.sequentialSearch();
	else
		status = object.binarySearch();

	cout << "\n------OUTPUT SECTION------\n";

	if (status) {
		cout << "Target " << object.getTarget() << " found! \n";
		cout << "Index : " << (int)object.getTargetIndex() << endl;
		cout << "Position : " << (int)object.getTargetIndex() + 1 << endl;
	}
	else
		cout << "Target not found ";
	return;
}


int main() {

	int menu;
	cout << "------MENU------" << endl;
	cout << "1. Search a number.\n";
	cout << " 2. Search a character.\n";
	cout << "Your Choice:";
	cin >> menu;
	if (menu == 1) {
		Element<int>element1;
		int arrayElement[SIZE] = { 0 };
		startOperation(element1, "numbers", arrayElement);
	}
	else {
		Element<char>element2;
		char arrayElement[SIZE] = { 'a' };
		startOperation(element2, "letters", arrayElement);
	}

	return 0;
}