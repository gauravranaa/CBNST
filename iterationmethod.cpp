#include <bits/stdc++.h>
using namespace std;

float raj(float);
main()
{
    float a[100],b[100],c=100.0;
    int i=1,j=0;
    b[0]=(cos(0)-3*0+1);
    cout<<"\nEnter initial guess:\n";
    cin>>a[0];
    cout<<"\n\n The values of iterations are:\n\n ";
    while(c>0.00001)
    {
        a[j+1]=raj(a[j]);
        c=a[j+1]-a[j];
        c=fabs(c);
        cout<<j<<a[j]<<"\n";
        j++;

    }
    cout<<"\n The root of the given function is "<<a[j];
}
float raj(float x)
{
    float y;
    y=(cos(x)+2)/3;
    return y;
}
