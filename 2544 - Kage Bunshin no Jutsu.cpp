#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int n, ccount;

    while(cin>>n){
        if(n==1){
            cout<<"0\n";
        }
        else{
                ccount = 0;
            while(n != 1)
        {
            n = n/2;
            ccount++;
        }

            cout<<ccount<<"\n";
        }

    }

    return 0;
}
