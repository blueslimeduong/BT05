#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int Random (int N)
{
    return rand()% N;
}
int main()
{
    srand(time(0));
    int N;
    cin >> N;
    cout << Random(N);
    return 0;
}
