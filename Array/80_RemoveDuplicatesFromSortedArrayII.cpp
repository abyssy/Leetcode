class Solution {
public:
    //思路：从头到尾扫描，i是长度，也即重复最多两个元素的下一个位置，即可以存放下一个不同元素的位置
    //不论重复与否都不断覆盖前面的位置
    int removeDuplicates(vector<int>& nums) {
        //flag指当前元素出现的次数
        int flag = 1;
        if (nums.size() == 0 || nums.size() == 1)
            return nums.size();
        //i为有效长度
        int i = 1;
        //cur指当前正在比对哪个元素
        int cur = nums[0];
        for (int j = 1; j < nums.size(); j ++){
            if (cur == nums[j])
            {
                flag ++;
                if (flag <= 2)
                    nums[i ++] = nums[j];
            }
            else{
                flag = 1;
                nums[i ++] = nums[j];
                cur = nums[j];
            }
        }
        return i;
    }
};

//执行用时：8 ms, 在所有 C++ 提交中击败了86.69%的用户
//内存消耗：10.4 MB, 在所有 C++ 提交中击败了87.69%的用户
