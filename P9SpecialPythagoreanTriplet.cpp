/*Problem: Find the only Pythagorean triplet (a, b, c), for which a + b + c = 1000.
Author: Amit Kumar(kumaramit96321@gmail.com)*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a,b,c;
    for(a=1;a<1000;a++){
        for(b=a+1;b<(1000-a);b++){
            if(a*a+b*b==(1000-a-b)*(1000-a-b)){
                cout<<a*b*(1000-a-b)<<"\n";
                return 0;
            }
        }
    }
}
