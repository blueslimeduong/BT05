#include <iostream>

using namespace std;

int passByValue (int n)
{
    cout << "dia chi tham tri : " << &n<<endl;
    return n;
}
int passByReference (int &n)
{
    cout << "dia chi tham chieu : " << &n << endl;
    return n;
}
int main()
{
    int n;
    cout << "dia chi doi so: " << &n << endl;

    passByValue(n);
    passByReference(n);
    //doi so va tham bien la 1
    //doi so va tham tri co dia chi khac nhau
    return 0;
}
