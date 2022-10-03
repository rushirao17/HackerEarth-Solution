#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int D,Oc,Of,Od,Cs,Cb,Cm,Cd; 
    cin>>D>>Oc>>Of>>Od>>Cs>>Cb>>Cm>>Cd;

    if(Oc + (D-Of)*Od<=Cb + (D*Cd) + (D/Cs)*Cm)
        cout << "Online Taxi";

    else 
        cout << "Classic Taxi";

}
