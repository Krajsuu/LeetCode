class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows < 2) return s;
        vector<string> sections(numRows);
        int heigh = numRows-1;
        bool mode = true;
        for(int i = 0; i < s.length(); i++){
            sections[heigh] += s[i];
            if(mode){
                heigh--;
            } else {
                heigh++;
            }
            if(heigh < 0) {
                mode = false;
                heigh = 1;
            } else if(heigh == numRows) {
                mode = true;
                heigh -= 2;
            }
        }
        string result;
        for (const string &section : sections) {
            result = section + result;
        }
        return result;
    }
};