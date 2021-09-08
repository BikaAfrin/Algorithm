#include<bits/stdc++.h>
using namespace std;
vector<int>Prime;

void Sieve(int N)
{
    for(int i=0;i<=N;i++)
    {
        Prime.push_back(i);
    }
    for(int i=2;i<=N;i+=2)
    {
        Prime[i]=2;
    }
    for(int i=3;i*i<=N;i+=2)
    {
        if(Prime[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(Prime[j]==j) { Prime[j]=i;}
            }
        }
    }
}
void Factorization(int N)
{
    while(N!=1)
    {   
        cout<<Prime[N]<<endl;
        N=N/Prime[N];
    }
}
int main()
{
   int value=20;
   Sieve(value);
   Factorization(value);
}
