#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	
	// 1-3
	{
		const string s = "a string";
		cout << s << endl;
	}
	{
		const string s = "another string";
		cout << s << endl;
	}
	
	
	// 1-4
	{
		const string s = "a string";
		cout << s << endl;
		{
			const string s = "another string";
			cout << s << endl;
		} //;
	}
	
	/*
	// 1-5
	{
		string s = " a string";
		{
			string x = s + ", really";
			cout << s << endl;
		}
		cout << x << endl;
	}
	-> x가 중괄호 안에서만 정의됨.
		=> x를 중괄호 밖에서도 정의 or 중괄호 안쪽에서 출력
	*/
	{
		string s = " a string";
		string x;
		{
			x = s + ", really";
			cout << s << endl;
		}
		cout << x << endl;
	}
	
	// 1-6

	cout << "What is your name? ";
	string name;
	cin >> name;
	cout << "Hello, " << name << endl << "And what is yours? ";
	cin >> name;
	cout << "Hello, " << name << "; nice to meet you too!" << endl;
	
	return 0;
}