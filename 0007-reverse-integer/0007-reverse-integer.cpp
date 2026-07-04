class Solution {
public:
    int reverse(int x) {
        long s = 0;
        while(x != 0){
            int r = x % 10;
            s = s * 10 + r;
            x = x / 10;

            if(s > INT_MAX || s < INT_MIN){
                return 0;
            }
        }
        return (int)s;
    }
};