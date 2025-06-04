#include <iostream>
using namespace std;

class test{
    public:
    
    int exp(int x){
        int rev=0;
        while(x>0){
            int c=x%10;
            rev=rev*10+c;
            x=x/10;
        }
        return rev;
    }
};

int main(){
    cout<<"Enter a number";
    int x;
    cin>>x;
    
    test obj;
    cout<<obj.exp(x);
}
