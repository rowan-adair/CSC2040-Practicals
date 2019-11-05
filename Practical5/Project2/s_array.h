#ifndef S_ARRAY_H
#define S_ARRAY_H
template<typename T>
class s_array
{
public:
	
	s_array(int size);
	~s_array();
	int &operator[](int i);
private:
	int size;
	T* data;
};



#endif // !S_ARRAY_H

