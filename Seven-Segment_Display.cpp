#include<bits/stdc++.h>
using namespace std;

int main(){
    int disp[10]={6,2,5,5,4,5,6,3,7,6};
    int n;
    cin >> n;

    while(n--){
        string no;
        cin>>no;
        int totallines=0;
        
        for(int i=0;i<no.length();i++){
            totallines+=disp[no[i]-48];}
        
        if(totallines%2!=0){
            cout<<7;
            totallines-=disp[7];}
        
        for(int i=0;i<totallines/2;i++)
        cout<<1;
        cout<<endl;
    }
    
    return 0;
}
