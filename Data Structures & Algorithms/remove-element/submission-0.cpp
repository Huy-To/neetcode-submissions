class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int list_size = nums.size();
        int index = 0;
        while (index < list_size) {
            if (nums[index] != val) {
                index++;
            }
            else {
                nums[index] = nums[list_size - 1];
                list_size--;
            }
        }
        return index;
    }
};