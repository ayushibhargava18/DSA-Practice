class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        if(arr.size()<=0) return 0;
        if(arr[0]==0) return -1;
        
        int jumps=0;
        int currentend=0;
        int farthest=0;
        
        for(int i=0; i<arr.size()-1;i++){
            farthest=max(farthest, arr[i]+i);
            
            if(currentend==i){
                jumps++;
                currentend=farthest;
                if(currentend>=arr.size()-1){
                    break;
                }
                
            }
        }
        return (currentend<arr.size()-1)?-1:jumps;
            
        }
    
};
