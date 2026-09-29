class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int longest=1;
        if(nums.empty()) return 0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(auto it: s){
            //element-1 not exist it mean this is start point
            if(s.find(it-1)==s.end()){
                int count =1;
                int x=it;
                while(s.find(x+1)!=s.end()){
                    x=x+1;
                    count++;
                }
                longest=max(longest, count);
            }
        }
        return longest;
    }
};