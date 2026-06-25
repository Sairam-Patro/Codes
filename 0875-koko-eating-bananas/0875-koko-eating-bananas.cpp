class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int maxm = *max_element(piles.begin(),piles.end());

        while(low < maxm){
            int m = low + (maxm - low) / 2;

            int hours = 0;

            for(int p : piles) hours += (p + m - 1) / m;

            if(hours <= h) maxm = m;
            else low = m + 1;
        }


        return low;
    }
};