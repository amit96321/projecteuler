/*Problem:What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?

Author: Amit Kumar(kumaramit96321@gmail.com)
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9},i;
    for(i=1;i<1000000;i++){
        next_permutation(a,a+10);
    }
    for(i=0;i<10;i++) cout<<a[i];
    return 0;
}
