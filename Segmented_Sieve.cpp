#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define F(i,l,r) for(int i=l;i<r;i++)
#define Vowel(c) bool IsVowel(char c) { return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');}
#define MOD 1000000007
#define MAX 1000000
#define ll long long
int power(int x,int n)
{
    if(n==0){return 1;}
    return x*power(x,n-1);
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
}
