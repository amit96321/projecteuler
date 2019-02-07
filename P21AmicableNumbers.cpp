/*Problem:Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
Author: Amit Kumar(kumaramit96321@gmail.com)
*/

#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> m;

int main(){
    int a[10000],i,j;
    for(i=0;i<10000;i++) a[i]=0;
    a[1]=1;
    for(i=2;i<10000;i++){
        for(j=1;j<=(i/2);j++){
            if(i%j==0) a[i]+=j;
        }
    }
    int res=0;
    for(i=1;i<10000;i++){
        if(a[i]!=i && a[i]<10000 && a[a[i]]==i){
           res+=i;
           cout<<i<<" ";
        } 
    }
    cout<<res<<"\n";
    return 0;
}