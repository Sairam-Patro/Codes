class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = nums[0];
        int l = nums[0];

        for(int i : nums){
            if(i < s) s = i;
            if(i > l) l = i;
        }

        if(s == 0 || l == 0) return max(s,l);

        int ans = min(s,l);

        while(ans > 0){
            if(s % ans == 0 && l % ans == 0) break;
            ans--;
        }

        return ans;
    }
};