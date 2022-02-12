#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int i,n,temp,a_min,a_max, ccount;

    while(cin>>n){
        ccount = 0;
        cin>>a_min;
        cin>>a_max;

        for(i=0;i<n;i++){
            cin>>temp;
            if(temp >= a_min && temp <= a_max){
                ccount++;
            }
        }
        cout<<ccount<<"\n";

    }

    return 0;
}
