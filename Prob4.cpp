#include <iostream>

using namespace std;

void Fib(int n) {
	int prev = 0;
	int next = 1;
	int val;
	for (int i = 0; i < n; i++) {
		val = prev + next;
		prev = next;
		next = val;
		cout << prev << endl;
	}
	

}


	int main()
{
		int n = 0;
		cout << "Input rank of the Fibonacci sequence\n";
		cin >> n;
		cout << "Fibonacci sequence:\n";
		Fib(n);

}
