/*Problem:How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)? 
given 1 Jan 1900 was a Monday.
Author: Amit Kumar(kumaramit96321@gmail.com)
*/

#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> m;

int main(){
    int d=1,m=1,y=1900,w=1,cnt=0;
    while(y<2001){
        if(y>=1901 && d==1 && w==7) cnt++;
        if(d<30 && (m==4 || m==6 || m==9 || m==11)) d++;
        else if(d<31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)) d++;
        else if(d<28 && m==2 && y%4!=0) d++;
        else if(d<29 && m==2 && y%4==0) d++;
        else if(m<12){
          m++;d=1;  
        } 
        else{
           y++;m=1;d=1; 
        }
        if(w<7) w++;
        else w=1;
    }
    cout<<cnt<<"\n";
}
