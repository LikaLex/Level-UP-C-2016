#pragma hdrstop
#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;


int main()
{
	int N10 = 0, N2[256], n = 0;
	cout << "Vvedite 4islo v 10-chnoi sisteme: ";
	cin >> N10;
	n = N10;
	int i = 0;

	while (n != 1)
	{
		N2[i] = n % 2;
		n = n / 2;
		i++;
	}
	N2[i] = 1;

	for (; i >= 0; i--)
	{
		cout << N2[i];
		if (i % 4 == 0) cout << " ";
	}

	_getch();
	return 0;
}




