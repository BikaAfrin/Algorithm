#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define F(i,l,r) for(int i=l;i<r;i++)
#define Vowel() bool IsVowel(char c) { return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');}
#define MAX 32600
vector<int>prime;
void sieve()
{
    vector<bool>isprime(MAX,true);
    isprime[0]=isprime[1]=false;
    for(int i=3;i*i<MAX;i++)
    {
        if(isprime[i]==true)
        {
            for(int j=i*i;j<MAX;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<MAX;i+=2) { if(isprime[i]) prime.push_back(i);}
}
void segsieve(int l,int r)
{
    bool isprime[r-l+1];
    F(i,0,r-l+1) { isprime[i]=true;}
    for(int i=0;prime[i]*prime[i]<=r;i++)
    {
        int currentprime = prime[i];
        int base=(l/currentprime)*currentprime;
        if(base<l) { base+=currentprime;}
        for(int j=base; j<=r; j+=currentprime) { isprime[j-l]=false;}
        if(base==currentprime) { isprime[base-l]=true;}
    }
    for(int i=0;i<r-l+1;i++) { if(isprime[i]) cout<<i+l<<"\n";}
}
int main()
{
    optimize();
    int l,r;
    sieve();
    cin>>l>>r;
    segsieve(l,r);
}
