#include <iostream>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
       if(n==1){
        cout<<2<<endl;
       }else if(n%3==0){
            cout<<n/3<<endl;
       }else if(n%3==1){
            int temp=(n-4)/3;
            cout<<2+temp<<endl;
       }else if(n%3==2){
            int temp=(n-2)/3;
            cout<<1+temp<<endl;
       }
       
    }


    return 0;
}