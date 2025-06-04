#include <iostream>
using namespace std;

int f1=0, f2=1;

int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    cout<<"Enter a number";
    int x;
    cin>>x;
    for(int i=0; i<=x;i++){
        cout<<fib(i);
    }

    return 0;
}
