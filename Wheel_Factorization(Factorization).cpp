#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define F(i,l,r) for(int i=l;i<r;i++)
#define Vowel() bool IsVowel(char c) { return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');}
#define MAX 32600
#define ll long long
vector<long long>Wheel_Factorization(long long val)
{
    vector<long long>factorization;
    while(val%2==0)
    {
        factorization.push_back(2);
        val/=2;
    }
    for(int i=3;i*i<=val;i+=2)
    {
        while(val%i==0)
        {
            factorization.push_back(i);
            val/=i;
        }
    }
    if(val>1) { factorization.push_back(val);}
    return factorization;
}
int main()
{
    optimize();
    int val;
    cin>>val;
    vector<long long>result=Wheel_Factorization(val);
    for(long long i=0;i<result.size();i++) { cout<<result[i]<<endl;}
}
