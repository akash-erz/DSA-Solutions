class Solution {
public:
    double myPow(double x, int n) {
        //recursive way
        /*
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
        */
        //iterative way  
        long double base = x;
        long double ans = 1.0L;
        if(n<0){
            base=1/base;
            n=-(n+1);
            ans=ans*base;
        } 
        while(n>0){
            if(n%2==1){
                ans=ans*base;
                n=n-1;
            }
            else{
                n=n/2;
                base=base*base;
            }
        }
        
        return ans;
    }
};