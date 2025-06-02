
#include <iostream>
using namespace std;

class test{
    public:
        int count=0;
        int sum=0;
        int maxcount=0;
        int exp(int arr[], int n, int k){
            for(int i=0;i<n;i++)
            {   int sum=0;
                int count=0;
                for(int j=i;j<n;j++){
                    sum=sum+arr[j];
                    count++;
                    if(sum==k){
                        if(count>maxcount){
                            maxcount=count;
                        }
                        
                    }
                    
                }
            }
        return maxcount;
}
};


int main()
{
    int arr[]={9,1,2, 3, 5};
    int k=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    test obj;
    cout<<obj.exp(arr, n,k);
    
    
    return 0;
    
}
