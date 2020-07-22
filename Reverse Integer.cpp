class Solution {
public:
    int reverse(int x) {
        long n = 0;
        long y = x;
        int s = 1;
        if(y<0){
            y = -y;
            s = -1;
        }
        int rem;
        while(y>0){
            rem = y%10;
            n = n*10 + rem;
            if(n>INT32_MAX){
                return 0;
            }
            y /= 10;
        }
        return n*s;
    }
};
