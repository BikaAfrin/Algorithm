#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define F(i,l,r) for(int i=l;i<r;i++)
#define Vowel(c) bool IsVowel(char c) { return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');}
#define MOD 1000000007
#define MAX 1000000
#define ll long long
int fun(int arr[],int n,int s,int c)
{
    if(n==0){return 0;}
    if(arr[0]==s)
    {
        return c;
    }c++;
    fun(arr+1,n-1,s,c);
}
int main()
{
    int arr[]={8,0,4,6,5,3,2,1,7,9,10};
    int n=11;
    int s=11;
    int c=1;
    if(!fun(arr,n,s,c)){cout<<"NF\n";}
    else {cout<<fun(arr,n,s,c)<<"\n";}
}
