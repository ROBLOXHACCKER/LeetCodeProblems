#include <stdio.h>

void twoSum(int* nums, int numsSize, int target) {
    int count = 0;
    while (count < numsSize) {
        int i = count + 1;
        while (i < numsSize) {
            if (nums[count] + nums[i] == target) {
                // Stampa i due numeri trovati
                printf("I due numeri trovati sono: %d e %d\n", nums[count], nums[i]);
                return; 
            }
            i++;
        }
        count++;
    }
    printf("Nessuna coppia trovata.\n"); 
}




int main()
{
    int nums[5] = {1,2,2,4,15};
    int numSize = sizeof(nums) / sizeof(nums[0]);
    int *nump = nums;
    int target = 4;

    twoSum(nums, numSize, target, 2);






}