
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    
    vector<pair<int,int>> adj[n+1];
    
    for(int i=0;i<m;i++){
        int u, v, wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    
    for(int i=1; i<=n;i++){
        cout << i << ": ";
        for(auto p : adj[i]){
            cout<<"("<<p.first<<","<<p.second<<") ";
        }
        cout<<"\n";
    }

    return 0;
}
