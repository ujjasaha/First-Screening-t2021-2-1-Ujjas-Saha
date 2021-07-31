#include <iostream>
using namespace std;
int main(){
    int n,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if (arr[i]%1==0){
            p= p+ 1;
        }
        if (arr[i]%2==0){
            q= q+ 1;
    }
    if (arr[i]%3==0){
            r= r+ 1;
    }
    if (arr[i]%4==0){
            s= s+ 1;
    }
    if (arr[i]%5==0){
            t= t+ 1;
    }
    if (arr[i]%6==0){
            u= u+ 1;
    }
    if (arr[i]%7==0){
            v= v+ 1;
    }
    if (arr[i]%8==0){
            w= w+ 1;
    }
    if (arr[i]%9==0){
            x= x+ 1;
    }else{
        cout<<"Kindly check the input"<<endl; 
    }
    }
    cout<<"1:"<<p<<","<<"2:"<<q<<","<<"3:"<<r<<","<<"4:"<<s<<","<<"5:"<<t<<","<<"6:"<<u<<","<<"7:"<<v<<","<<"8:"<<w<<","<<"9:"<<x<<","<<endl;
}
