#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int x,y,w,z;
    cout<<"x:";
    cin>>x;
    cout<<"y:";
    cin>>y;
    w=x+y;
    cout<<"x un y summa ir "<<w;
    z=x*y;
    for(int i=0;i<z;i++){
        cout<<"*";
    }
    getch();
 return 0;
}
