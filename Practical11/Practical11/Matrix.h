#ifndef MATRIX_H
#define MATRIX_H


template <typename T>
class matrix {
public:
	// constructor & destructor
	matrix(int n_rows, int n_cols);
	~matrix();
	// copy constructor
	matrix(const matrix& o);
	// overload [] to return pointer to the i'th row of data
	T* operator[](int i);
	// overload + and * for matrices addition & multiplication
	matrix operator+(const matrix& a);
	matrix operator*(const matrix& a);
private:
	// matrx dimensions & data
	int num_rows, num_cols;
	T** data;
};

#endif // !MATRIX_H


