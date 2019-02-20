/*Problem: Find the product of the coefficients, a and b, for the quadratic expression that produces the maximum number of primes for consecutive values of n, starting with n=0.
Author: Amit Kumar(kumaramit96321@gmail.com)

cofficient b must be a prime no as for n=0 resultant will be itself b which should be prime
if x is prime no then -x will also be a prime number
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    bool p[2001001];   //further optimization in space can be reduced by factor of 
    ll i,j,n,a,b;
    memset(p,true,sizeof(p));
    p[0]=p[1]=false;
    for(i=4;i<2001001;i+=2) p[i]=false;
    for(i=3;i<2001001;i+=2){   //step is 2 because all even no has been marked false
        if(p[i]==true){
            for(j=i*i;j<2001001;j+=(2*i)){   //starts with i*i  as multiple if i utpo (i-1)
                p[j]=false;                 //has been already marked
            }           //here step is 2*i as i*i is odd as i will be odd and after adding 
        }               //odd no i to it will become even which was already marked
    }
    ll res=0,product;
    for(b=-1000;b<=1000;b++){
        if(p[abs(b)]==false) continue;
        for(a=-999;a<1000;a++){
            n=0;
            while(p[abs(n*n+a*n+b)]==true){
                n++;
            } 
            if(n>res){
               res=n;
               product=a*b;
            }
        }
    }
    cout<<product<<endl;
}
