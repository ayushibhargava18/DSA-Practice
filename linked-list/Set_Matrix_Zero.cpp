
#include <iostream>
using namespace std;

void matrix(int arr[][3], int n, int m){
    int row[n];
    int col[m];
    
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(col[j]==1 || row[i]==1){
                arr[i][j]=0;
            }
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            
                cout<<arr[i][j];
            
        }
        cout<<"\n";
    }
    
    
    
    
}

int main()
{
    int arr[][3]={{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr[0])/sizeof(arr[0][0]);

    
    matrix(arr, n, m);
    return 0;
}
