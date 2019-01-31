/*Problem: What is the smallest number divisible by each of the numbers 1 to 20? 
Author: Amit Kumar(kumaramit96321@gmail.com)

ans will be just lcm of all numbers from 1 to 20 and we know that a*b=lcm(a,b)*hcf(a,b),
according to find the answer
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n=1;
    for(ll i=2;i<=20;i++){
        n=(n*i)/__gcd(n,i);
    }
    cout<<n<<"\n";
}
