//
//  Fibonacci.c
//  algo
//
//  Created by 王啸川 on 2018/9/4.
//  Copyright © 2018年 王啸川. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int Fibonacci(int num);
int main()
{
    for(int i = 0; i < 10;i++)
    {
        printf("%d ",Fibonacci(i));
    }
    return 0;
}
int Fibonacci(int num)
{
    if(num == 0) return 0;
    if(num == 1) return 1;
    if(num == 2) return 1;  // 忽略导致num为2时递归没有出口。
    if(num%2 == 1)
    {// 奇数时
        return Fibonacci((num-1)/2+1)*Fibonacci((num-1)/2+1)+Fibonacci((num - 1)/2)*Fibonacci((num - 1)/2);
    }
    else
    {
        return Fibonacci(num/2)*(2*Fibonacci(num/2+1) - Fibonacci(num/2));
    }
}
