// Implementation file for the Person class
#include "Person.h"
#include <ostream>

using std::ostream;

// calculates a person's age at this year's birthday
int Person::age(int year) const {
	return year - birth_year;
}

// determines whether a person can vote
bool Person::can_vote(int year) const {
	int the_age = age(year);
	return the_age >= VOTE_AGE;
}

// determines whether a person is a senior citizen
bool Person::is_senior(int year) const {
	return age(year) >= SENIOR_AGE;
}

// compares two Person objects for equality
bool Person::operator==(const Person& per) const {
	return ID_number == per.ID_number;
}

// compares two Person objects for inequality
bool Person::operator!=(const Person& per) const {
	return !(*this == per);
}

// A friend function of the Person class, which can access the class's private data members
// insert a Person object per information in ostream os, and output using <<  
ostream& operator<<(ostream& os, const Person& per) {
	os << "Given name: " << per.given_name << '\t'
		<< "Family name: " << per.family_name << '\n'
		<< "ID number: " << per.ID_number << '\t'
		<< "Year of birth: " << per.birth_year << '\n';
	return os;
}


