#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b,c;
    cin>>b;
    cin>>c;
    int val = pow(b,2)-4*a*c;
    double d = b*b-4*a*c;
    double root1 ;
    double root2 ;
    if(d>=0){
        double root1 = (-b+sqrt(val))/2*a;
     double root2 = (-b-sqrt(val))/2*a;
    if (root1== root2){
        cout<<"roots are equal"<<endl;
        cout<<root1;
    }
    else{
        cout<<"roots are distinct"<<endl;
        cout<<root1;
        cout<<root2;
    }
    }
    else if(d<0){
        cout<<"img roots";
        // root 1 = -b/2*a+sqrt(-val)/2*a
        cout<<-b/2*a<<"+"<<sqrt(-val)/2*a<<"i"<<endl;
        cout<<-b/2*a<<"-"<<sqrt(-val)/2*a<<"i"<<endl;
    }
    return 0;
}