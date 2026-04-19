class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
      for(int i=0;i<arr.size()-1;i++)
      {
        int maxi=0;
        for(int j=i+1;j<arr.size();j++){
            maxi=max(arr[j],maxi);
            
        }
        arr[i]=maxi;
        
      }  
      arr[arr.size()-1]=-1;
      return arr;
    }
};