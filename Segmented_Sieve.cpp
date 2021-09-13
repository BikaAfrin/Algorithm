#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define F(i,l,r) for(int i=l;i<r;i++)
#define Vowel() bool IsVowel(char c) { return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');}
#define MAX 32600
#define ll long long
vector<ll>trial_divison(int val){
    vector<ll>factorization;
    for(int i=2;i*i<=val;i++)
    {
        while(val%i==0){
            factorization.push_back(i);
            val/=i;
        }
    }
    if(val>1){ factorization.push_back(val);
    return factorization;}
}
int main()
{
    optimize();
    int val;
    cin>>val;
    vector<ll>v=trial_divison(val);
    F(i,0,v.size()) { cout<<v[i]<<" ";}
}
