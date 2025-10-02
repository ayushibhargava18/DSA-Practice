

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(int n, int i){
    vector<int> binary;
    
    while(n>0){
        int bit=n&1;
        binary.push_back(bit);
        
        n=n>>1;
    }
    
   
    
    if(binary[i]!=1){
        return false;
    }
    return true;
}


int main()
{
    int n=5;
    int i=1;
    cout<<check(n, i);
    return 0;
}
