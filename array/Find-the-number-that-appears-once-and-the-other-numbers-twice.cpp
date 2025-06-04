
#include <iostream>
using namespace std;

class test{
    public: 
        int test1(int arr[], int n){
            int count;
            for(int i=0; i<n;i++){
                for(int j=0;j<n;j++){
                    if(arr[i]==arr[j]){
                        count++;
                        if(count==1){
                            return arr[i];
                        }
                    }
                    else{
                        count=0;
                    }
                }
            }
        }
};
int main()
{
    int arr[]={4,1,2,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    test obj;
    cout<<obj.test1(arr,n);
    
    

    return 0;
}
