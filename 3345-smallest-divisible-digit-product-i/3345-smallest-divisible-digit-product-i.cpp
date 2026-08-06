class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int m = 1;
            int t1 = n;

            while(t1 > 0){
                int r = t1 % 10;
                m *= r;
                t1 /= 10;
            }

            if(m % t == 0) return n;
            else n++;
        }

    }
};