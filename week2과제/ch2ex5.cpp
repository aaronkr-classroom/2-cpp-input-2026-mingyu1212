#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;

	int rows = 5;
	int cols = 10;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;


	for (int i=1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;
}