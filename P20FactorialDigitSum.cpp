/*Problem:How Find the sum of the digits in the number 100!
Author: Amit Kumar(kumaramit96321@gmail.com)
*/

#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> m;

void multiply(vector<int> &v,int x){
    int s=v.size(),i,carry=0,temp;
    for(i=s-1;i>=0;i--){
        temp=(v[i]*x+carry);
        v[i]=temp%10;
        carry=temp/10;
    }
    while(carry!=0){
        v.insert(v.begin(),carry % 10); 
        carry /= 10; 
    }
}

int main(){
    int i,sum=0;
    vector<int> v;
    v.push_back(1);
    for(i=2;i<=100;i++){
        multiply(v,i);
    }
    for(i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum<<"\n";
    return 0;
}
