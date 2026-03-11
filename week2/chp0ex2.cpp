//chp0ex2
#include <iostream>
using namespace std;

int main(void)
{
	// 0-1 (3+4)
	cout << 3 + 4 << endl;

	// 0-2
	cout
		<< "This (\") is a quote, and this (\\) is a backslash."
		<< "\n\n\tThis is a sentence. \b"
		<< endl;

	// 0-7
	// 이것은 여러 행에 걸쳐 나타나는 주석입니다.
	// 시작과 끝 구분 기호로 /*와 */를 사용하기 때문입니다.
	cout << "Does this work?" << endl;

	return 0;
}