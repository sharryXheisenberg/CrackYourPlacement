// palindrome string 

// s = "madam"
// s is palindrome



#include<iostream>
#include<bits\stdc++.h>
#include<string>
using namespace std;

// first approach

// bool isPalindrome(string s){
//     int left = 0 , right = s.length() - 1;

//     while(left<right){
//         if(!isalnum(s[left])) 
//             left++;

//         else if(!isalnum(s[right]))
//             right--;

//         else if(tolower(s[left])!=tolower(s[right]))
//             return false;

//         else{
//             left++;
//             right--;
//         }

//     }
//     return true; 
// }
// int main(){
//     string str = "goodbye";
//     bool ans = isPalindrome(str);

//   if (ans == true) {
//     cout << "Palindrome";
//   } else {
//     cout << "Not Palindrome";
//   }
//   return 0;
// }

// second approach 

bool isPalindrome(int i , string s ){
    // base condition
    // if i travels half of the sting then return true

    if(i>=s.length()/2) return true;

    // if first and last are not equal then return false
    if(s[i]!=s[s.length()-i-1])  // i->0 
        return false;

    return isPalindrome(i+1 , s);
}
int main(){
    string s = "madam";
    isPalindrome(0,s);
    cout<<endl;
    return 0 ;
}
