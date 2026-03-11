//name.cpp
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	// 이름을 물음
	cout << "Please enter your first name: ";
	
	// 이름을 읽어 들임
	string name;
	cin >> name;

	// 출력하려는 메시지를 구성
	const string greeting = "Hello, " + name + "!";

	/* 출력
	***************** -> 1st
	*               * -> 2nd
	* Hello Mingyu! * -> 3rd
	*               * -> 4th
	***************** -> 5th
	*/

	// 인사말의 두 번째 행과 네 번째 행
	const string spaces(greeting.size(), ' ');
	const string second = "* " + spaces + " *";

	// 인사말의 첫 번째 행과 다섯 번째 행
	const string first(second.size(), '*');

	// 모두 출력
	cout
		<< endl // 줄바꿈
		<< first << endl
		<< second << endl
		<< "* " << greeting << " *" << endl
		<< second << endl
		<< first << endl
		<< endl;

	return 0;
}