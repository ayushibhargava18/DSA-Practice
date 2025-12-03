class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxleng=0;
        unordered_map<char,int> map;
        
        for(int right=0; right<s.size(); right++){
            
            map[s[right]]++;

            while(map[s[right]]>1){
                map[s[left]]--;
                left++;
            }

            maxleng=max(maxleng, right-left+1);
            

            }
            return maxleng;
          }
    
};
