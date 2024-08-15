#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt_five = 0, cnt_ten = 0;

        for (int bill : bills) {
            if (bill == 5) {
                cnt_five++;
            } 
            else if (bill == 10) {
                if (cnt_five > 0) {
                    cnt_five--;
                    cnt_ten++;
                } else {
                    return false;
                }
            } else if (bill == 20) {
                if (cnt_ten > 0 && cnt_five > 0) {
                    cnt_ten--;
                    cnt_five--;
                } else if (cnt_five >= 3) {
                    cnt_five -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution obj;
    
    vector<int> bills1 = {5, 5, 5, 10, 20};
    cout << (obj.lemonadeChange(bills1) ? "true" : "false") << endl; 
    
    vector<int> bills2 = {5, 5, 10, 10, 20};
    cout << (obj.lemonadeChange(bills2) ? "true" : "false") << endl;
    
    return 0;
}