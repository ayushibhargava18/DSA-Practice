#include <iostream>
#include <cmath>
using namespace std;

class test{
    public:
    
    void exp(int x){
        for(int i=1;i<=x;i++){
            if(x%i==0){
                cout<< i<<"\n";
            }
        }
    }

};

int main(){
    cout<<"Enter number";
    int n;
    cin>>n;
    
    test obj;
    obj.exp(n);
   
}
