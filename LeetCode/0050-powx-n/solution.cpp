class Solution {
public:
    long double myPow(double x, int n) {
        if(n==0) return 1.0;
        long double half= myPow(x, n/2);
        long double result = half*half;
        if(n%2==0) return result;
        else if(n>0){
            return x*result;
        }else{
            return result/x;
        }
    }
};