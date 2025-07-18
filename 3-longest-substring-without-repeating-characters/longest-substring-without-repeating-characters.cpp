class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int longest = 0;
        vector<bool> chars(256,false);
        for(int i = 0; i < s.length();i++){
            while(chars[s[i]]){
                chars[s[start]] = false;
                start++;
            }
            chars[s[i]] = true;
            longest = max(longest, i - start + 1);
        }
        return longest;
    }
};