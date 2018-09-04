//
//  217.c
//  algo
//
//  Created by 王啸川 on 2018/9/4.
//  Copyright © 2018年 王啸川. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
bool containsDuplicate(int* nums, int numsSize) ;
int main()
{
    int nums[6] = {0,4,5,0,3,6};
    if(containsDuplicate(nums, 0))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}

bool containsDuplicate(int* nums, int numsSize) {
    for(int i = 0; i<numsSize; i++)
    {
        for(int j = i+1; j<numsSize; j++)
        {
            if(nums[j] == nums[i])
                return true;
        }
    }
    return false;
}
