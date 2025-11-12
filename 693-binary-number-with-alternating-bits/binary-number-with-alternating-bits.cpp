class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last = n%2;
        n /= 2;
        while(n > 0){
            if(n%2 != last){
                last = n%2;
                n/=2;
            }
            else return false;
        }
        return true;
    }
};