class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;

        for (int i = 1; i <= n; i++) {
            int num = i;
            int flag = 0; // 0 = same, 1 = invalid, 2 = good

            while (num > 0) {
                int d = num % 10;

                if (d == 3 || d == 4 || d == 7) {
                    flag = 1;  // invalid
                    break;
                }

                if (d == 2 || d == 5 || d == 6 || d == 9) {
                    flag = 2;  // good (changes)
                }

                num /= 10;
            }

            if (flag == 2) count++; // count only once per number
        }

        return count;
    }
};