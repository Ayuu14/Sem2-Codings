#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H


class Person {
protected:
	string name;
	int age;

public:
	Person();
	~Person();
	void setName(string);
	string getName();
	void setAge(int);
	int getAge();
	string determineAgeCategory();

};
#endif



