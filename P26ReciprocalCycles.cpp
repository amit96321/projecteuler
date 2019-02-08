/*Problem:Find the value of d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.
Author: Amit Kumar(kumaramit96321@gmail.com)

Logic: first we are storing all numbers greater that i that we get while dividing it with i and once we get
the number already stored in map we stop. then again we clear the map and again we store the same number in map
while incrementing the count and once we get the number stored in map we return the value of count
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    map<int,int> m;
    int res=0,count,i,j,temp,flag,value;
    for(i=2;i<1000;i++){
        m.clear();
        j=10;
        flag=0;
        count=0;
        while(!m[j]){
            m[j]=1;
            if(j<i){
               j*=10;     // if number is less than i we multiply it by 10
            } 
            else{           //else multiply the modulo of j with i and then multiply it with 10
              j%=i;
              if(j==0){     //whenever we get a number divisivble by i. it mean fraction is not recurring
                  flag=1;
                  break;
              } 
              else j*=10;
            }
        }
        if(flag==0){
            m.clear();
            while(!m[j]){
                count++;
                m[j]=1;
                if(j<i){
                   j*=10; 
                } 
                else{
                  j%=i;
                  if(j==0){
                      flag=1;
                      break;
                  } 
                  else j*=10;
                }
            }
        }
        if(count>res){
           res=count;
           value=i;
        }
    }
    cout<<value<<"\n";
    return 0;
}
