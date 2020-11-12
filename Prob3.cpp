#include <iostream>

using namespace std;

void Mt(int n) {

	int i;


	for (i = 1; i <= 10; i++)
		cout <<n<<"*"<<i<<"="<< n * i << endl;
}




	int main()
{
		int n = 0;
		cout << "Input number for multiplication table\n";
		cin >> n;
		cout << "Multiplication table for " << n << endl;
		Mt(n);

}
