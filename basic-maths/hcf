#include <iostream>
using namespace std;

class test{
    public:
    
    int exp(int x,int y){
        int hcf=1;
        for(int i=1;i<=min(x,y);i++){
            if(x%i==0 && y%i==0){
                hcf=i;
            }
        }
        
        return hcf;
    }

};

int main(){
    cout<<"Enter 1st number";
    int n;
    cin>>n;
    
    cout<<"Enter 2nd number";
    int m;
    cin>>m;
    
    test obj;
    cout<<obj.exp(n,m);
}
