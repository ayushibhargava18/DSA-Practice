
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class test{
    public:
        void duplicate(string& s){
            
            unordered_map<char, int> freq;
            
            for (char c : s){
                freq[c]++;
            }
            
            for(char c : s){
                if(freq[c]==1){
                    cout<<c<<", "<<freq[c]<<"\n";
                    break;
                }
            }
        }
    
};

int main()
{
    string s="geeksforgeeks";
    test obj;
    
    obj.duplicate(s);

    return 0;
}
