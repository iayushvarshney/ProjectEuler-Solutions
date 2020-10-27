#include <iostream>
using namespace std;


int main(){
    long int t, n, sum1, sum2;
    cin >> t;
    while(t--){
        sum1=0;
        sum2=0;

        cin >> n;

        for(int i=1 ; i<=n ; i++){
            sum1+=i;

            sum2+=(i*i);
        }

        cout<<(sum1*sum1)-sum2<<endl;
    }
    return 0;
}
