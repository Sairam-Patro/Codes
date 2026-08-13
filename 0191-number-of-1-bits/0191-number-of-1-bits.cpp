class Solution {
public:
    int hammingWeight(int n) {
        string t = "";

        while(n > 0){
            t = char((n % 2) + '0') + t;
            n = n / 2;
        }

        int c = 0;
        
        for(int i = 0;i < t.length();i++){
            if(t[i] == '1'){
                c++;
            }
        }

        return c;
    }
};