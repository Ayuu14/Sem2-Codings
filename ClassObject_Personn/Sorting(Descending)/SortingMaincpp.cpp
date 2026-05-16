#include "Sorting.h" 
#include <iostream> 
#include<string>
using namespace std;

int main() {
	int items[] = { 99 , 33 , 77 , 66 , 88 , 55 , 44 };
	int* ptrItems;
	int input;
	string type;
	char choice;

	do {
		Sorting numbers(items);
		cout << "Intial List : ";
		for (int x = 0; x < MAX_SIZE; x++)
			cout << items[x] << " ";
		cout << endl;
		cout << "\n------SORTING MENU(DECESDING ORDER)-------\n";
		cout << "1. Simple sort\n";
		cout << "2. Insertion sort\n";
		cout << "3. Bubble sort\n";
		cout << "4. Quick sort\n";
		cout << "5. Exit\n";
		cout << "Your Choice: ";
		cin >> input;
		cout << endl;

		if (input >= 1 && input <= 4) {
			if (input == 1) {
				type = "Simple Sort: ";
				numbers.simpleSort();

			}
			else if (input == 2) {
				type = "Insertion Sort: ";
				numbers.insertionSort();
			}

			else if (input == 3) {
				type = "Bubble Sort:";
				numbers.bubbleSort();
			}

			else {
				type = "Quick Sort:";
				numbers.quickSort(0, MAX_SIZE - 1);
			}

			ptrItems = numbers.getData();
			cout << type;
			for (int x = 0; x < MAX_SIZE; x++)
				cout << *(ptrItems + x) << " ";
			cout << endl;
		}

		else
			cout << "Program Terminate.\n";
		cout << "Do you want to continue(Y/N) :";
		cin >> choice;
		cout << endl;

	} while (choice == 'Y' || choice == 'y');
	cout << "Program Terminate.\n";


	return 0;
}