// 2-9
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a, b;

    cout << "두 숫자를 입력하세요: ";
    cin >> a >> b;

    if (a > b) {
        cout << "더 큰 수: " << a << endl;
    }
    else if (b > a) {
        cout << "더 큰 수: " << b << endl;
    }
    else {
        cout << "두 수는 같습니다." << endl;
    }

    return 0;
}