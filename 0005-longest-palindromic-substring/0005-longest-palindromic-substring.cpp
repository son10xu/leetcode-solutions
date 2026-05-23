class Solution {
public:
    string longestPalindrome(string s) {
        string result = "";
        int len = 0;
        int l, r;
        for(int i = 0; i < s.size(); i++)
        {
            l = i;
            r = i;
            while(l >= 0 && r < s.size() && s[l] == s[r])
            {
               if (r - l + 1 > len)
                {
                    result = s.substr(l, r - l + 1);
                    len = r - l + 1;
                }
                l--;
                r++;
            }
            l = i;
            r = i+1;
            while(l >= 0 && r < s.size() && s[r] == s[l])
            {
                if(r - l +1 > len)
                {
                    result = s.substr(l,r-l+1);
                    len = r - l +1;
                }
                l--;
                r++;
            }

        }
        return result;
    }
};