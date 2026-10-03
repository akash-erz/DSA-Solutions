class Solution {
public:
    double myPow(double x, int n) {
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