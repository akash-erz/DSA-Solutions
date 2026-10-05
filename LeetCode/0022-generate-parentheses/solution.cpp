class Solution {
public:
    void solve(int open, int close, string op, vector<string> &temp){
        if(open==0 && close==0){
            temp.push_back(op);
            return;
        }
        if(open!=0){
            string op1=op;
            solve(open-1, close, op1+"(", temp);
        }
        if(close>open){
            string op2=op;
            solve(open, close-1, op2+")", temp);
        }
    }
    vector<string> generateParenthesis(int n) {
        int o=n;
        int c=n;
        vector<string>temp;
        solve(o,c, "",temp);
        return temp;
    }
};