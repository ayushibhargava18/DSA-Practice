#include <iostream>
using namespace std;

class patterns{
    public:
    void pattern(int x){
        for(int i=1; i<=x;i++){
            if(i==1||i==x){
                for(int k=1;k<=x;k++){
                    cout<<"*";
                }
            }
            else{
                for(int j=1; j<=x;j++){
                if(j==1 || j==x){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            
                
            }
            }
            
            
        cout<<"\n";
        }
    }
    
};

int main(){
    patterns obj;
    obj.pattern(5);
}

*****
*   *
*   *
*   *
*****
