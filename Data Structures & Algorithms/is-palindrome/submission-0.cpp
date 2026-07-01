class Solution {
public:
    bool isPalindrome(string s) {
        string palin="";
        for(char n:s){
            if(isalnum(n)){
                palin+=tolower(n);
            }
        }
        string rev=palin;
        reverse(rev.begin(),rev.end());
        return rev==palin;
    }
};
