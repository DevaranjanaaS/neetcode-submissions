class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),cnt=0,prd=1;
        vector<int> ans(n,0);
        for(int num:nums){
            if(num==0) cnt++;
            else prd*=num;
        }
        if(cnt>=2) return ans;
        else if(cnt==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    ans[i]=prd;
                    return ans;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans[i]=prd/nums[i];
            }
        }
        return ans;
    }
};
