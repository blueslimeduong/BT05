#include <iostream>

using namespace std;

string DecToBi (int n)
{
    string Ans;
    while(n)
    {
        if(n%2==1)
        {
            Ans = '1' + Ans;
        }
        else
        {
            Ans = '0' + Ans;
        }
        n/=2;
    }
    return Ans;
}
int main()
{
    int N;
    cin >> N;
    cout << DecToBi(N);
    return 0;

}
