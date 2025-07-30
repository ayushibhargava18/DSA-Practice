
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int u, v;
    int adj[n+1][n+1]={0};
    for(int i=0; i<m;i++){
        
        cin>>u>>v;
        
        adj[u][v]=1;
        adj[v][u]=1;
    }
    for(int k=1; k<=n;k++){
        for(int i=1;i<=n;i++){
            cout<<adj[k][i];
        }
    cout<<"\n";
        
    }
    

    return 0;
}
