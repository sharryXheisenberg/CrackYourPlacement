#include<iostream>
#include<bits\stdc++.h>
using namespace std;

class Solution {
  public:
     vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        
        int max = arr[n - 1];
        ans.push_back(arr[n - 1]);

        for (int i = n - 2; i >= 0; i--)
            if (arr[i] >= max) {
                ans.push_back(arr[i]);
                max = arr[i];
            }

        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> v = {10, 4, 2, 4, 1};
    vector<int>oj;
    oj = obj.leaders(v);
    for(int i=0;i<oj.size();i++){
        cout<<oj[i]<<" ";
    }
    return 0;
}