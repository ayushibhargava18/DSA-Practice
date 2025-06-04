#include <iostream>
using namespace std;

class patterns{
    public:
    void pattern(int x){
        for(int i=1; i<=x;i++){
                for(int j=1; j<=i;j++){
                    char see=('A'+i-1);
                    cout<<see;
                }
            
        cout<<"\n";
        }
    }
    
};

int main(){
    patterns obj;
    obj.pattern(5);
}
