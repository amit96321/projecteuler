/*Problem: Find the 10001st prime
Author: Amit Kumar(kumaramit96321@gmail.com)

Solved by using seive of Eratosthenes method
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    bool p[1000000];
    memset(p,true,sizeof(p));
    p[0]=p[1]=false;
    vector<int> v;
    ll i,j;
    for(i=2;i<1000000;i++){
        if(p[i]==true){
            v.push_back(i);
           if(v.size()==10001){
                cout<<v[10000];
                break;
           }
            for(j=i*2;j<1000000;j+=i){
                p[j]=false;
            }
        }
    }
}
