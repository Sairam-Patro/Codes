class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) {
            return 0;
        }else if(s[0] == ' ') {
            return 1;
        }else if(s.size() == 1) {
            return 1;
        }
        unordered_map<char, int> mp;
        string ans = "";
        string finalans = "";
        for(int i = 0; i < s.size(); i++) {
            if(mp.count(s[i])) {
                if(ans.size() >= finalans.size()) {
                    finalans = ans;
                }
                i = mp[s[i]];
                ans = "";
                
                mp.clear();
            }else {
                ans += s[i];
                mp[s[i]] = i;
            }
        }
       return max(finalans.size(), ans.size());
    }
};