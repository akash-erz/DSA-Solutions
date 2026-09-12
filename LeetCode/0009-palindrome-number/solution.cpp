class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int l=0;
        long long rev=0;
        int n=x;
        while(n){
            l=n%10;
            rev=rev*10+l;
            n/=10;
        }
        if(x==rev) return true;
        else return false;
    }
};