class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int compare = 0;
        for (int num : nums) {
            if (num == 1) {
                count++;
                compare = max(compare, count);
            }
            else {
                count = 0;
            }
        
        }
        return max(compare,count);
    }
};