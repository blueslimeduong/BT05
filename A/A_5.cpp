#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &b=a;
    cout << "dia chi a: " << &a << endl;
    cout << "dia chi b: " << &b <<endl;
    int c = 100;
    cout << "dia chi c: " << &c << endl;
    int &b = c;
    cout << "dia chi b: " << &b <<endl;
    return 0;
    //bien va tham chieu la 1
    // khong the khai  bao bien tham chieu ma k chieu ngay
    // khong the chieu toi bien khac
}
