class Solution {
public:
    bool isPalindrome(int x) {
        string s= to_string(x);
        string res="";
        for(int i=s.size()-1; i>=0; i--)
        {
            res +=s[i];
        }
        return s==res ? true : false;
    }
};
