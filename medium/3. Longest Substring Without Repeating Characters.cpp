class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a[256] = {0};
        int left = 0;
        int maxLen = 0;

        for(int right = 0; right < s.size(); right++)
        {
            a[s[right]]++;

            while(a[s[right]] > 1)
            {
                a[s[left]]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};