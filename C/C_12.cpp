#include <iostream>

using namespace std;

int toHop(int k, int n)
{
    int Tu = 1, Mau = 1;
    for(int i=1; i<=k; i++)
    {
        Mau *= i;
    }
    for(int i=n-k+1; i<=n; i++)
    {
        Tu *= i;
    }
    return Tu/Mau;
}
int kiemTra(int k, int n)
{
    if(k>=0 && k<=n && n>=1 && n<=20)
    {
        return 1;
    }
    return 0;
}
void nhapKN(int k[], int n[], int &soPhanTu)
{
    int K=1, N=1;
    soPhanTu = 0;
    while(K!=-1&&N!=-1)
    {
        cin >> K >> N;
        k[soPhanTu] = K;
        n[soPhanTu] = N;
        soPhanTu++;
    }
}
int main()
{

    int k[100], n[100];
    int N;
    nhapKN(k,n,N);
    for(int i=0; i<N; i++)
    {
        if(kiemTra(k[i],n[i]))
            cout <<toHop(k[i],n[i]) << endl;
    }
    return 0;
}
