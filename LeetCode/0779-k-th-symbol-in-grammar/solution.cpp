class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1&&k==1) return 0;
        int mid=pow(2, n-2);
        int ans=0;
        if(k<=mid) ans= kthGrammar(n-1, k);
        else{
            ans=kthGrammar(n, k-mid);
            if(ans){
                ans=0;
            }else{
                ans=1;
            }
        }
        return ans;
    }
};