#ifndef ELEMENT_H
#define ELEMENT_H

const int SIZE = 7;

template<class DataType>
class Element {
private:
	DataType arrayElement[SIZE];
	DataType target;
	int targetIndex;
public:
	Element();
	void setArrayElement(DataType[]);
	void setTarget(DataType);
	DataType getTarget();
	DataType getTargetIndex();
	bool sequentialSearch();
	bool binarySearch();
};
#endif

template<class DataType>
Element<DataType>::Element()
{
}

template<class DataType>
 void Element<DataType>::setArrayElement(DataType arrayElement[])
{
	 for (int index = 0; index < SIZE; index++)
		this->arrayElement[index] = arrayElement[index];
}

template<class DataType>
void Element<DataType>::setTarget(DataType target)
{
	this->target = target;
}

template<class DataType>
DataType Element<DataType>::getTarget()
{
	return target;
	
}

template<class DataType>
DataType Element<DataType>::getTargetIndex()
{
	return targetIndex;
}

template<class DataType>
bool Element<DataType>::sequentialSearch()
{
	bool found = false;
	for (int index = 0; index < SIZE; index++) {
		if (arrayElement[index] == target) {
			targetIndex = index;
			found = true;
			break;
		}
	}
	return found;
}

template<class DataType>
bool Element<DataType>::binarySearch()
{
	int midIndex = 0, beginIndex = 0, endIndex = SIZE - 1;
	while (beginIndex <= endIndex) {
		midIndex = (beginIndex + endIndex) / 2;
		if (target > arrayElement[midIndex])
			beginIndex = midIndex + 1;
		else if (target < arrayElement[midIndex])
			endIndex = midIndex - 1;
		else
			beginIndex = endIndex + 1;
	}
	if (target == arrayElement[midIndex])
		targetIndex = midIndex;
	return (target == arrayElement[midIndex]);

}