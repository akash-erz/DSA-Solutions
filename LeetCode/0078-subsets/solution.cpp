class Solution {
public:
    void solve(vector<int> nums, vector<vector<int>> &v, vector<int>temp){
        if(nums.size()==0){
            v.push_back(temp);
            return;
        }
        int ele=nums[0];
        nums.erase(nums.begin());
        solve(nums, v, temp);
        temp.push_back(ele);
        solve(nums, v, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        solve(nums, ans, temp);

        return ans;
    }
};