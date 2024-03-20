#include <iostream>
using namespace std;
#include <math.h>



int main()
{
	int a, b;
	cout << "Введите a и b" << endl;
	cin >> a;
	cin >> b;

	while (a <= b) {
		cout << a * a++ << "\t";
	}
}