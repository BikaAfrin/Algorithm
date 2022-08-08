#include<bits/stdc++.h>
using namespace std;

const int n=10e5+9;
vector<long long int>g[n];
bool vis[n];

void DFS(int node)
{
    vis[node]=true;
    for(auto u:g[node])
    {
        if(!vis[u])
        {
            DFS(u);
        }
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ans=0;
    for(int i=1;i<=v;i++)
    {
       if(!vis[i])
       {
           DFS(i);
           ans++;
       }
    }
    cout<<"Connected Component : "<<ans<<"\n";
}

