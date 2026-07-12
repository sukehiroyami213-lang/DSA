class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //sort kar
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string start = strs[0];
        string end = strs[n-1];
        
        int m1 = start.size();
        int m2 = end.size();
        int m = min(m1,m2);
        int i=0;
        string ans;
        while(i<m){
            if(start[i] == end[i]){
                ans.push_back(start[i]);
            }
            else    break;
            i++;
        }
        return ans;
    }
};