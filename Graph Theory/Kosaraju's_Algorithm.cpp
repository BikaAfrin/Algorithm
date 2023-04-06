#include<bits/stdc++.h>
using namespace std;

const int MAX = 2e5+9;
vector< int > adj[MAX], adj_rev[MAX];
vector<bool>visited;
vector<int> order, component;
int SCC=1;

void dfs1(int node){
    visited[node] = true;

    for(auto child:adj[node]){
        if(visited[child]==false){
            dfs1(child);

        }
    }
    order.push_back(node);
    //cout<<node<<"+";
}

void dfs2(int node){
    visited[node] = true;

    component.push_back(node);
    //cout<<node<<"+";
    for(auto child:adj_rev[node]){
        if(visited[child]==false){
            dfs2(child);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj_rev[b].push_back(a);
    }

    visited.assign(n, false);

    for(int i=1; i<=n; i++){
        if(visited[i]==false){
            dfs1(i);
        }
    }

    visited.assign(n, false);


    reverse(order.begin(), order.end());

    vector<int> roots(n, 0);
    vector<int> root_nodes;
    vector<vector<int>> adj_scc(n);

    for (auto v : order){
        //cout << v << "\n";
        if (!visited[v]) {
            dfs2 (v);
            int root = component.front();
            //cout<<root<<"-\n";
            for (auto u : component) roots[u] = root;
            root_nodes.push_back(root);
            cout<<"SCC #"<<SCC<<"\n";
            for(auto u:component){
                cout<<u<<" ";
            }
            cout<<"\n";
            SCC++;

            component.clear();
        }
    }
    for (int v = 1 ; v <= n; v++){
        for (auto u : adj[v]) {
                //cout<<v<<"-"<<u<<"\n";
            int root_v = roots[v],
                root_u = roots[u];
                //cout<<root_v<<" "<<root_u<<"\n";
            if (root_u != root_v)
                adj_scc[root_v].push_back(root_u);
        }
    }
    cout << endl;
    for(int i=1;i<=adj_scc.size();i++){
        for(auto v:adj_scc[i]){
            cout<<i<<" "<<v<<"\n";
        }
    }
}
