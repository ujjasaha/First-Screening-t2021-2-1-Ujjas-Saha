#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%2!=0){
    for (int a=1;a<=x;a++){
        int n= (2*a-1);
        cout<<n<<",";
    }
    }
    else{
        x=x-1;
       for (int a=1;a<=x;a++){
        int n= (2*a-1);
        cout<<n<<",";
    }   
    }
}
