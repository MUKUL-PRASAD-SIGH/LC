class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int sum5 = 0;
        int sum10 = 0;

        for (int i = 0; i < bills.size(); i++) {

            if (bills[i] == 5) {
                sum5++;
            }

            else if (bills[i] == 10) {
                if (sum5 == 0) {
                    return false;
                }

                sum5--;
                sum10++;
            }

            else { 

                if (sum10 > 0 && sum5 > 0) {
                    sum10--;
                    sum5--;
                }

                else if (sum5 >= 3) {
                    sum5 -= 3;
                }

                else {
                    return false;
                }
            }
        }

        return true;
    }
};