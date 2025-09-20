class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> sortedarr=arr;
        sort(sortedarr.begin(), sortedarr.end());

        int chunks=0;
        unordered_map<int, int> count;

        for(int i=0; i<arr.size();i++){
            count[arr[i]]++;
            if(count[arr[i]]==0){
                count.erase(arr[i]);
            }

            count[sortedarr[i]]--;
            if(count[sortedarr[i]]==0){
                count.erase(sortedarr[i]);
            }

            if(count.empty()){
                chunks++;
            }

        }
        return chunks;


        
    }
};
