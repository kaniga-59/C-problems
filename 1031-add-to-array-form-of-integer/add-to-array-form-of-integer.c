/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int *res=(int*)malloc((numSize+20)*sizeof(int));
    int index=0;
    for(int i=numSize-1;i>=0||k>0;i--){
        if(i>=0)
        k=k+num[i];
        res[index++]=k%10;
        k=k/10;
    }
    *returnSize=index;
    int *ans=(int*)malloc(index*sizeof(int));
    for(int i=0;i<index;i++){
        ans[i]=res[index-1-i];
    }
    return ans;
}