#pragma hdrstop
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int Num_a, Num_b;
	cout << "Vvedite a: ";
	cin >> Num_a;
	cout << "Vvedite b: ";
	cin >> Num_b;
	if (Num_a > Num_b) {
		cout << "a > b" << endl;
	} else if (Num_b > Num_a) {
		cout << "b > a" << endl;
	} else {
		cout << "a = b" << endl;
	}
	getch();
    return 0;
}
