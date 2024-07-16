class Solution {
public:
    string longestCommonPrefix(vector<string>& st) {
                if(st.size() == 0) return "";
        int ans = INT_MAX;
        for(int i = 0; i < st.size()-1; i++){
            ans = min(ans, (int)min(st[i].size(), st[i+1].size()));
            while(st[i].substr(0, ans) != st[i+1].substr(0, ans)){
                ans--;
            }
            if(ans == 0)return "";
        }
        return st[0].substr(0, ans);
    }
};
        
    

