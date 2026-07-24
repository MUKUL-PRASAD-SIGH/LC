class Solution {
public:
    void helper(int index,vector<int>& nums,vector<int>& curr,int n,vector<vector<int>>& ans)
    {
        if(index>=n)
        {
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        helper(index+1,nums,curr,n,ans);
        curr.pop_back();
        helper(index+1,nums,curr,n,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int index;
        
        vector<int> curr;
        int n=nums.size();
        vector<vector<int>> ans;

        helper(0,nums,curr,n,ans);
        return ans;
    }
};