#include <iostream>
using namespace std;
int main(){
    char a,b,c;
    cin>>a>>b>>c;
    char* pa = &a;
    char* pb = &b;
    char* pc = &c;
    if(int(*pa)<int(*pb) && int(*pa)<int(*pc)){
        cout<<*pa<<endl;
    }
    else if(int(*pb)<int(*pa) && int(*pb)<int(*pc)){
        cout<<*pb<<endl;
    }
    else{
        cout<<*pc<<endl;
    }

    return 0;
}