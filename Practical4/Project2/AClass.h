#ifndef ACLASS_H
#define ACLASS_H

class AClass
{
private:
	double* data;	// Private data, a double-precision array
	int length;		// Private data, length of the data array
public:
	AClass(int len, double val);
	// Constructor, which allocates memory for the data array to 
	// the given length len, and sets all elements of the array to 
	// the given value val
	AClass(const AClass& x);
	void operator+=(const AClass& b);
	// Destructor to free the memory allocated for the data array
	~AClass();

};

#endif
