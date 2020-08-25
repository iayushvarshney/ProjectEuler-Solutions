#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int N ,T,val,sum,diff;
    cin>>T;
    while(T--){
        cin>>N;
        sum=0;val=0;
        for(int i=1;i<=N;i++){
            val=val+(i*i);
            sum+=i;
        }
        sum*=sum;
        diff=abs(sum-val);
        cout<<diff<<endl;
    }
    return 0;
}
