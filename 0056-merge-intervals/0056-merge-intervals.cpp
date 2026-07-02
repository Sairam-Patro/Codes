class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;

        for(int i = 0;i < intervals.size();i++){
            int s = intervals[i][0];
            int e = intervals[i][1];

            if(ans.empty() || ans.back()[1] < s){
                ans.push_back({s,e});
            }else{
                ans.back()[1] = max(ans.back()[1],e);
            }
        }

        return ans;
    }
};