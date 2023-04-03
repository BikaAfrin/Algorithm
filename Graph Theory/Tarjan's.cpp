#include<bits/stdc++.h>
using namespace std;
int vis[1001], onstack[1001];
vector<int> ar[1001];
int in[1001],low[1001];
stack<int> s;

int timer=1,SCC=0;

void dfs(int node){
    vis[node]=1;
    in[node]=low[node]=timer++;
    //cout<<"in[node]-"<<node<<"-"<<in[node]<<"low[node]-"<<node<<"-"<<low[node]<<"\n";
    onstack[node]=1;
    s.push(node);

    for(auto child: ar[node]){
        if(onstack[child]==1){
            //cout<<node<<" "<<child<<"$\n";
            //cout<<low[node]<<" "<<low[child]<<"#\n";
            low[node]= min(in[child], low[node]);
            //cout<<node<<"-"<<low[node]<<"*\n";
        }else if(vis[child]==0){
            dfs(child);
            //cout<<node<<" "<<child<<"-\n";
            //cout<<low[node]<<" "<<low[child]<<"=\n";
            low[node]=min(low[node], low[child]);
            //cout<<low[node]<<" "<<in[node]<<"+\n";
        }
    }
    if(low[node]==in[node]){
        SCC++;
        cout<<"SCC number:"<<SCC<<endl;
        int temp;
        while(1){
            temp=s.top();
            s.pop();
            onstack[temp]=0;
            cout<<temp<<" ";
            if(temp==node){
                break;
            }
        }
        cout<<endl;
    }

}





int main(){
    int n,m,a,b;
    cin>>n>>m;

    for(int i=0; i<m; i++){
      cin>>a>>b;
      ar[a].push_back(b);
    }

  for(int i=1; i<=n ;i++){
    vis[i]= onstack[i]=0;
  }
  for(int i=1; i<=n ;i++){
    if(vis[i]==0){
        dfs(i);
    }
  }
}
/*8 12
1 2
2 3
3 1
2 8
3 4
8 4
4 8
7 8
5 4
5 7
7 6
6 5*/
