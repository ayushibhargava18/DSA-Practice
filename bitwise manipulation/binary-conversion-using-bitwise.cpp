

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void convert(int n){
    vector<int> binary;
    while (n>0){
        int bit=n&1;
        binary.push_back(bit);
        
        n=n>>1;
    }
    reverse(binary.begin(), binary.end());
    
    for (int bit : binary) {
        cout << bit;
    }
}


int main()
{
    int n=5;
    convert(n);
    return 0;
}
