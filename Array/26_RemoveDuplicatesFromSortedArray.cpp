class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int cur = 0;
        int len = 1;
        int temp = 0;
        for (int i = 1; i < nums.size(); )
        {
            //Error 1: 缺少了 i < nums.size() 判定, i ++后可能会导致nums[i]溢出
            while(i < nums.size() && nums[cur] == nums[i])
                i ++;
            if (i >= nums.size())
                return len;
            if (cur == i - 1){
                cur ++;
                i ++;
                //Error 2: 缺少了 len ++，导致[1,2]类似结果出错
                len ++;
                continue;
            }
            cur ++;
            nums[cur] = nums[i];
            len ++;
            i ++;
        }
        return len;
    }
};

//执行用时：12 ms, 在所有 C++ 提交中击败了97.45%的用户
//内存消耗：13.4 MB, 在所有 C++ 提交中击败了97.31%的用户
