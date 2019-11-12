#ifndef RAND_ARRAY_H
#define RAND_ARRAY_H

class RandArray {
private:
	int* data;
	int length;
public:
	RandArray(int len, int max_num);
	RandArray();
	~RandArray();
	void print_data();
};

#endif // !RAND_ARRAY_H


