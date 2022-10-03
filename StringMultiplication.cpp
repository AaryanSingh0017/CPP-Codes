//Description
Suppose we have two numbers as a string. We have to multiply them and return the result also in a string. So if the numbers are “26” and “12”, then the result will be “312”

To solve this, we will follow these steps −

Taking two arguments x and y it indicates x divides y
if x < -Infinity and y = 1, then return infinity
a := |x|, b := |y| and ans := 0
while a – b >= 0
p := 0
while a – (left-shifted b (left-shifted 1 p times)) >= 0
p := p + 1
a := a – (left shift b, p times)
ans := ans + left shift 1 p times
if x > 0 is true and y > 0 is also true, then return ans, otherwise return (– ans)

//Code
  #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   string multiply(string num1, string num2);
};
string Solution::multiply(string nums1, string nums2) {
   int n = nums1.size();
   int m = nums2.size();
   string ans(n + m, '0');
   for(int i = n - 1; i>=0; i--){
      for(int j = m - 1; j >= 0; j--){
         int p = (nums1[i] - '0') * (nums2[j] - '0') + (ans[i + j + 1] - '0');
         ans[i+j+1] = p % 10 + '0';
         ans[i+j] += p / 10 ;
      }
   }
   for(int i = 0; i < m + n; i++){
      if(ans[i] !='0')return ans.substr(i);
   }
   return "0";
}
main(){
   Solution ob;
   cout << ob.multiply("28", "25");
}
