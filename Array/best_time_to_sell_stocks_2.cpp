#include<iostream>
#include<bits\stdc++.h>
using namespacestd;




class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1] > prices[i]){
                diff += prices[i+1] - prices[i];
            }
        }
        return diff;
    }
};