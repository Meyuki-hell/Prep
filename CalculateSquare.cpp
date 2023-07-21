#include <bits/stdc++.h> 
int calculateSquare(int num)
{
    //    Write your code here.
    if(num == 0) return 0;
    
    if(num < 0) num = -num;

    if(num & 1)
        return (calculateSquare(num >> 1)<< 2) + ((num >> 1) << 2) + 1;
    
    return calculateSquare(num >> 1) << 2;
    

}
