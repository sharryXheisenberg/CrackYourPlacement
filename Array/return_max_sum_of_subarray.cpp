#include<iostream>
#include<bits\stdc++.h>
using namespace std;


class Prime{

    public:

    int subarraySum(vector<int>& arr){
        int sum = 0;
        int Max = INT_MIN;

        int n = arr.size();

        for(int i=0;i<n-1;i++){
            sum+=arr[i];
            Max = max(sum , Max);
            if(sum<0){
                sum = 0;
            }
        }
        cout<< Max;

    }
};

int main() {
    Prime obj;
    vector<int>v = {-1 , -2 , -3 , 4  , -2};
    obj.subarraySum(v);
    return 0;
}