You are given an unsigned char calculate the no of '1's in its binary representation


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int count = 0 ;
    while(n!=0){
        if (n&1){
            count++;
        }
        n = n>>1;
    }
    cout<<count;
}  
