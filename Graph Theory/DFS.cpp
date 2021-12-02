#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F(i,l,r) for(int i=l;i<r;i++)
#define Vowel() bool IsVowel(char c) { return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');}
#define MOD 1000000007
#define ll long long
//#define N 100000;
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void DFS(ll int node,vector<ll int>adj[],vector<ll int>&vis)
{
    cout<<node<<" ";
    vis[node]=1;
    for(auto u:adj[node])
    {
        if(!vis[u])
        {
            DFS(u,adj,vis);
        }
    }
}

int main()
{
    ll int m=8,n=9;
    vector<ll int>adj[n],vis(n);
    F(i,0,m)
    {
        ll int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    F(i,0,n)
    {
        if(!vis[i])
        {
            DFS(i,adj,vis);
        }
    }
}
