class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string s1 = "";
        reverse(s.begin(),s.end());

        for(int i = 0;i < n;i++){
            string word="";
            while(i<n && s[i]!=' '){
                word+=s[i];
                i++;
            }

            reverse(word.begin(),word.end());
            if (word.size()>0){
                s1 += word + " ";
            }
            
        }

        s1.pop_back();
        return s1;
    }
};
