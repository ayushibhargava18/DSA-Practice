
#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &arr) {
    
    unordered_map<int, int> map;
    int n=arr.size();
    vector<int> result;
    
    for(int i=0; i<n;i++){
        map[arr[i]]++;
    }
    
    for(auto s:map){
        if(s.second>1){
            result.push_back(s.first);
        }
    }
    return result;
    
}

int main() {
    vector<int> arr = {1, 6, 5, 2, 3, 3, 2};

    vector<int> duplicates = findDuplicates(arr);

    for (int element : duplicates) {
        cout << element << " ";
    }

    return 0;
}
