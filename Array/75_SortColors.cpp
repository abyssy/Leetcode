class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = -1;
        int two = nums.size();
        for (int i = 0; i < two; )
        {
            if (nums[i] == 1)
                i ++;
            else if (nums[i] == 2)
                swap( nums[i], nums[--two]);
            else{
                assert(nums[i] == 0);
                swap(nums[++zero], nums[i++]);
            }
        }
    }
};

//执行用时：4 ms, 在所有 C++ 提交中击败了63.86%的用户
//内存消耗：8 MB, 在所有 C++ 提交中击败了98.28%的用户
