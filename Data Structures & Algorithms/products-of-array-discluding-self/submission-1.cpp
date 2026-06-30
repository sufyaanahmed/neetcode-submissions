class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        /*vector<int> left(n);
        vector<int> right(n);
        vector<int> suf(n);
        left[0]=1;
        right[n-1]=1;
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            suf[i]= left[i]*right[i];
        }
        return suf;*/
        vector<int> ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int suf=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=suf;
            suf*=nums[i];
        }
        return ans;
    }
};
