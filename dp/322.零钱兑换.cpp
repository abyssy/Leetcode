/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] 零钱兑换
 */

// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[10005];
        for (int i = 0; i <= amount; i ++)
            dp[i] = 10010;
        dp[0] = 0;
        for (int i = 0; i <= amount; i ++)
        {
            for (int coin : coins)
            {
                if (i - coin < 0)
                    continue;
                dp[i] = min(dp[i], 1 + dp[i - coin]);
            }
        }
        return (dp[amount] == 10010) ? -1 : dp[amount];
    }
};
// @lc code=end
/* Accepted
 * 188/188 cases passed (24 ms)
 * Your runtime beats 99.82 % of cpp submissions
 * Your memory usage beats 99.43 % of cpp submissions (9.6 MB)
*/
