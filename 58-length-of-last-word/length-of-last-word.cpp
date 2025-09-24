class Solution {
public:
    char change_to_small(char c){
        if(int(c) >= 65 && int(c) <= 90){
            return char(int(c)+32);
        }
        return c;
    }

    int lengthOfLastWord(string s) {
        string last_word = "";
        int index = s.length() - 1;
        char ch = change_to_small(s[index]);
        while((int(ch) - 97 > 25 || int(ch) - 97 < 0) && index >= 0){
            index--;
            ch = change_to_small(s[index > 0 ? index : 0]);
            
        }
        while(int(ch) - 97 < 26 && int(ch) - 97 >= 0 && index >= 0){
            last_word = ch + last_word;
            index--;
            ch = change_to_small(s[index > 0 ? index : 0]);
            
        }
        cout<<last_word;
        return last_word.length();
    }
};