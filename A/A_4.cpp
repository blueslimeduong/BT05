#include <iostream>

using namespace std;

string Str (string s)
{

    cout << "dia chi string truyen: " <<  &s << endl;
    return s;
}
int arr (int a[])
{

    cout << "dia chi mang truyen: " <<&a[0] << endl;
    return a[0];
}
int main()
{
    string s="Hello";
    int a[10];
    Str(s);
    cout << "dia chi string : "<<&s << endl;
    arr(a);
    cout << "dia chi mang: " << &a[0] << endl;
    return 0;
}
// mang truyen theo co che pass by reference
//string truyen theo co che pass by value
