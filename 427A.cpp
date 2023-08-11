#include <iostream>
using namespace std;
int main()
{
    int t,n,p=0,unnotised=0;cin>>t;
    while(t--){
        cin>>n;
        if(n>=1) p+=n;
        else if(n==-1){
            if(p==0) unnotised++;
            else p--;
        }
    }
    cout<<unnotised<<endl;
}