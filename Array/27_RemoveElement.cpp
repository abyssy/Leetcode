class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //Error 1: 未考虑输入数组为空的情况
        if (nums.size() == 0)
            return 0;
        int cur = 0;
        while (cur < nums.size() && nums[cur] == val)
            cur ++;
        //Error 2: 未考虑全数组均需删除，删除后直接为空的情况
        if (cur >= nums.size())
            return 0;
        int i = 0;
        for ( ; i < nums.size(); i ++){
            nums[i] = nums[cur ++];
            while (cur < nums.size() && nums[cur] == val)
                cur ++;
            if (cur >= nums.size())
                return i + 1;
        }
        return i + 1;
    }
};

//执行用时：4 ms, 在所有 C++ 提交中击败了68.25%的用户
//内存消耗：8.5 MB, 在所有 C++ 提交中击败了89.59%的用户
