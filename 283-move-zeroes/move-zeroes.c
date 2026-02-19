void moveZeroes(int* nums, int numsSize) {
    int n= numsSize;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            
        for(int j=i;j<n-1;j++){
            nums[j]=nums[j+1];
        }
        nums[n-1]=0;
        i--;
        n--;
    }
}}