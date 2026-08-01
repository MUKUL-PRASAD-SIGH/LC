class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        int i;
       

        helper(0,candidates,res,target,ans);
        return ans;
    }
    void helper(int i,vector<int>& candidates,vector<int>& res, int target,vector<vector<int>>& ans)
    {
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(res);
            }
            return;
        }
        if(target>0){
        res.push_back(candidates[i]);
        helper(i,candidates,res,target-candidates[i],ans);
        //sum+=candidates[i];
        res.pop_back();
        
        //sum-=candidates[i];
        
        }
helper(i+1,candidates,res,target,ans);
    }
};