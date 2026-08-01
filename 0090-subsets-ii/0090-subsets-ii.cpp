class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     vector<vector<int>> ans;
        vector<int> res;
        int i;
       sort(nums.begin(), nums.end());

        helper(0,nums,res,ans);
        return ans;
    }
    
    void helper(int i, vector<int>& nums, vector<int>& res,
         vector<vector<int>>& ans) {

    

    ans.push_back(res);
    for(int j = i; j < nums.size(); j++) {

        if(j > i && nums[j] == nums[j-1])
            continue;

        

        res.push_back(nums[j]);
        helper(j + 1, nums, res, ans);
        res.pop_back();
        
    }
    
}
};