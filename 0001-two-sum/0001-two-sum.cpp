class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;

        for(int i = 0;i < nums.size();i++){
            int r = target - nums[i];

            if(um.find(r) != NULL) return {um[r],i};

            um[nums[i]] = i;
        }

        return {};
    }
};