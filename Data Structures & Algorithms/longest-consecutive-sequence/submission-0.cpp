class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> suf(nums.begin(),nums.end());
        int ans =0;
        for(const auto i : nums){
            int count =0;
            int curr =i;
            if(suf.find(i-1) != suf.end() ){
                continue;
            }
            
            count=1;
            while(suf.find(curr+1) != suf.end()){
                curr++;
                count++;
            }
            
            ans = max(count,ans);
        }
        return ans;
    }
};
