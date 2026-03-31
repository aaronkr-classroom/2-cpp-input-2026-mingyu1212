#include <iostream>
#include <iomanip> // setw 사용을 위해 필요

using namespace std;

int main() {
    cout << setw(10) << "숫자" << setw(15) << "제곱값" << endl;
    cout << "--------------------------" << endl;

    for (int i = 1; i <= 100; ++i) {
        // 첫 번째 열은 10칸, 두 번째 열은 15칸 확보하여 출력
        cout << setw(10) << i << setw(15) << i * i << endl;
    }

    return 0;
}