#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int i,id,n;
    int temp_id, flag, ccount;

    while(cin>>n){
        cin>>id;
        ccount = 0;

        for(i=0;i<n;i++)
        {
            cin>>temp_id; cin>>flag;
            if(flag == 0)
            {
                if(temp_id==id)
                    ccount++;
            }
        }

        cout<<ccount<<"\n";


    }

    return 0;
}
