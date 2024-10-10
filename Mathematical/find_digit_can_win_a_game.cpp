#include<iostream>
#include<bits\stdc++.h>
#include<math.h>


using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single_sum = 0;  
        int double_sum = 0;  

        
        for (int num : nums) {
            if (num >= 1 && num <= 9) {
                single_sum += num;
            } else if (num >= 10 && num <= 99) {
                double_sum += num;
            }
        }

        
        return single_sum > double_sum || double_sum > single_sum;
    }
};


int main(){
    Solution obj;
    vector<int>n = { 1,2,3,4,5,14};

    bool hj = obj.canAliceWin(n);
    if(hj){
        cout<<"Yes we can won"<<endl;
    }
    else{
        cout<<"No , we can't won"<<endl;
    }
    return 0;
}