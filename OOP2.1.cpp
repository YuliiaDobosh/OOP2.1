#include "Money.h"
#include <iostream>
using namespace std;
int main() {
	Money a(1, 1);
	Money b(1, 1);
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	Money f;
	cout << "Input money  " << endl;
	cin >> f;
	Money s;
	cout << "Input money  " << endl;
	cin >> s;
	cout << "Sum = " << Money::GetSumma(f,s) <<endl;
	cin.get();
	return 0;
}
