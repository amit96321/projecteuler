/*Problem: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
Author: Amit Kumar(kumaramit96321@gmail.com)*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n3,n5,n15,sum3,sum5,sum15;
    n3=999/3;  //count of number divisible by 3 less that 999
    n5=999/5;   //count of number divisible by 5 less that 999
    n15=999/15;   //count of number divisible by 15 less that 999
    sum3=(n3*(3+n3*3))/2;   //sum of all n3 numbers sum=(n(a+l))/2;
    sum5=(n5*(5+n5*5))/2;
    sum15=(n15*(15+n15*15))/2;
    cout<<sum3+sum5-sum15<<"\n";
}
