class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        int i;
       sort(candidates.begin(), candidates.end());

        helper(0,candidates,res,target,ans);
        return ans;
    }
    
    void helper(int i, vector<int>& candidates, vector<int>& res,
            int target, vector<vector<int>>& ans) {

    if(target == 0){
        ans.push_back(res);
        return;
    }

    for(int j = i; j < candidates.size(); j++) {

        if(j > i && candidates[j] == candidates[j-1])
            continue;

        if(candidates[j] > target)
            break;

        res.push_back(candidates[j]);
        helper(j + 1, candidates, res, target - candidates[j], ans);
        res.pop_back();
    }
}
};