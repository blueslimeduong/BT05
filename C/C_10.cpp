#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int Random ()
{
    return rand()%50;
}
int main()
{
    srand(time(0));
    int N;
    cin >> N;
    int arr[1000];
    for(int i=0; i<N; i++)
    {
        arr[i] = Random();
    }
    for(int i=0; i<N-2; i++)
    {
        for(int j=i+1; j<N-1; j++)
        {
            for(int k=j+1; k<N; k++)
            {
                if((arr[i]+arr[j]+arr[k])%25==0)
                {
                    cout << arr[i] << ' ' << arr[j] << ' ' << arr[k] << endl;
                }
            }
        }
    }
}
