#include <iostream>
using namespace std;
int main()
{
    int r,b;
    cin>>r>>b;
    if(r==b){
        cout<<r<<" "<<0<<endl;
    }else if(r>b){
        cout<<b<<" "<<(r-b)/2<<endl;
    }else{
        cout<<r<<" "<<(b-r)/2<<endl;
    }
}