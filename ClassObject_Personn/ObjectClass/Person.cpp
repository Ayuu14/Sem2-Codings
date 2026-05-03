#include "Person.h"

Person::Person() {}
Person ::~Person() {}

void Person::setName(string PersonName) {
	name = PersonName;
}

void Person::setAge(int age) {
	this->age = age;
}

string Person::getName() {
	return name;
}

int Person::getAge() {
	return age;
}

string Person::determineAgeCategory() {
	string category;

	if (age > 64)
		category = "Senior Citizen";
	else if (age > 19)
		category = "Adult";
	else if (age > 12)
		category = "Teenager";
	else
		category = "Children";

	return category;

}

