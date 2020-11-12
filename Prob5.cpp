#include <iostream>

using namespace std;

void opand()
{
    int a, b, c;
    bool d;
    cout << "Truth table for AND" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                d = a && b && c;
                cout << a << b << c << " : "<< d << endl;
            }
        }
    }
}

void opor()
{
    int a, b, c;
    bool d;
    cout << "Truth table for OR" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                d = a || b || c;
                cout << a << b << c << " : " << d << endl;
            }
        }
    }
}


	int main()
{
        opand();
        opor();
}
