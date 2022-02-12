#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int i,n, ccount;
    double temp,t,d;

    while(cin>>n){
            temp=0.0;
        for(i=0;i<n;i++){
            cin>>t;
            cin>>d;

            if(i==0){
                cout<<"1\n";
                temp = d/t;
            }
            else{
                if((d/t) > temp){
                    cout<<i+1<<"\n";
                temp = d/t;
                }
            }

        }

    }

    return 0;
}
