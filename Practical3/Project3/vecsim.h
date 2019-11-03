class vecsim {
public:
	// constructor
	vecsim(double* v1, double* v2, int len);
	// return Euclidean distance between v1 & v2
	double Euclidean();
	// return Cosine similarity between v1 & v2
	double Cosine();
	~vecsim();
private:
	// the two vectors to be compared, with the same length vec_len
	double* vec1, * vec2;
	int vec_len;
};