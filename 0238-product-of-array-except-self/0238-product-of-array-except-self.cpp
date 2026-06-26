class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.size(),1);

        int p = 1;

        for(int i = 0;i < nums.size();i++){
            arr[i] *= p;
            p *= nums[i];
        }

        int s = 1;
        for(int i = nums.size() - 1;i >= 0;i--){
            arr[i] *= s;
            s *= nums[i];
        }

        
        return arr;
    }
};