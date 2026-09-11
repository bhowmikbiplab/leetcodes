class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()) return 1;
        int slow = 0;
        for(int i=0; i<t.size(); i++){
            if(s[slow]==t[i]){
                slow++;
                if(slow==s.size()){
                    return 1;
                }
            }
        }
        return 0;
        
    }
};