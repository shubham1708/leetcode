class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int nz=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nz++;
            }
            
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
             if(nums[i]!=0){
                 ans.push_back(nums[i]);
             }
        }
        for(int i=1;i<=nz;i++){
            ans.push_back(0);
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
        
    }
};
