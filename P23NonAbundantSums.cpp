/*Problem:A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.
A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.
As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.

Author: Amit Kumar(kumaramit96321@gmail.com)
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<pair<int,int>,int> m;

int main(){
    ll a[28124],b[28124],i,j,sum=0; //a[i] is used to store sum of proper divider of i
    for(i=0;i<28124;i++) a[i]=b[i]=0;  //b[i] is used to track number which cannot be written as the sum of two abundant numbers.
    for(i=2;i<28124;i++){
        for(j=1;j<=(i/2);j++){
            if(i%j==0) a[i]+=j;
        }
        if(a[i]>i) a[i]=-1;
    }
    for(i=0;i<28124;i++){
        for(j=i;j<28124;j++){
            if(a[i]==-1 && a[j]==-1 && i+j<28124) b[i+j]=1;
        }
    }
    for(i=1;i<28124;i++) if(b[i]==0) sum+=i;
    cout<<sum<<"\n";
    return 0;
}
