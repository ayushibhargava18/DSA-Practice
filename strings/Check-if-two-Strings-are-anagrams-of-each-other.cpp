#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

bool anagram(string s, string g, int n){
    if (s.length()==g.length()){
        
        string snew=s;
        string gnew=g;
        
        sort(snew.begin(),snew.end());
        sort(gnew.begin(),gnew.end());
        
        
        for(int i=0; i<n;i++){
            if(snew[i]==gnew[i]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    string s="act";
    string g="cat";
    int n=s.length();
    cout<<anagram(s, g,n);
    
    

    return 0;
}
