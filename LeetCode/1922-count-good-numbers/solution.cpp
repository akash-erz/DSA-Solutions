class Solution {
public:
    long long mod = 1e9+7;
    long long solve(long long x, long long n){
        if(n==0) return 1;
        long long result= solve((x * x) % mod, n / 2);

        if (n % 2 == 1)
            result = (result * x) % mod;

        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenIndex=(n+1)/2;
        long long oddIndex = n/2;
       return (solve(4, oddIndex)%mod*solve(5, evenIndex)%mod)%mod;
    }
};