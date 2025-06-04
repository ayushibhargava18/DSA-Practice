#include <iostream>
using namespace std;

class pattern{
    public:
    
    void patternn(int x){
        for(int i=0; i<x;i++){
            for (int j=i+1;j<=x;j++){
                cout<<" ";
            }
            for(int k=1; k<=i*2+1; k++){
                    cout<<"*";
                }
            
        cout<<"\n";    
        }
        }
    };


int main(){
    pattern obj;
    obj.patternn(5);
    
}
