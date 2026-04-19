class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int low = i, high = nums2.size() - 1;
            int best = i;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (nums2[mid] >= nums1[i]) {
                    best = mid;      
                    low = mid + 1;
                } else {
                    high = mid - 1;  
                }
            }

            ans = max(ans, best - i);
        }

        return ans;
    }
};