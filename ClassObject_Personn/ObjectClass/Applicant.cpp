#include "Applicant.h"

Applicant::Applicant(){
	channel = "Other Sources";

}

Applicant::Applicant(string channel) {
	this->channel = channel;
}

Applicant:: ~Applicant() {}

void Applicant::setEmail(string email) {
	this ->email = email;
}

string Applicant::getEmail() {
	return email;
}

string Applicant::getChannel() {
	return  channel;
}

string Applicant::determineAgeCategory() {
	string category;
	if (age > 24 && age < 56)
		return "Eligible";
	else
		return "Not Eligible";

}