class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int suf=0;
        int n=prices.size();
        int mini=prices[0];
        int besttoday=0;
        for(int i=0;i<n;i++){
            mini=min(mini,prices[i]);
            besttoday=prices[i]-mini;
            suf=max(suf,besttoday);
        }

    
        return suf;
    }
};
