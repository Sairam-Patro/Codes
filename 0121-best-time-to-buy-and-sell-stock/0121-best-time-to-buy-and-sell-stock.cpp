class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = INT_MAX;
        int p = 0;

        for(int i : prices){
            if(i < m){
                m = i;
            }else{
                p = max(p,i - m);
            }
        }

        return p;
    }
};