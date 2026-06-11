class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cc = 0;
        int mc = 0;
        for (int i : nums) {
            if (i == 1) {
                cc++;
                if (cc > mc) mc = cc;
            }
            else cc = 0;
        }
        return mc;
    }
};