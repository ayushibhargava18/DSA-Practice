#include <iostream>
using namespace std;

class pattern{
    public:
    
    void patternn(int x){
        for(int i=1; i<=x;i++){
            for (int j=1;j<=i;j++){
                cout<<j;
            }
        cout<<"\n";    
        }
        }
    };


int main(){
    pattern obj;
    obj.patternn(5);
    
}

output 

1
12
123
1234
12345
