#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double *pa = &a;
    double *pb = &b;
    double *pc = &c;

    double **ppr = NULL;
    if(*pa>*pb && *pa>*pc){
        ppr = &pa;
    }
    else if(*pb>*pa && *pb>*pc){
        ppr = &pb;
    }
    else{
        ppr = &pc;
    }
    cout<<**ppr<<endl;






    return 0;
}