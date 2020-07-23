class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        int sign = dividend>0 ^ divisor>0 ? -1:1;
        long dv = abs(dividend);
        long ds = abs(divisor);
        long res = 0;
        while(dv>=ds){
            long temp = ds, m = 1;
            while(temp<<1 <= dv){
                temp <<= 1;
                m <<= 1;
            }
            dv -= temp;
            res += m;
        }
        return sign*res;
    }
};
