#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int s = 0;

	//BogoMIPS-ben lévő while ciklus feltétele:
	//loops_per_sec <<= 1
	while (i != 0)
	{
		i <<= 1;
		cout << i;
		s = s + 1;
	}

	cout << "\n" << s;
}