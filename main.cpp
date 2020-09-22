#include <iostream>
#include <string>

double sigmoid(double x)
{
	double y = 1/(1 + pow(2.718281828459045, -x));
	return y;
}


int main()
{
	double x[50];
	double y[50];
	double *p = x;
	for (int i = -25; i < 25; i++)
	{
		*p = double(i);
		p += 1;
	}

	p = y;
	for (int i = 0; i < 50; i++)
	{
		*p = sigmoid(double(x[i]));
		p += 1;	
	}
	
	for(int i = 0; i < 50 ; i++)
	{
		std::cout << y[i] << std::endl;
	}

	return 0;
}
