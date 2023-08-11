#include <iostream>
using namespace std;
int main()
{
    int t,n,c=0,sum=0,num=1;
    cin>>t>>n;
    while(1){
        sum=t*num;num++;c++;
        if(sum%10==0){
            cout<<c<<endl;
            break;
        }
        else if(sum%10==n){
            cout<<c<<endl;
            break;
        }

    }
}