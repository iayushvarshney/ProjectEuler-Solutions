#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int LCM(int a, int b){
    
    for(int i=1;;){
        if((b*i)%a==0)
            return (b*i);
        i++;
      }
}
    
int main() {
    int t,N;
    cin>>t;
    while(t--){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int l=1;
    cin>>N;
    for(int k=2 ; k<=N ; k++){
        l=LCM(l,k);
    } 
    cout<<l<<endl; }
    return 0;
}
