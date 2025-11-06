class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> minheap;
        
        for(auto i:arr){
            minheap.push(i);
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        vector<int> result;
        while(!minheap.empty()){
            result.push_back(minheap.top());
            minheap.pop();
        }
        
        sort(result.rbegin(), result.rend());
        
        return result;
    }
};
