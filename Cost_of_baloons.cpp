#include<iostream>
using namespace std;

int main(){
    int cases,no,p1,p2,m1,m2,sum1,sum2,t1,t2;
    cin>>cases;
    
    for(int i=0;i<cases;i++){
        cin>>p1>>p2;
        cin>>no;
        
        for(int j=0;j<no;j++){
            cin>>m1>>m2;
            sum1=sum1+m1;
            sum2=sum2+m2;
        }

        t1=p1*sum1 + p2*sum2;
        t2=p2*sum1 + p1*sum2;
        if(t1<t2)
            cout<<t1<<endl;
        else
            cout<<t2<<endl;
            
        sum1=0;
        sum2=0;
        t1=0;
        t2=0;
    }
    return 0;   
}
