#include <iostream>
using namespace std;

int fact(int x){
    if(x==0 || x==1) 
        return 1;
    else 
        return x*fact(x-1);

}

int check(int x){
    int sum1=0, temp=x;

    while(x>0){
        sum1+=(fact(x%10));
        x/=10;
    }

    if(sum1%temp==0) return 1;
    else return 0;

}


int main() {
    int n, i, sum=0;
    cin>>n;

    for(i=10 ; i<=n ; i++){
        if(check(i)==1) sum+=i;
    }

    cout<<sum<<endl;
    return 0;
}
