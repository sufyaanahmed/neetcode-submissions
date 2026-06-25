class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(const auto& s:nums){
            count[s]++;
        }
        
        vector<pair<int, int>> freq(count.begin(), count.end());//bcz sort works directly on vectors
        sort(freq.begin(), freq.end(), [](pair<int, int>& a, pair<int, int>& b) {//lambda func
            return a.second > b.second;
        });

        vector<int> res;
        for(int i = 0; i < k; i++) {
            res.push_back(freq[i].first);
        }
        return res;
    }
};
