class Solution {
public:

    int gcd(int a,int b){
        if(a == 0 || b == 0) return max(a,b);

        int r = min(a,b);

        while(r > 0){
            if(a % r == 0 && b % r == 0) break;

            r--;
        }

        return r;
    }

    int gcdOfOddEvenSums(int n) {
        int o = 0,e = 0;

        for(int i = 0;i < 2 * n;i = i + 2){
            o += i;
            e += (i + 1);
        }

        return gcd(o,e);
    }
};