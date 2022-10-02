#include <iostream>
using namespace std;

int main()
{

    int n,c=0;
    cin>>n;
    long double w[n],h[n];
    for(int i=0;i<n;i++){
        cin>>w[i]>>h[i];}

    double d=0,e=0;
    for(int i=0;i<n;i++){
        d=w[i]/h[i];
        e=h[i]/w[i];
        if(d>=1.6 && d<=1.7)
            c++;
        if(e>=1.6 && e<=1.7)
            c++;
    }
    cout<<c;
}
