//
//  main.c
//  algo
//
//  Created by 王啸川 on 2018/9/3.
//  Copyright © 2018年 王啸川. All rights reserved.
//

#include <stdio.h>
int removeDuplicates(int* nums, int numsSize);
int main(int argc, const char * argv[]) {
    int numbers[] = { 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5 };
    int numsSize = removeDuplicates(numbers, 11);
    printf("\n numSize:%d\n",numsSize);
    return 0;
}

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;
    int num = 0;
    for(int i = 0; i<numsSize; i++)
    {
        if(nums[num]!=nums[i])
        {
            num++;
            nums[num] = nums[i];
        }
    }
    numsSize = num+1;
    for(int i = 0; i<numsSize; i++)
    {
        printf(" %d ",nums[i]);
    }
    return numsSize;
}
