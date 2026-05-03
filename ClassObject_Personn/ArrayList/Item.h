#ifndef ITEM_H
#define ITEM_H
const int SIZE = 6;

class Item {
private:
	double arrayItem[SIZE];
	int noOfItem;
public:
	Item();
	int getNoOfItem();
	double* getArrayItem();
	void insertItem(double, int);
	void insertItem(double);
	void deleteItem();
	void deleteItem(int);
	bool isFull();
	bool isEmpty();
};
#endif

Item::Item() {
	noOfItem = 0;
}

int Item::getNoOfItem() {
	return noOfItem;
}

double* Item::getArrayItem() {
	return arrayItem;
}

void Item::insertItem(double item) {
	arrayItem[noOfItem] = item;
	noOfItem++;
}

void Item::insertItem(double item, int position) {
	for (int j = noOfItem - 1; j >= position - 1; j--)
		arrayItem[j + 1] = arrayItem[j];
	arrayItem[position - 1] = item;
	noOfItem++;
}

void Item::deleteItem() {
	noOfItem--;
	
}

void Item::deleteItem(int position) {
	for (int j = position; j < noOfItem; j++)
		arrayItem[j - 1] = arrayItem[j];
	noOfItem--;
}

bool Item::isFull() {
	return (noOfItem == SIZE);
}

bool Item::isEmpty() {
	return(noOfItem == 0);
}
