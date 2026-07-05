#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string trim(const string& str) {
    size_t first = str.find_first_not_of(" \t\n");
    if (first == string::npos)
        return "";
    size_t last = str.find_last_not_of(" \t\n");
    return str.substr(first, (last - first + 1));
}


class Solution {
public:
    int myAtoi(string s) {
        long long c = 0;
        s = trim(s);

        if(s[0] == '-' || s[0] == '+'){
            for(int i = 1;i < s.length();i++){
                if(s[i] >= '0' && s[i] <= '9'){
                    c = c * 10 + (s[i] - '0');
                    if (s[0] == '-' && -c < INT_MIN) return INT_MIN;
                    if (s[0] == '+' && c > INT_MAX) return INT_MAX;
                }else{
                    break;
                }
            }
        }else{
            for(int i = 0;i < s.length();i++){
                if(s[i] >= '0' && s[i] <= '9'){
                    c = c * 10 + (s[i] - '0');
                     if(c > INT_MAX) return INT_MAX;
                }else{
                    break;
                }
            }
        }

        if(s[0] == '-'){
            return -1 * c;
        }else{
            return c;
        }
    }
};