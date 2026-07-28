class Solution {
public:
    string minWindow(string s, string t) {
        if((t.size()>s.size())){
            return "";
        }
       
        vector<int> need(128,0);
        vector<int> window(128,0);

        int required =0;
        for(int i=0;i<t.size();i++){
            if(need[t[i]]==0){
                required += 1;
            }
            need[t[i]]++;
        }
        int left=0;
        int formed=0;
        int bestlen=INT_MAX;
        int beststart=0;
        for(int right=0;right<s.size();right++){
            char c = s[right];
            window[c]++;
            if(need[c] >0 && window[c]==need[c]){
                formed++;
            }
            while(required==formed){
                int currlen=right-left+1;
                if(currlen<bestlen){
                    bestlen=currlen;
                    beststart=left;
                }
                    char c =s[left];
                    window[c]--;
                    if(need[c] > 0 && window[c] < need[c]){
                        formed--;
                    }
                left++; 
            }

        }

        if (bestlen == INT_MAX){
            return "";
        }

        
        return s.substr(beststart,bestlen);

    }
};
