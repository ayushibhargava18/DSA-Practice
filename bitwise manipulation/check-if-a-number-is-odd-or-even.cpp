

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void odd(int n){
    if((n&1)==1){
        cout<<"odd";
    }
    else{
        cout<<"even";
    }
}


int main()
{
    int n=3;
    odd(n);
    return 0;
}
