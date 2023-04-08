#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
const int MAX=2e5+9;

ll n,m;
vector<ll>edges[MAX],Topo,edges_r[MAX],component;
bool V[MAX];
ll arr[MAX];
ll SCC=1;

void dfs1(ll node){
    V[node]=true ;
    for(auto u:edges[node]){
        if(V[u]==false){
            dfs1(u);
        }
    }
    Topo.push_back(node);
}

void dfs2(ll node){
    V[node]=true ;
    component.push_back(node);
    for(auto u:edges_r[node]){
        if(V[u]==false){
            dfs2(u);
        }
    }
}

int main()
{
    optimize();
    cin>>n>>m;

    for(ll i=1;i<=n;i++){
        edges[i].clear();
    }

    Topo.clear();

    while(m--){
        ll a,b;
        cin>>a>>b;
        edges[a].push_back(b);
        edges_r[b].push_back(a);
    }

    memset(V,false,sizeof(V));

    for(ll i=1;i<=n;i++){
        if(V[i]==false){
            dfs1(i);
        }
    }

    memset(V,false,sizeof V);
    reverse(Topo.begin(),Topo.end());

    for(auto u:Topo){
        if(V[u]==false){
            dfs2(u);

            cout<<"SCC #"<<SCC<<"\n";
            SCC++;

            for(auto u:component){
                cout<<u<<" ";
            }
            cout << endl;
        }
        component.clear();
    }

    return 0;
}

