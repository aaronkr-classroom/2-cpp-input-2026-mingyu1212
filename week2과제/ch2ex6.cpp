// 2-6
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	// 변수 i 설정
	int i = 0;

	// i가 10보다 작은 동안 반복 => 즉 i가 0부터 9까지 반복
	while (i < 10) {

		// i가 1씩 증가
		i += 1;

		// i는 1부터 10까지 출력됨
		cout << i << endl;
	}
}
