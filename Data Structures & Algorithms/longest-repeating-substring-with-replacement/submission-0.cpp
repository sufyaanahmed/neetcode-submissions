class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26);
        int left=0,n=s.size()   ,right=0;
        int ans=0;
        int maxfreq=0;
        for(int right=0;right<n;right++){
            int suf = s[right]-'A';
            freq[suf]++;
            maxfreq=max(maxfreq,freq[suf]);
            
            int repl = (right-left+1)-maxfreq;

            while(repl>k ){
                suf =s[left]-'A';
                freq[suf]--;
                left++;
                repl--;
            }
            ans = max(ans,(right-left+1) );
        }
        return ans;

    }
};
