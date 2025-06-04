#include <iostream>
using namespace std;

class test{
    public:
    
    int exp(int x){
        int rev=0;
        while (x>0){
            int c=x%10;
            rev=rev*10+c;
            x=x/10;
        }
        return rev;
        
        }
};

int main(){
    cout<<"Enter a number";
    int n;
    cin>>n;
    
    test obj;
    int pal;
    pal=obj.exp(n);
    if (pal==n){
            cout<<"number is palindrome";
        }
        else{
            cout<<"not a palindrome";
        }
}
