#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int limit = 1000;
    int width1 = 10; // 첫 번째 열 너비 변수
    int width2 = 20; // 두 번째 열 너비 변수 (숫자가 커지므로 더 넓게 설정)

    cout << setw(width1) << "숫자" << setw(width2) << "제곱값" << endl;
    cout << "------------------------------" << endl;

    for (int i = 1; i <= limit; ++i) {
        // 인수에 숫자가 아닌 변수 width1, width2를 사용
        cout << setw(width1) << i << setw(width2) << (long long)i * i << endl;
    }

    return 0;
}