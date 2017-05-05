/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *out = NULL,i,j,flag = 0;
    out = (int*)malloc(2*sizeof(int));
    for (i = 0 ; i < numsSize - 1 ; i++) {
        for (j = i+1 ; j < numsSize ; j++){
            if ((*(nums+i) + *(nums+j)) == target){
                *out = i;
                *(out+1) = j;
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }
    return  out;
}
