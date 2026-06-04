#include<string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

template<class DT>
class Person {
public:
	DT id;
	string name;
};
#endif

