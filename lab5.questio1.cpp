#include<iostream>
using namespace std;
int arsum(int n, int x[])
{   int s,i;
    s=0;
   for(i=0;i<n;i++)
      s=s+x[i];
  return s;
}
int main() {
    int a,sum,j,y[a];
    cout<<"enter the size of array";
    cin>>a;
    cout<<"enter elaments of array";
    for(j=0; j<a; j++)
       cin>>y[j];
    sum=arsum(a,y);
    cout<<"sum of the array is="<<sum;
    return 0;
}
