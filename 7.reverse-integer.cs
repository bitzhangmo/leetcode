/*
 * @lc app=leetcode.cn id=7 lang=csharp
 *
 * [7] 整数反转
 *
 * https://leetcode-cn.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (30.36%)
 * Total Accepted:    63.8K
 * Total Submissions: 210K
 * Testcase Example:  '123'
 *
 * 给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
 * 
 * 示例 1:
 * 
 * 输入: 123
 * 输出: 321
 * 
 * 
 * 示例 2:
 * 
 * 输入: -123
 * 输出: -321
 * 
 * 
 * 示例 3:
 * 
 * 输入: 120
 * 输出: 21
 * 
 * 
 * 注意:
 * 
 * 假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。
 * 
 */
public class Solution {
    public int Reverse(int x) {
        bool isPositive = true;
        string temp;
        long result;
        if(x >= 0)
        {
            temp = x.ToString();
        }
        else if(x<0)
        {
            try{
                temp = System.Math.Abs(x).ToString();
            }
            catch(System.OverflowException e)
            {
                temp = "2147483648";
            }
            temp = System.Math.Abs(x).ToString();
            isPositive = false;
        }
        char[] array = temp.ToCharArray();
        System.Array.Reverse(array);
        string test = new string(array);
        try{
            if(!isPositive) result = -System.Int32.Parse(test);
            result = System.Int32.Parse(test);
        }catch(System.OverflowException e)
        {
            return 0;
        }
        //if(!isPositive) result = -result;
        if(result > System.Int32.MaxValue || result < System.Int32.MinValue)
            return 0;
        else return result;
    }
}
