class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cur = m + n - 1, c2 = n - 1, c1 = m - 1;
        for ( ; c1 >= 0 && c2 >= 0;){
            if (nums1[c1] > nums2[c2]){
                nums1[cur] = nums1[c1];
                c1 --;
                cur --;
            }
            else{
                nums1[cur] = nums2[c2];
                c2 --;
                cur --;
            }
        }
        while(c2 >= 0){
            nums1[cur] = nums2[c2];
            cur --;
            c2 --;
        }
    }
};

//执行用时：4 ms, 在所有 C++ 提交中击败了80.30%的用户
//内存消耗：8.7 MB, 在所有 C++ 提交中击败了98.91%的用户
