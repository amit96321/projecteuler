/*Problem: The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
Author: Amit Kumar(kumaramit96321@gmail.com)
Solved by using seive of Eratosthenes method
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    bool p[2000001];   //further optimization in space can be reduced by factor of 
    ll i,j,sum=0;       //2 as we already know that all even are not prime
    memset(p,true,sizeof(p));
    p[0]=p[1]=false;
    for(i=4;i<2000001;i+=2) p[i]=false;
    for(i=3;i<2000001;i+=2){   //step is 2 because all even no has been marked false
        if(p[i]==true){
            for(j=i*i;j<2000001;j+=(2*i)){   //starts with i*i  as multiple if i utpo (i-1)
                p[j]=false;                 //has been already marked
            }           //here step is 2*i as i*i is odd as i will be odd and after adding 
        }               //odd no i to it will become even which was already marked
    }
    for(i=2;i<2000001;i++){
        if(p[i]==true) sum+=i;
    }
    cout<<sum<<"\n";
}
