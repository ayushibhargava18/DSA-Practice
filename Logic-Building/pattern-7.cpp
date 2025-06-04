#include <iostream>
using namespace std;

class patterns{
    public:
    void pattern(int x){
        for(int i=x; i>=1;i--){
                for(char k='A'; k<'A'+i;k++){
                    cout<<k;
                }
            
        cout<<"\n";
        }
    }
    
};

int main(){
    patterns obj;
    obj.pattern(5);
}
