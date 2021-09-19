class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
                break;
            }
        }
        return ans;
    }
};


/*Another fast solution*/
/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot,right=nums.size()-1,left=0;
        while(left<=right){
            pivot=left+(right-left)/2;
            if(nums[pivot]==target){
                return pivot;
                
            }else if(target>nums[pivot]){
                left=pivot+1;
            }else{
                right=pivot-1;
            }
        }return -1;
    }
};

*/
