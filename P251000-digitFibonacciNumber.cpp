/*Problem:What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
Author: Amit Kumar(kumaramit96321@gmail.com)
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string x="1",y="1",temp;
    int i,len1,len2,carry,term=2;
    while(y.length()<1000){
        term++;
        carry=0;
        len1=x.length()-1;
        len2=y.length()-1;
        temp="";
        while(len1>=0 && len2>=0){
            temp=to_string(((x[len1]-'0')+(y[len2]-'0')+carry)%10)+temp;
            carry=((x[len1]-'0')+(y[len2]-'0')+carry)/10;
            len1--;len2--;
        }
        while(len1>=0){
            temp=to_string(((x[len1]-'0')+carry)%10)+temp;
            carry=((x[len1]-'0')+carry)/10;
            len1--;
        }
        while(len2>=0){
            temp=to_string(((y[len2]-'0')+carry)%10)+temp;
            carry=((y[len2]-'0')+carry)/10;
            len2--;
        }
        if(carry>0) temp=to_string(carry)+temp;
        x=y;
        y=temp;
    }
    cout<<term<<" "<<"\n";
}
