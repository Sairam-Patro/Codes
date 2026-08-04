class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set s(nums.begin(),nums.end());

        int min = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());

        vector<int> ans;

        for(int i = min;i <= max;i++){
            if(!s.count(i)) ans.push_back(i);
        }

        return ans;

    }
};