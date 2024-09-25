#include <iostream>
using namespace std;

int findMax(int a, int b); //arguments are for 2 integers
double findMax(double a, double b); // for 2 doubles
double findMax(int a, double b); //spits out a double but takes 2 ints
double findMax(double a, int b); // spits out a double and takes 2 doubles

int main() {
	cout << findMax(50, 100) << endl;
	cout << findMax(50.75, 50.25) << endl;
	cout << findMax(50, 50.25) << endl;
	cout << findMax(50.75, 50) << endl;

}

int findMax(int a, int b)
{
	int max = b;
	cout << "findMax() the int version" << endl;
	if (a > b)
		max = a;
	return max;
}

double findMax(int a, double b)
{
	int max = b;
	cout << "findMax() the int double version" << endl;
	if (a > b)
		max = a;
	return max;
}
double findMax(double a, double b)
{
	double max = b;
	cout << "findMax() the double double version" << endl;
	if (a > b)
		max = a;
	return max;
}

double findMax(double a, int b)
{
	int max = b;
	cout << "findMax() the double int version" << endl;
	if (a > b)
		max = a;
	return max;
}
