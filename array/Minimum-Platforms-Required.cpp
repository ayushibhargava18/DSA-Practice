

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minPlatform(vector<int> &arr, vector<int>& dep){
    int max_platform=0;
    int platform_needed=0;
    
    sort(arr.begin(),arr.end());
    sort(dep.begin(), dep.end());
    
    int i=0; int j=0;
    
    while(i<dep.size()){
        if(arr[i]<=dep[j]){
            platform_needed++;
            i++;
        }
        else{
            platform_needed--;
            j++;
        }
        max_platform=max(max_platform, platform_needed);
    }
    return max_platform;
    };

int main()
{
    vector<int> arr = {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep = {910, 1200, 1120, 1130, 1900, 2000};
    cout << minPlatform(arr, dep);
    return 0;

}
