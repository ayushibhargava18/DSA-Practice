#include <iostream>
#include <cmath>
using namespace std;

class test{
    public:
    int count=0;
    void exp(int x){
        for(int i=1;i<=x;i++){
            if(x%i==0){
                count=count+1;
        }}
        if (count==2){
            cout<<"prime";
        }
        else{
            cout<<"no prime";
        }
    

}};

int main(){
    cout<<"Enter number";
    int n;
    cin>>n;
    
    test obj;
    obj.exp(n);
   
}
