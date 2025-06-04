#include <iostream>
using namespace std;

class pattern{
    public:
    
    void patternn(int x){
        for(int i=0; i<x;i++){
            for (int j=i;j<x;j++){
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
