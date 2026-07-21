class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    
        int left=0, right =0, n1 = s1.size(), n2=s2.size();
        if(n1>n2) return false;
        vector<int> freq(26);
        vector<int> window(26);
        for(int i=0;i<n1;i++){
            int suf = s1[i]-'a';
            freq[suf]++;
        }
        for(int i=0;i<n1;i++){
            int suf = s2[i]-'a';
            window[suf]++;
        }
        if(window==freq) return true;
        for(int right=n1;right<n2;right++){
            int suf = s2[left]-'a';
            window[suf]--;

            suf=s2[right]-'a';
            window[suf]++;

            if(window==freq){
                return true;
            }

            left++;
        }
        return false;
    }
};
