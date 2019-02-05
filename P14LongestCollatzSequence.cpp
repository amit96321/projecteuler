/*Problem: Which starting number, under one million, produces the longest chain in Collatx series?
Author: Amit Kumar(kumaramit96321@gmail.com)
If n is even, then n → n/2 ⇒ Collatz(n) = Collatz(n/2) + 1. Therefore Collatz(2k) > Collatz(k) for all k,
and we do not need to compute the chain for any k ≤ LIMIT /2. In this case, we do not need to compute
the chain for any k below 500000.
If n is odd, then 3n + 1 is even, and n → 3n + 1 → (3n+1)/2 So, We can save a step by giving Collatz(n) =
Collatz( (3n+1)2) + 2. 
*/

#include<bits/stdc++.h>
using namespace std;
//1000000

map<long long,long long> m;

long long collatz(long long n){
    if(m[n]) return m[n];
    if(n==1) return 1;
    if(n%2==0) m[n]=collatz(n/2)+1;
    else m[n]=collatz((3*n+1)/2)+2;
    return m[n];
}

int main(){
    long long i,val=INT_MIN,result;
    for(i=500000;i<1000000;i++){
        if(collatz(i)>val){
           val=collatz(i);
           result=i;
        }
    }
    cout<<result<<"\n";
}
