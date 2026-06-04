#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

template <class DT>
class Person {
private:
	DT id;
	string name;
public:
	Person();
	Person(DT, string);
	DT getID();
	string getName();
};
#endif

template<class DT>
Person<DT> ::Person() {

}

template<class DT>
Person<DT>::Person(DT id, string name) {
	this->id = id;
	this->name = name;
}

template<class DT>
DT Person<DT>::getID() {
	return id;
}

template<class DT>
string Person<DT>::getName() {
	return name;
}

