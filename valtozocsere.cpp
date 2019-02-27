#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	//turing halting problem

	//összeadás, kivonás használata:
	int a,b;
	a = 10;
	b = 5;
	cout << "csere előtt: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//változó csere
	a = a + b;
	b = a - b;
	a = a - b;
	//pythonban nem kell használni 3. változót:
	//a,b = b,a;
	cout << "csere után: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//XOR használata:
	cout << "csere előtt: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	a = a xor b;
	b = b xor a;
	a = a xor b;
	cout << "csere után: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	return 0;
}