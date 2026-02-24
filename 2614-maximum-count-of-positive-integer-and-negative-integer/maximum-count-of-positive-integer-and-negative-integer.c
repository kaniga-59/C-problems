int maximumCount(int* nums, int numsSize) {
    int pos=0,neg=0,zero=0;
    for(int i=0;i<numsSize;i++){
    if(nums[i]>0)
       pos++;
    else if(nums[i]<0)
       neg++;
    else
       zero++;
    }
    if(pos>neg)
        return pos;
    else
        return neg;
}