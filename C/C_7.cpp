#include <iostream>

using namespace std;

void veTamgiac(int n)
{
    int M=n-1, N=1;
    while(n--)
    {
        for(int i=1;i<=M; i++)
        {
            cout << ' ';
        }
        for( int i=1; i<=2*N-1; i++)
        {
            cout << '*';
        }
        cout << endl;
        M--;
        N++;
    }
}
int main()
{
    int N;
    cin >> N;
    veTamgiac(N);
    return 0;
}
