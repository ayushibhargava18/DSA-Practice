#include <iostream>
using namespace std;

class test{
    public:
    int sum=0;
    int count=0;
        int exp(int x){
            
            if(count>x){
                return sum;
            }
            
            sum=sum+count;
            count=count+1;
            
            return exp(x);
        }
};

int main(){
    cout<<"Enter a number";
    int x;
    cin>>x;
    test obj;
    cout<<obj.exp(x);
}
