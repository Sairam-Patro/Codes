class Solution {
public:
    int maxArea(vector<int>& arr) {
        int r = arr.size() - 1;
        int l = 0;

        int max1 = 0;


        while(l <= r){
            int area = (r - l) * min(arr[l],arr[r]);
            max1 = max(max1,area);
            if(arr[l] < arr[r]){
                l++;
            } else {
                r--;
            }
        }

        return max1;
    }
};