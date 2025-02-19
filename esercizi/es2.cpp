#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double *pa = &a;
    double *pb = &b;
    double *pc = &c;

    if(*pa>*pb && *pa>*pc){
        cout<<*pa<<endl;
    }
    else if(*pb>*pa && *pb>*pc){
        cout<<*pb<<endl;
    }
    else{
        cout<<*pc<<endl;
    }






    return 0;
}