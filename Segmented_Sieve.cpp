#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define F(i,l,r) for(int i=l;i<r;i++)
#define Vowel(c) bool IsVowel(char c) { return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');}
#define MOD 1000000007
#define MAX 1000000
#define ll long long
int fun(int arr[],int n)
{
    if(n==0||n==1){return 1;}
    if(arr[0]>arr[1])
    {
        return 0;
    }
    return fun(arr+1,n-1);
}
int main()
{
    int arr[]={4,6,5,1,13,22};
    int n=6;
    if(fun(arr,n)){cout<<"SORTED\n";}
    else {cout<<"NOT SORTED\n";}
}
