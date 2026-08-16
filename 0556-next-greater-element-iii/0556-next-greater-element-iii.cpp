class Solution {
public:
    int nextGreaterElement(int n) {
       
        string s = to_string(n);

        for (int i = s.size() - 1; i > 0; i--) {

            if (s[i] > s[i-1]) {

                for (int j = s.size() - 1; j >= i; j--) {

                    if (s[j] > s[i-1]) {
                        swap(s[i-1], s[j]);
                        reverse(s.begin() + i, s.end());

                        long long ans = stoll(s);

                        if (ans > INT_MAX)
                            return -1;

                        return ans;
                    }
                }
            }
        }

        return -1;
    }
};