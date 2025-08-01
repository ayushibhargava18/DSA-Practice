
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    
    vector<int> adj[n+1];
    
    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    
    for(int i=1; i<=n;i++){
        cout << i << ": ";
        for(int j : adj[i]){
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}
