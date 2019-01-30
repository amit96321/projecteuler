/*Problem: Find the largest prime factor of a composite number.
Author: Amit Kumar(kumaramit96321@gmail.com)

All prime factor of any no are odd except 2. so handle 2 seperately
maximum primefactor of any no can be sqrt(n), if greater than this then must be n itself.
So check till sqrt(n) only;
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    //lastFactor is factor uptill now maximum divisor prime no of n
    //largestPrimeFactor is factor beyond which lastFactor can't go
    ll n=600851475143,factor,lastFactor,largestPrimeFactor;
    if(n%2==0){
        lastFactor=2;
        while(n%2==0) n/=2;
    }
    else lastFactor=1;
    largestPrimeFactor=(ll)sqrt(n);
    factor=3;
    while(n>1 && factor<=largestPrimeFactor){
        if(n%factor==0){
            lastFactor=factor;
            while(n%factor==0) n/=factor;
            largestPrimeFactor=(ll)sqrt(n);
        }
        factor+=2; //factor is incremented by 2 as all prime factor will be odd
    }
    if(n==1) cout<<lastFactor<<"\n";
    else cout<<n<<"\n";
}
