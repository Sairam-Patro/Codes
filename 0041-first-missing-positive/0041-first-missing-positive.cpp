class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n + 2, -1);


        for(int i = 0;i < nums.size();i++){
            if(nums[i] >= 0 && nums[i] <= n + 1){
                arr[nums[i]] = nums[i];
            }
        }

        for(int i = 1;i < n + 2;i++){
            if(i != arr[i]){
                return i;
            }
        }

        return n + 2;
    }
};
