class Solution {
public:
    bool isPerfectSquare(int num) {
        unordered_set<long long> st;

        for (long long i = 0; i * i <= num; i++) {
            st.insert(i * i);
        }

        return st.count(num);
    }
};