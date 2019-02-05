/*Problem: Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down,
there are exactly 6 routes to the bottom right corner. How many such routes are there through a 20×20 grid?
Author: Amit Kumar(kumaramit96321@gmail.com)
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<long long,long long> m;

ll findWay(ll x, ll y){
    if(m[x*100+y]) return m[x*100+y];
    if(x==0 || y==0) return 1;
    m[x*100+y]=findWay(x,y-1)+findWay(x-1,y);
    return m[x*100+y];
}

int main(){
    cout<<findWay(20,20);
}
