#include <iostream>

using namespace std;


int main(){
    int t;
    cin >> t;
    
    for(int a0 = 0; a0 < t; a0++){
        long n;
        long  a=1, b=2, c=3, sum=2;
        
        cin >> n;
        
        while(c<=n){
            
            if(c%2==0) sum+=c;
            
            a=b;
            b=c;
            c=a+b;
        }
        
    cout<<sum<<endl;
        
    }
    
    
    return 0;
}
