class Solution {
public:
    void solve(int i, int n, int open, int close,
               string &cur, vector<string> &res) {

        if (i == 2 * n) {
            res.push_back(cur);
            return;
        }

        // Take '('
        if (open < n) {
            cur += '(';
            solve(i + 1, n, open + 1, close, cur, res);
            cur.pop_back();
        }

        // Take ')'
        if (close < open) {
            cur += ')';
            solve(i + 1, n, open, close + 1, cur, res);
            cur.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string cur;
        solve(0, n, 0, 0, cur, res);
        return res;
    }
};