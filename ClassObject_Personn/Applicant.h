#include "Person.h"
#include <string>
using namespace std;


#ifndef APPLICANT_H
#define APPLICANT_H

class Applicant : public Person {
private :
	string email;
	string channel;
public:
	Applicant();
	Applicant(string);
	~Applicant();
	void setEmail(string);
	string getEmail();
	string getChannel();
	string determineAgeCategory();

};
#endif
