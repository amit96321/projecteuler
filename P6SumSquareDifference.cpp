/*Problem: What is the difference between the sum of the squares and the square of the sums?
Author: Amit Kumar(kumaramit96321@gmail.com)

Solved by just using the formulae
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n=100,s1,s2;
    s1=(n*(n+1)*(2*n+1))/6;
    s2=pow((n*(n+1))/2,2);
    cout<<s2-s1;
}
