
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
            
            for(auto yay : freq){
                if(yay.second>1){
                    cout<<yay.first<<", "<<yay.second<<"\n";
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
