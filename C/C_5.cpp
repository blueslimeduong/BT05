#include <iostream>

using namespace std;

int ktraNgto (int n)
{
    for(int i=2; i*i<=n; i++)
    {
      if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int N;
    cin >> N;
    for(int i=2; i<N; i++)
    {
        if(ktraNgto(i)) cout << i << ' ';
    }
    return 0;
}
