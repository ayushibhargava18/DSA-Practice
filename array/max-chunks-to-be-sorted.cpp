class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int max_so_far;
        int chunks=0;
        for(int i=0; i<arr.size(); i++){
            max_so_far=max(max_so_far,arr[i]);
            if(i==max_so_far){
                chunks++;
            }
        }
        return chunks;
    }
};
