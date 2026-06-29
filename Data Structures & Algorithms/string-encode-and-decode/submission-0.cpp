class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(const string& c : strs){
            int lenn= c.length();
            string abc = to_string(lenn);
            res += abc;
            res += '#';
            res += c;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> suf;
        int n = s.length(),i=0;
        while(i < n){
            int j=i;
            while(s[j]!= '#'){
                j++;
            }
            string sublens = s.substr(i,j-i);
            int sublen = stoi(sublens);
            string substring = s.substr(j+1,sublen);
            suf.push_back(substring);            
            i = (j+1)+sublen;
        }

        return suf;
    }
};
