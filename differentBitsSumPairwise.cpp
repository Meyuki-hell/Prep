#include <bits/stdc++.h> 
#define mod 1000000007
int differentBitsSumPairwise(vector<int> &arr, int n)
{
    // Write your code here
    long long int result = 0;
    for(int i = 0; i < 31; i++){
        int count = 0;
        for(int it : arr){
            if(it & (1 << i)){
                count++;
            }
        }
        result = result + (2 * count * (n - count));
        result %= mod;
    }
    return result;
}

