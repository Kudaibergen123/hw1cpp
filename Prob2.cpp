#include <iostream>

using namespace std;

void minandmax(int table[]) {

	//int arrSize = sizeof(table) / sizeof(table[0]);
	int arrSize = 8;
	int max = table[0];
	int min = table[0];
	for (int i = 0; i < arrSize; i++) {
		if (max < table[i]) { max = table[i]; }
		if (min > table[i]) { min = table[i]; }
	}
	cout << "For table:\n";
	for (int i = 0; i < arrSize; i++) {
		cout << table[i]<<endl;
	}
	cout << "Max is:"<<max<<endl;
	cout << "Min is:" << min << endl;
}


	int main()
{
		int table[] = { 54,2, 4, 7, 8,  3543, 4845224, 9 };
		minandmax(table);

}
