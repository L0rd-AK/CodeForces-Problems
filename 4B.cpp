#include <iostream>
#include <algorithm>
#include <cmath>
#include <string.h>
using namespace std;

#define in cin
#define out cout
#define end endl
#define f(j,n) for(int i=j;i<n;i++)
#define f1(j,n) for(int i=j;i<=n;i++)
#define fr(i,n) for(int j=i;j<n;j++)
#define frj1(n) for(int j=1;j<=n;j++)

int main() 
{
  long long int m,n,min_read=0,max_read=0,r,d,h=0,max_h,min_h;
  char ch;
  string s;
  in>>d>>h;
  int max[d],min[d];
  f(0,d) {max[i]=0,min[i]=0;}
  f(0,d)
  {
    in>>min[i]>>max[i];
    max_read+=max[i];
    min_read+=min[i];
    
  }
  if(h>=min_read&&h<=max_read) {
    int i=0;
     while(min_read<h){
        while(min[i]<max[i]&&min_read<h){
          min[i]++;min_read++;
        }
        i++;
     }
    }
  else{
    out<<"NO"<<end;
    return 0;
  }
  out<<"YES"<<end;
  f(0,d) out<<min[i]<<" ";
  


  return 0;
}


