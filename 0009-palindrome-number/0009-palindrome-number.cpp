class Solution {
public:
    bool isPalindrome(int x) {
        long s = 0;
        int t = x;

        while(t > 0){
            int r = t % 10;
            s = s * 10 + r;
            t = t / 10;
        }

        return s == x;
    }
};