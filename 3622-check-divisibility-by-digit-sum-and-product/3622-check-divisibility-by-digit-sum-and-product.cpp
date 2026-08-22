class Solution {
public:
    bool checkDivisibility(int n) {
        int t = n;

        int s = 0;
        int m = 1;

        while(n > 0){
            int r = n % 10;
            s += r;
            m *= r;
            n /= 10;
        }

        return ((t % (s + m)) == 0);  
    }
};