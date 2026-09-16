class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int sum = 0;
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            sum += prices[i] - prices[i - 1];

            maxProfit = max(maxProfit, sum);

            if (sum < 0)
                sum = 0;
        }

        return maxProfit;
    }
};