/*Problem: Find the sum of all the even-valued terms in the Fibonacci sequence which do not exceed four million.
Author: Amit Kumar(kumaramit96321@gmail.com)*/

/*Fibonacci series is: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
we can see that every third no is even and we also know that F(n) = F(n-1) + F(n-2)
= F(n-2)+F(n-3)+F(n-2)=2 F(n-2) + F(n-3)
= 2(F(n-3)+F(n-4))+F(n-3))=3 F(n-3) + 2 F(n-4)
= 3 F(n-3) + F(n-4) + F(n-5) + F(n-6)
= 4 F(n-3) + F(n-6)
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a=2,b=8,temp,sum=2;  //1st even no is 2 and 2nd even no is 8
    while(b<=4000000){
        if(b%2==0) sum+=b;
        temp=a;
        a=b;
        b=4*a+temp;
    }
    cout<<sum<<"\n";
}
