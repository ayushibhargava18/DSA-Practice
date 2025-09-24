class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        unordered_map<char, int> freq;
        vector<string> vec;

        for(char c:words[0]){
            freq[c]++;
        }

        for(int i=1; i<words.size(); i++){
            unordered_map<char, int> temp;
            for(char c:words[i]){
                temp[c]++;
            }
            for(auto& j : freq){
                if(temp.find(j.first)==temp.end()){
                    j.second=0;
                } 
                else{
                    j.second=min(j.second, temp[j.first]);
                }
            }

        }
        for(auto it:freq){
            for(int i=0; i<it.second; i++){
                vec.push_back(string(1, it.first));
            }
        }
        return vec;
    }
    
};
