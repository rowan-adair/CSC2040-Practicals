// Declaration of the Person class that represents a human being
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iosfwd>

using std::string;
using std::ostream;

class Person {
public:
	// Constructors
	// parameterised
	Person(string first, string family, string ID, int birth) :
		given_name(first), family_name(family), ID_number(ID), birth_year(birth) {}
	// default or parameter-less
	Person() :
		given_name(""), family_name(""), ID_number(""), birth_year(1900) {}

	// Modifier Functions
	// sets the given_name field
	void set_given_name(const string& given) { given_name = given; }
	// sets the family_name field
	void set_family_name(const string& family) { family_name = family; }
	// sets the ID number field
	void set_ID_number(const string& ID) { ID_number = ID; }
	// sets the birth_year field
	void set_birth_year(int new_birth_year) { birth_year = new_birth_year; }

	// Accessor Functions
	// gets the person's given name
	string get_given_name() const { return given_name; }
	// gets the person's family name
	string get_family_name() const { return family_name; }
	// gets the person's ID number
	string get_ID_number() const { return ID_number; }
	// gets the person's year of birth
	int get_birth_year() const { return birth_year; }

	// Other Functions
	// calculates a person's age at this year's birthday
	int age(int year) const;
	// determines whether a person can vote
	// return true if the person's age is >= the voting age
	bool can_vote(int year) const;
	// determines whether a person is a senior citizen
	// return true if person's age >= age at which a person is considered to be a senior citizen
	bool is_senior(int year) const;
	// compares two Person objects for equality
	// return true if the Person objects have the same ID number; false if they don't
	bool operator==(const Person& per) const;
	// compares two Person objects for inequality
	// return the negation of the equals operator
	bool operator!=(const Person& per) const;

	// a friend function of the Person class
	// insert a person object per information in ostream os, and output using <<  
	friend ostream& operator<<(ostream& os, const Person& per);

private:
	// Data Fields
	// the given name
	string given_name;
	// the family name
	string family_name;
	// the ID number
	string ID_number;
	// the birth year
	int birth_year;

	// Constants
	// the age at which a person can vote
	static const int VOTE_AGE = 18;
	// the age at which a person is considered a senior citizen
	static const int SENIOR_AGE = 65;
};

#endif
