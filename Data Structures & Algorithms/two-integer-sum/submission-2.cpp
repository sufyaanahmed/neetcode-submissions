class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indezz;
        for(int i=0;i<nums.size();i++){
            indezz[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++){
            int need =target-nums[i];
            if(indezz.count(need) && indezz[need]!=i){
                return {i,indezz[need]};
            }
        }
        return {};
    }
};
