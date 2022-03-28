class Solution {
public:
    int divide(int dividend, int divisor) {
         if (dividend == INT_MIN) {
            if (divisor == 1) {
                return INT_MIN;
            }else if(divisor == -1) {
                return INT_MAX;
            }
        }
		
        bool isNegative = (dividend ^ divisor) < 0 ? true : false;
        dividend = dividend > 0 ? -dividend : dividend;
        divisor = divisor > 0 ? - divisor : divisor;
        int quotient = 0;
		 
        while(divisor >= dividend) {
            int count = 0;
            int value = divisor;
        
            while(value >= INT_MIN / 2 && value * 2 >= dividend) {
                count++;
                value = 2 * value;
            }
            quotient += 1 << count;
            dividend -= value;
        }
        return isNegative ? -quotient : quotient;
    }
    

};