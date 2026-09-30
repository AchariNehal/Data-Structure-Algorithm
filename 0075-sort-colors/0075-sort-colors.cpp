class Solution {
public:
    void sortColors(vector<int>& nums) {
        //linear search (Brute force)
        // for( int i=0 ;i<nums.size()-1;i++){
        //     for(int j=i+1; j<nums.size();j++)
        //       if(nums[i]>nums[j]){
        //         swap(nums[i],nums[j]);
        //     }  
        // }


        //Dutch National Flag Algorithm (Optimal Sol'n)
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};