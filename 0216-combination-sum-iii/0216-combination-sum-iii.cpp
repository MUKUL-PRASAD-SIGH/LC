class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        if(k<1 || k>9) return ans;
        vector<int>res;
        int i;
        vector <int> candidates={1,2,3,4,5,6,7,8,9};
        sort(candidates.begin(), candidates.end());
        helper(0,k,n,ans,res,candidates);
        return ans;


    }
    void helper(int i, int k, int target,
            vector<vector<int>>& ans,
            vector<int>& res,
            vector<int>& candidates)
    {
       if(target == 0 && k==0){
        
        ans.push_back(res);
        return;
    }
    if(i == candidates.size() || target < 0 || k < 0)
    return;

   // for(int j = i; j < candidates.size(); j++) {

       // if(j > i && candidates[j] == candidates[j-1])
          //  continue;

        //if(candidates[j] > target)
           // break;

        res.push_back(candidates[i]);
        helper(i + 1,k-1, target - candidates[i], ans,res,candidates);
        res.pop_back();
        helper(i+1,k,target,ans,res,candidates);
    //}
    }
};