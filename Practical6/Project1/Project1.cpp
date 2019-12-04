#include "ArrayStack.h"
template <typename T>

void setUpStack(ArrayStack<T>* s, int num) {
	if(s->isEmpty()){
		for (int n = 0; n < num; n++)
		{
			cout << "Enter the data" << endl;
			T input;
			cin >> input;
			s->push(input);
		}
	}
}
template <typename T>
void printStack(ArrayStack<T>& s) {
	ArrayStack<T> temp_stack;
	T* temp_t = T();
	while (!s.isEmpty()) {
		temp_t = s.pop();
		temp_stack.push(*temp_t);
		cout << *temp_t << endl;
	}
	while (!temp_stack.isEmpty()) {
		s.push(*temp_stack.pop());
	}
}

template <typename T>
void removeAt(ArrayStack<T>& s, int n) {
	
	
	
}


int main() {
	ArrayStack<int>* int_stack = new ArrayStack<int>[4];
	setUpStack(int_stack, 4);
	printStack(*int_stack);
}