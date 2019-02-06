/*Problem: What is the sum of the digits of the number 2^1000?
Author: Amit Kumar(kumaramit96321@gmail.com)
solve using storing each step no into string
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="1",temp;
    int i,j,carry;
    for(i=1;i<=1000;i++){
        temp="";
        carry=0;
        for(j=s.length()-1;j>=0;j--){
            temp=to_string(((s[j]-'0')*2+carry)%10)+temp;
            carry=((s[j]-'0')*2+carry)/10;
        }
        if(carry>0) temp=to_string(carry)+temp;
        s=temp;
        //cout<<s<<"\n";
    }
    int sum=0;
    for(i=0;i<s.length();i++) sum+=(s[i]-'0');
    cout<<sum<<"\n";
    return 0;
}
