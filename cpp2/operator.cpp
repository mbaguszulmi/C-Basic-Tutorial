#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // Unary operator
    int a = 1;
    // increment
    a++;
    cout << "Nilai a : " << a << endl;
    // decrement
    a--;
    cout << "Nilai a : " << a << endl;

    // output increment
    cout << "Nilai a output : " << a++ << endl;
    // nilai a = 1
    cout << "Nilai a output : " << ++a << endl;

    // output decrement
    cout << "Nilai a output : " << a-- << endl;
    // nilai a = 1
    cout << "Nilai a output : " << --a << endl;

    int b = 2;
    // binary operator
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    // 1 / 2 = 0.5 => 0
    // 0 * 2 = 0
    // 1 - 0 = 1 <= sisa pembagian

    cout << "a < b = " << (a < b) << endl;
    cout << "a <= b = " << (a <= b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;

    bool c = true, d = false;
    cout << "c && d = " << (c && d) << endl;
    cout << "c || d = " << (c || d) << endl;
    cout << "!(c || d) = " << !(c || d) << endl;

    a = 4;
    a += 2;
    cout << "a += 2 = " << a << endl;
    // a = a + 2;

    // ternary operator
    a = (a == 6) ? 0 : a;
    cout << "a baru = " << a << endl;

    return 0;
}
