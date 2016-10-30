# Peremnozenie-matric
#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	int n1, m1, n2, m2;
	int **A, **B, **C;
	cout << "Razmer pervoi matrizi(n1Xm1): "; cin >> n1 >> m1;
	cout << "Razmer vtoroi matrizi(n2Xm2): "; cin >> n2 >> m2;

	A = (int**)malloc(sizeof(int*)*n1);
	for (int a=0; a<n1; a++)
		A[a] = (int*)malloc(sizeof(int)*m1);

	B = (int**)malloc(sizeof(int*)*n2);
	for (int a = 0; a<n2; a++)
		B[a] = (int*)malloc(sizeof(int)*m2);

	C = (int**)malloc(sizeof(int*)*n1);
	for (int a = 0; a<n1; a++)
		C[a] = (int*)malloc(sizeof(int)*m2);

	if (m1 != n2)
	{
		cout << "Matrizi nelzya peremnozhit!"; _getch(); return 0;
	}

	for (int i = 0; i < n1; i++)
		for (int j = 0; j < m1; j++)
		{
			cout << "A[" << i << "][" << j << "]="; cin >> A[i][j];
		}
	cout << "\n";
	for (int i = 0; i < n2; i++)
		for (int j = 0; j < m2; j++)
		{
			cout << "B[" << i << "][" << j << "]="; cin >> B[i][j];
		}
	cout << "\n";

	int S;

	for (int i = 0; i < n1; i++)
		for (int j = 0; j < m2; j++)
		{
			S = 0;
			for (int k = 0; k < m1; k++)
				S += A[i][k] * B[k][j];
			C[i][j] = S;
		}

	for (int i = 0; i < n1; i++)
		for (int j = 0; j < m2; j++)
			cout << "C[" << i << "][" << j << "]="<< C[i][j]<<"\n";

	for (int i = 0; i < n1; i++)
		for (int j = 0; j < m2; j++)
		{
			if (C[i][j] % 2 == 0) C[i][j] = 0;
			else C[i][j] = 0;
		}

	cout << "\n";

	for (int i = 0; i < n1; i++)
		for (int j = 0; j < m2; j++)
			cout << "C[" << i << "][" << j << "]=" << C[i][j] << "\n";

	_getch();
    return 0;
}
