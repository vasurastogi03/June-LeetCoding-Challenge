class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& cost, int res = 0) { 
      nth_element(begin(cost), begin(cost) + cost.size() / 2, end(cost), [](vector<int> &a, vector<int> &b) {
        return (a[0] - a[1] < b[0] - b[1]);
      });
      for (auto i = 0; i < cost.size() / 2; ++i) {
        res += cost[i][0] + cost[i + cost.size() / 2][1];
      }
      return res;
    }
};
