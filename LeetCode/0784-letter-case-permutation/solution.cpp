class Solution {
public:
    void solve(vector<string>&temp, string s, string op){
        if(s.length()==0){
            temp.push_back(op);
            return;
        }
        char ch=s[0];
        s.erase(s.begin());
        if(isdigit(ch)){
            solve(temp, s, op + ch);
            return;
        }
        char op1=tolower(ch);
        char op2=toupper(ch);
        solve(temp, s, op+op1);
        solve(temp, s, op+op2);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> temp;
        solve(temp, s, "");
        return temp;
    }
};