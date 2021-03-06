﻿#include<iostream>
using namespace std;

float F1(intx)
{
	float result = 0;

	if (x >= 0)
	{
		result = x;
	}
	else
	{
		result = pow(2, -x) + 7 * x;
	}

	return result;
}

void F2(int&x)
{
	x = F1(x);
}



int main()
{
	for (int i = -3; i < 3; i++)
	{
		float h = F1(i);
		cout << "i=" << i << "; F1(i)=" << h << endl;
	}

	cout << endl;

	for (int i = -3; i < 3; i++)
	{
		cout << " i = " << i << " ; ";
		F2(i);
		cout << " i' = " << i << endl;
	}
	system("pause");
	return 0;
}

