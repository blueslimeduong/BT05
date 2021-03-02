#include <iostream>

using namespace std;

int UCLN (int a, int b)
{
    if(b==0) return a;
    return UCLN(b, a%b);
}
int main()
{
    int a, b;
    cin >> a >> b;

    if(UCLN(a,b)==1)
    {
        cout << a << " va " << b << " nguyen to cung nhau";
    }
    else
    {
        cout << a << " va " << b << " khong nguyen to cung nhau";
    }
    return 0;
}
