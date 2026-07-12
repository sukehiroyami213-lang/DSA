class Solution {
public:
         void tosum(int i,vector<int>& nums,vector<vector<int>>&res,int target){
              int j=nums.size()-1;
              while(i<j){
                if(nums[i]+nums[j]>target){
                  j--;
                }else if(nums[i]+nums[j]<target){
                  i++;
                } else{
                     while(i<j && nums[i]==nums[i+1])i++;
                     while(i<j && nums[j]==nums[j-1])j--;
                     res.push_back({-target,nums[i],nums[j]});
                     i++;j--;
                }
             }
         }
    vector<vector<int>> threeSum(vector<int>& nums) {
            int n=nums.size();
            vector<vector<int>>res;
            sort(nums.begin(),nums.end());
            for(int i=0;i<n-2;i++){
              if(i>0 && nums[i]==nums[i-1]){
                continue;
              }
              tosum(i+1,nums,res,-nums[i]);
            }
          return res;
    }  
};