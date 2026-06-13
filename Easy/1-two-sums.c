/**
 * Note: The returned array must be malloced, assume caller calls free().
 por eso no liberamos memoria ya rvbyebcvervgevcgyuevcyu
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    for (int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
        if (nums[i] + nums[j] == target) {
            // aquí encontramos la respuesta
            int *respuesta = malloc(2 * sizeof(int));

            respuesta[0] = i;
            respuesta[1] = j;

            *returnSize = 2;
            
            return respuesta;
            
            }
        }
    }

    return 0;
    
}

