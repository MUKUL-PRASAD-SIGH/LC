class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        int count = 0;

        while (count < s.size()) {
            if (s == goal) return true;

            // ✅ correct rotation
            char first = s[0];
            s = s.substr(1) + first;

            count++;
        }

        return false;
    }
};