class Solution {
public:
    double myPow(double x, int n) 
    {
       double result = 1;
    int absExponent = abs(n);  // Handle the absolute value of the exponent
    
    // Multiply base for the absolute value of the exponent
    for (int i = 0; i < absExponent; i++) {
        result *= x;
    }
    
    // If exponent is negative, return the reciprocal
    if (n < 0) {
        return 1 / result;
    }

    return result;

        
       
        
    }
};
