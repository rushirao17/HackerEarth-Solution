#include<bits/stdc++.h>
using namespace std;

int display(int a[],int m,int n){
    int j=0,count=0;
    for(int i=0;i<m;i++){
        j=j+a[i];
        if(j<=n){
            count=count+1;}
            else{
                break;
            }
        }
        return count;
}

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);
        int h=display(a,m,n);
        cout<<h<<endl;
    }
    return 0;
    
}
