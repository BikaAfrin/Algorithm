#include<bits/stdc++.h>
using namespace std;
#define N 20

int arr[N+1];
vector<bool>Prime(N+1,true);

void Sieve()
{
    Prime[1]=Prime[0]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(Prime[i]==true)
        {
           for(int j=i*i;j<=N;j+=i)
           {
               Prime[j]=false;
           }
        }
    }
}

int main()
{
   Sieve();
   for(int i=1;i<=N;i++)
   {
       if(Prime[i]) { cout<<i<<endl;}
   }
}
