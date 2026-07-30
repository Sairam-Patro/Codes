class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;

        for(int i : nums) um[i]++;

        int n = nums.size() / 2;

        for(auto i : um) if(i.second > n) return i.first;

        return 0;
    }
};