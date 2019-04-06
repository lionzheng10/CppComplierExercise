#include <iostream>
#include <array>

using namespace std;
int main()
{
    std::array<int,10> a;
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    a[4] = 4;
    a[5] = 5;
    a[6] = 6;
    a[7] = 7;
    a[8] = 8;
    a[9] = 9;
    //a[10] = 10;
    //a[11] = 11;

    cout << "Hello world" << endl;
    cout << "number0: " << a[0] << endl;
    cout << "number1: " << a[1] << endl;
    cout << "number2: " << a[2] << endl;
    cout << "number3: " << a[3] << endl;
    cout << "number4: " << a[4] << endl;
    cout << "number5: " << a[5] << endl;
    cout << "number6: " << a[6] << endl;
    cout << "number7: " << a[7] << endl;
    cout << "number8: " << a[8] << endl;
    cout << "number9: " << a[9] << endl <<endl;

    //cout << "number10: " << a[10] << endl <<endl;
    //cout << "number11: " << a[11] << endl <<endl;
    cout << a[9] << endl;
    cout << a.at(9) << endl;
    cout << a[-1] << endl;
    cout << a.back() << endl;
    return 0;
}