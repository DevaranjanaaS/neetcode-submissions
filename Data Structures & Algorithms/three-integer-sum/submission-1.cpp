class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int x=0,y=nums.size()-1;
        for(int i=0;i<nums.size()-2;i++){
            int x=i+1,y=nums.size()-1;
            while(x<y){
                if(nums[i]+nums[x]+nums[y]>0) y--;
                else if(nums[i]+nums[x]+nums[y]<0) x++;
                else{
                    vector<int> temp(3);
                    temp[0]=nums[i],temp[1]=nums[x],temp[2]=nums[y];
                    if(find(ans.begin(),ans.end(),temp)==ans.end()) ans.push_back(temp);
                    x++;
                }
            }    
        }
        return ans;
    }
};
