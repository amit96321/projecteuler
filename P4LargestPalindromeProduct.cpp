/*Problem: Find the largest palindrome made from the product of two 3-digit
numbers.
Author: Amit Kumar(kumaramit96321@gmail.com)

I am only considering the case when b>=a because (a*b)=(b*a) and at any time in the 2nd loop
if (a*b) becomes less that achieved max palindromic number(n) then it breaks because it is 
guranteed than we can not get any no greater than n.
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPalindrome(ll n){
   vector<int> v;
   while(n!=0){
       v.push_back(n%10);
       n/=10;
   }
   ll i=0,j=v.size()-1;
   while(i<j){
       if(v[i]!=v[j]) return false;
       i++,j--;
   }
   return true;
}

int main(){
    ll a,b,mx=LONG_LONG_MIN;
    ll n1=999,n2=999;
    for(a=999;a>=100;a--){
        for(b=a;b>=100;b--){
            if(a*b<mx) break;
            if(isPalindrome(a*b)){
                if(a*b>mx){
                    n1=a;n2=b;
                    mx=a*b;  
                } 
            }
        }
    }
    cout<<n1<<" "<<n2<<" "<<mx<<"\n";
}
