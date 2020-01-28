#include <iostream>

using namespace std;

int Fib(int N) {

	if (N <= 1){
		return N;
	}
	else {
		return Fib(N - 1) + Fib(N - 2);
	}

}


int main() {

	for (int i = 0; i <= 40; i++)
	{
		if (i % 10 == 0 && i != 0) cout << Fib(i) << endl;
		else cout << Fib(i) << ",";
	}
	return 0;
}