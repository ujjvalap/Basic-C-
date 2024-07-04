#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,s,area;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    //calculate the area for using heron formula
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area of thr trangle"<<" "<<area;
    
    return 0; 
}