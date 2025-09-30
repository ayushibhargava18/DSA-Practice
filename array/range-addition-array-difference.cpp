

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>> &updates) {
        vector<int> result(length, 0);
        
        for(auto &u : updates){
            int start=u[0];
            int end= u[1];
            int inc = u[2];
            result[start]=+inc;
            if(end+1<length){
                result[end+1]-=inc;
            }
        }
        
        for(int i=1; i<length; i++){
            result[i]+=result[i-1];
        }
        
        return result;

        
    }
};

int main()
{
    int length=5;
    vector<vector<int>> updates={{1,3,2},{2,4,3},{0,2,-2}};
    Solution sol;
     vector<int> ans = sol.getModifiedArray(length, updates);

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
