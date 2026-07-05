class Solution {
public:
    int maxArea(vector<int>& heights) {
        int suf=0;
        int i=0,j=heights.size()-1;
        while(i<j){
            int vol =  ((j-i) * min(heights[i],heights[j]));
            suf=max(suf,vol);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return suf;
    }
};
