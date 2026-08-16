class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {

            int pos = 0;

            // find nums1[i] in nums2
            while (nums2[pos] != nums1[i]) {
                pos++;
            }

            int greater = -1;

            // search to the right
            for (int j = pos + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums1[i]) {
                    greater = nums2[j];
                    break;
                }
            }

            ans.push_back(greater);
        }

        return ans;
    }
};