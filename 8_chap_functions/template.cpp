#include <iostream>

template <class Any> void Swap(Any &a,Any &b);

int main()
{
	using namespace std;

    int i = 10;
	int j = 20;

    cout << "i , j ="<< i <<","<< j << "\n";
	cout << "using compiler-generated int swapper: \n";
	Swap(i,j);
	cout << "Now i, j=" << i << ","<< j << ".\n";

	double x = 24.5;
	double y = 81.7;

    cout << "x,y = "<< x << "," << y << ".\n";
	cout << "Using compiler-generated double swapper: \n";
	Swap(x,y);
	cout << "Now x, y=" << x << ","<<y<<".\n";

	return 0;
}

template <class Any> void Swap(Any &a , Any &b)
{
	Any tmp;
	tmp = a;
	a = b;
	b = tmp;
}

