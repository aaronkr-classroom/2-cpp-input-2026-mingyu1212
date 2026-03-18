// square.cpp
#include <iostream>

// 표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cout;
using std::cin;
using std::endl;

// * 네모 만들기

int main(void)
{
	cout << "1. Square OR 2. Rect >>> ";
	
	int option;
	cin >> option; 

	if (option != 1 && option != 2)
	{
		cout << "Error: Only Chosse 1 or 2";

		return 0;
	}

	cout << "What size square? >>>";

	int size;
	cin >> size; // 10

	// 행 출력
	for (int i = 0; i < size; i++)
	{
		// 열 출력
		for (int j = 0; j < size; j++)
		{	
			if (option == 1)
			{
				cout << "*"; // 10x10 네모
			}
			else if (option == 2)
			{
				cout << "**"; // 20x10 직사각형
			}
		}
		// 행 끝 줄 바굼
		cout << endl;
	}

	return 0;
}