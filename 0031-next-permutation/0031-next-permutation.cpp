class Solution { 
public: 
    void nextPermutation(vector<int>& nums) { 
        
        for (int i = nums.size() - 1; i > 0; i--) { 

            if (nums[i] > nums[i-1]) { 

                for (int j = nums.size() - 1; j >= i; j--) { 

                    if (nums[j] > nums[i-1]) { 

                        swap(nums[i-1], nums[j]); 
                        reverse(nums.begin() + i, nums.end());

                        return;
                    } 
                } 
            } 
        } 

        // If no pivot exists, array is in descending order
        reverse(nums.begin(), nums.end());
    } 
};