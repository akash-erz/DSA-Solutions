class Solution {
public:
    void solve(set<vector<int>>&s, vector<int>nums, vector<int>temp){
        if(nums.size()==0){
            s.insert(temp);
            return;
        }
        int ele=nums[0];
        nums.erase(nums.begin());
        solve(s, nums, temp);
        temp.push_back(ele);
        solve(s, nums, temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> st;
        vector<int>temp;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        solve(st, nums, temp);
        for(vector val : st){
            ans.push_back(val);
        }
        return ans;
    }
};