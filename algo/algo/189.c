//
//  189.c
//  algo
//  给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//  Created by 王啸川 on 2018/9/4.
//  Copyright © 2018年 王啸川. All rights reserved.
//

#include <stdio.h>

void rotate(int* nums, int numsSize, int k);
int main()
{
    int nums[7] = { 0,1,2,3,4,5,6};
    rotate(nums, 7, 3);
    return 0;
}

void rotate(int* nums, int numsSize, int k) {

    for(int i = 0; i<numsSize; i++)
    {
        printf(" %d",nums[i]);
    }
}
