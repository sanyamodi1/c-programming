Returning the 10's complement of a number.
input - decimal digit 
output - decimal digit which is the complement of the input one.

#include<iostream>
using namespace std;
int main(){
    int n ;
    int mask = 0;
    cout<<"enter the number";
    cin>>n;
    int m = n;
    while(m!=0){
        mask = (mask << 1) | 1;
        m = m>>1;
    }
    int ans = (~n)& mask;
    cout<<ans;
}
