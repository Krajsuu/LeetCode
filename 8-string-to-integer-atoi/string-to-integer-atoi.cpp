#include <climits>
class Solution {
public:
    int myAtoi(string s) {
        long long value = 0;
        int pivot = 0;

        if(!(s[pivot] == '-' or s[pivot] == '+' or int(s[pivot] - '0') < 10)) return 0;

        while(s[pivot] == ' ') pivot++;

        char checkSignedness = s[pivot];
        int signedness = checkSignedness == '-' ? -1 : 1;
        pivot = checkSignedness == '-' || checkSignedness == '+' ? pivot+=1 : pivot;

        while(s[pivot] == '0') pivot++;

        string theNumber = "";
        while(pivot < s.size()){
            if(int(s[pivot] - '0') < 10 and int(s[pivot] - '0') >= 0) theNumber+=s[pivot];
            else break;
            pivot++;
        }


        for(int i = 0; i < theNumber.size() ; i++){
            if(int(theNumber[i] - '0') >= 10 or int(theNumber[i] - '0') < 0) return 0;
            value = value * 10 + int(theNumber[i] - '0');
            if(signedness == 1 && value > INT_MAX) return INT_MAX;
            if(signedness == -1 && -value < INT_MIN ) return INT_MIN;
            
        }
        return value * signedness;
        
    }
};