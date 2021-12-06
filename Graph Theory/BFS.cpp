#include<iostream>
#include<vector>
#include<queue>
#define ll long long
#define N 6
using namespace std;

vector<int>adj[N+1];
int vis[N+1];

void BFS(int node)
{
    queue<int>q;
    q.push(node);
    vis[node]=1;
    while(!q.empty())
    {
        int a=q.front();
        cout<<a<<" ";
        q.pop();

        for(auto u:adj[a])
        {
            if(!vis[u])
            {
                q.push(u);
                vis[u]=1;
            }
        }
    }
}
int main()
{
    int t;cin>>t;

    for(int i=0;i<t;i++)
    {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=N;i++)
    {
        if(!vis[i])
        {
            BFS(i);
        }
    }
}
