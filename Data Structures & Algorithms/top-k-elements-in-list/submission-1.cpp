class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        vector<int> ans;
        for(int n:nums){
            freq[n]++;
        }
        vector<pair<int,int>> s(freq.begin(),freq.end());
        sort(s.begin(),s.end(),[](const auto& a,const auto& b){
            return a.second>b.second;
        });
        int i=0;
        for(const auto& pair:s){
            if(i>=k) break;
            ans.push_back(pair.first);
            i++;
        }
        return ans;
    }
};
