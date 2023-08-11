#include <iostream>
using namespace std;
int main()
{
    int r,c,C=0;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i%2==1) cout<<"#";
            else if(i%2==0&&j==c&&C%2==0) {cout<<"#";}
            else if(i%2==0&&j==1&&C%2==1) {cout<<"#";}
            else cout<<".";
        }if(i%2==0) C++;
        cout<<endl;
    }
}