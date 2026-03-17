// 2-8
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int result = 1;

    for (int i = 1; i < 10; i++) {
        result *= i;
    }

    cout << "[1,10) 범위 숫자들의 곱: " << result << endl;

    return 0;
}