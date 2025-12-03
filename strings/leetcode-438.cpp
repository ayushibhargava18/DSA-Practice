class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int left = 0;
        unordered_map<char, int> mapp;
        unordered_map<char, int> maps;

        for (auto m : p) {
            mapp[m]++;
        }

        vector<int> result;

        for (int right = 0; right < s.size(); right++) {
            maps[s[right]]++;

            if (right - left + 1 > p.size()) {
                maps[s[left]]--;
                if (maps[s[left]] == 0) maps.erase(s[left]);
                left++;
            }

            if (right - left + 1 == p.size() && mapp == maps) {
                result.push_back(left);
            }
        }
        return result;
    }
};
