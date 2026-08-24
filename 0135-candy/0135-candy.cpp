class Solution {
public:
    struct Child {
        int rating;
        int index;
    };

    int candy(vector<int>& ratings) {
        int n = ratings.size();

        vector<Child> v;

        for (int i = 0; i < n; i++) {
            v.push_back({ratings[i], i});
        }

        sort(v.begin(), v.end(), [](const Child& a, const Child& b) {
            return a.rating < b.rating;
        });

        vector<int> candies(n, 1);

        for (auto child : v) {
            int i = child.index;

            
            if (i > 0 && ratings[i] > ratings[i - 1]) {
                candies[i] = max(candies[i], candies[i - 1] + 1);
            }

            
            if (i < n - 1 && ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        int ans = 0;

        for (int x : candies) {
            ans += x;
        }

        return ans;
    }
};