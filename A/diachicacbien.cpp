#include <iostream>
using namespace std;

int main(int agrc, char *agrv[])
{
    int c;
    int a[3];
    int d, e;
    char b[10];
    for(int i=1; i<4; i++)
    {
        cout << &a[i-1] << ' ';
    }

    cout << endl;
    for(int i=1; i<4; i++)
    {
        cout << (void *)&b[i] << ' ';
    }
    cout << endl;
    cout << &c << ' ' << &d << ' ' << &e;
    // dia chi cac phan tu mang int cach nhau 4 byte
    // dia chi cac phan tu mang char cach nhau 1 byte
    // dia chi cac bien khai bao them lien truoc hoac sau mang tuy vao vi tri khai bao

    return 0;
}
