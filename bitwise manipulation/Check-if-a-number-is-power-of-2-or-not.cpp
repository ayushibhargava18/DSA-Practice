

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool power(int n){
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
    int n=4;
    cout<<power(n);
    return 0;
}
