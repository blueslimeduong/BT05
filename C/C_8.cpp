#include <iostream>
#include <cmath>
using namespace std;

int rnd (double n) //su dung ceil & floor
{
    return ((ceil(n) - n) > (n - floor(n)) ? floor(n) : ceil(n));
}
int Rnd (double n) // k dung ceil & floor
{
    return ((n - (int )n) < 0.5) ? (int) n :(int)n + 1;
}
int main()
{
    double n;
    cin >> n;
    cout << rnd(n) << ' ' << Rnd(n);
}
