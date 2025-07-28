class Solution {
public:
    double myPow(double x, int n) {
        bool type = n >= 0 ? true : false;
        long long w = n>=0  ? n : (long long)n * -1;
        double num = 1;
        double pow = x;
        while(w > 0){
            if(w&2 != 0) {
                num*=pow;
                w-=1;
            }
            w/=2;
            pow*=pow;
        }
        if(type) return num;
        else return (1/num);
    }
};