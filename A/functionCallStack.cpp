#include <iostream>

using namespace std;

long factorial (int x, int &dem)
{   dem++;
    cout<< "x = " << x << " at " << &x << endl;
    if(x<=1) return 1;
    return x*factorial(x-1,dem);
}
int main()
{
    int N;
    cin >> N;
    int dem = 0;
    cout << factorial(N,dem);
    cout << endl<< dem;
    // cac dia chi cach nhau 30 byte
    // kich thuoc stack frame bang N (not sure :/ )
    return 0;
}
