class Solution {
   public:
    int trap(vector<int>& height) {
        int n = height.size() - 1;
        int i = 0, j = n, suf = 0;
        int leftmax = 0, rightmax = 0;
        while (i < j) {
            leftmax = max(height[i], leftmax);
            rightmax = max(height[j], rightmax);

            if (leftmax < rightmax) {
                suf += leftmax - height[i];
                i++;

            } else {
                suf += rightmax-height[j];
                j--;
            }
        }
        return suf;
    }
};
