class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(string s:strs){
            ans+=to_string(s.length());
            ans+='#';
            ans+=s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(int i=0;i<s.length();){
            string temp="",t="";
            while(s[i]!='#'){
                temp+=s[i];
                i++;
            }
            int len=stoi(temp);
            i++;
            for(int j=0;j<len;j++){
                t+=s[i];
                i++;
            }
            ans.push_back(t);
        }
        return ans;
    }
};
