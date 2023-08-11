#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    
        int ans=0;
        while(n>=100){
            n=n-100;
            ans++;
        }
        while(n>=20){
            n=n-20;
            ans++;
        }
        while(n>=10){
            n=n-10;
            ans++;
        }
        while(n>=5){
            n=n-5;
            ans++;
        }
        while(n>=1){
            n=n-1;
            ans++;
        }
        cout<<ans<<endl;
    
}