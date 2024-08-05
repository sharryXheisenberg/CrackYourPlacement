#include <iostream>
#include<bits\stdc++.h>
using namespace std;

class Bs{
    public:

    int binarySearch(vector<int>& arr , int tar){
        int left = 0;
        int high = arr.size() - 1;

        while(left<=high){
            int mid = left + (high - left)/2;

            if(arr[mid]==tar){ 
                return mid;
            }

            else if (arr[mid]<tar){
                left = mid + 1;
            }
            else{
                high = mid -1 ;
            }
        }
        return -1;
    }
};

int main() {

    Bs obj;
    vector<int> v = { 1 , 3 , 6 , 7 , 8};
    int tar = 10;
    int p = obj.binarySearch(v , tar);
    if(p==-1){
        cout<<"No target element is present";
    }
    else{
        cout<<p<<endl;
    }
    return 0;
}