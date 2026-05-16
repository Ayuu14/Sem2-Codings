#ifndef SORTING_H 
#define SORTING_H 
#include <iostream> 

using namespace std;

const int MAX_SIZE = 7;
class Sorting {
private:
	int data[MAX_SIZE];
public:
	Sorting(int[]);
	int* getData();
	void simpleSort();
	void insertionSort();
	void bubbleSort();
	void quickSort(int, int);

};
#endif 



Sorting::Sorting(int items[MAX_SIZE]) {
	for (int i = 0; i < MAX_SIZE; i++)
		data[i] = items[i];

}

int* Sorting::getData() {
	return data;
}



void Sorting::simpleSort() {
	int i, j, locationMin, temp;
	for (i = 0; i < MAX_SIZE - 1; i++) {
		locationMin = i;
		for (j = i + 1; j < MAX_SIZE; j++) {
			if (data[j] > data[locationMin]) {
				locationMin = j;
			}

		}
		temp = data[locationMin];
		data[locationMin] = data[i];
		data[i] = temp;
	}
	return;
}



void Sorting::insertionSort() {
	int i, j, nextData;
	for (i = 1; i < MAX_SIZE - 1; i++) {
		nextData = data[i];
		j = i;
		while (nextData > data[j - 1]) {
			data[j] = data[j - 1];
			j--;
			data[j] = nextData;
		}
	}
	return;
}



void Sorting::bubbleSort() {
	int i, j;
	bool swap_xtvt = 1;
	int temp;

	for (i = 1; i < MAX_SIZE && swap_xtvt; i++) {
		swap_xtvt = 0;
		cout << " Pass " << i << endl;
		for (j = 0; j < MAX_SIZE - 1; j++) {
			if (data[j] < data[j + 1]) {
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
				swap_xtvt = 1;
			}
			for (int x = 0; x < MAX_SIZE; x++)
				cout << data[x] << " ";
			cout << endl;

		}
		cout << endl;
	}
	return;
}



void Sorting::quickSort(int low, int high) {
	int pivot, i, j, temp, pivotIndex;
	if (low < high) {
		pivot = data[high];
		i = low - 1;

		for (j = low; j < high; j++) {
			if (data[j] > pivot) {
				i++;
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}

		}

		temp = data[i + 1];
		data[i + 1] = data[high];
		data[high] = temp;
		pivotIndex = i + 1;
		quickSort(low, pivotIndex - 1);
		quickSort(pivotIndex + 1, high);
	}
	return;
}

