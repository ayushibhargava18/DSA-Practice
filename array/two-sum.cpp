#include <iostream>
using namespace std;

class test{
    public:
    
    void twosum(int arr[], int n, int t){
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum=arr[i]+arr[j];
                if(sum==t && i!=j){
                    cout<<i;
                    cout<<j;
                    return;
                }
                else{
                    sum=0;
                }
            }
        }
    }
};


int main(){
    int arr[]={2,6,5,8,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int t=16;
    test obj;
    obj.twosum(arr,n,t);
    
    return 0;
}
