/*Problem: Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
Author: Amit Kumar(kumaramit96321@gmail.com)
Solved by using seive of Eratosthenes method
*/

#include<bits/stdc++.h>
using namespace std;

string findsum(string s1,string s2){
    int len1=s1.length()-1,len2=s2.length()-1,carry;
    string res="";
    carry=0;
    while(len1>=0 && len2>=0){
        res=to_string(((s1[len1]-'0')+(s2[len2]-'0')+carry)%10)+res;
        carry=(s1[len1]-'0'+s2[len2]-'0'+carry)/10;
        len1--;len2--;
    }
    while(len1>=0){
        res=to_string((s1[len1]-'0'+carry)%10)+res;
        carry=(s1[len1]-'0'+carry)/10;
        len1--;
    }
    while(len2>=0){
        res=to_string((s2[len2]-'0'+carry)%10)+res;
        carry=(s2[len2]-'0'+carry)/10;
        len2--;
    }
    if(carry>0) res=to_string(carry)+res;
    return res;
}

int main(){
    int i;
    string s,temp;
    cin>>s;
    for(i=1;i<100;i++){
       cin>>temp;
       s=findsum(s,temp); 
    }
    for(i=0;i<10;i++) cout<<s[i];
    //cout<<"\n"<<s<<"\n";
}
