class Solution {
public:
    int reverseBits(int n) {
        vector<int> arr;

        while(n > 0){
            arr.push_back(n % 2);
            n = n / 2;
        }

        while (arr.size() < 32) {
            arr.push_back(0);
        }


        unsigned int s = 0;
        int l = 0;
        for(int i = arr.size() - 1;i >= 0;i--){
            if(arr[i] == 1){
                s += pow(2,l);
            }

            l++;
        }

        return s;
    }
};