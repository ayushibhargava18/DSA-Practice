
#include <iostream>
#include<string>
using namespace std;

bool rotate(string s, string g, int n){
    if (s.length()==g.length()){
        for(int i=0; i<n;i++){
            if(s==g){
                return true;
            }
            else{
                s=s.substr(1)+s[0];
            }
        }
        return false;
    }
    else{
        return false;
    }
    
    
}

int main()
{
    string s="abcde";
    string g="cdeab";
    int n=s.length();
    cout<<rotate(s, g,n);
    
    

    return 0;
}
