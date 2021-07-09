/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

// @lc code=start
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int dp[2505];
        dp[0] = 1;
        int maxx = 1;
        for (int i = 0; i < nums.size(); i ++)
            dp[i] = 1;
        for (int i = 0; i < nums.size(); i ++)
        {
            for (int j = 0; j < i; j ++)
            {
                if (nums[i] > nums[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
                maxx = max(maxx, dp[i]);
            }
        }
        return maxx;
    }
};
// @lc code=end

/* Accepted
 * 54/54 cases passed (232 ms)
 * Your runtime beats 73 % of cpp submissions
 * Your memory usage beats 98.51 % of cpp submissions (10 MB)
*/