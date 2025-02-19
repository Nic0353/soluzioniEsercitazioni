#include <iostream>
using namespace std;
int main(){
    int a = 0;
    int b = 0;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    int& r = a;
    int* pa = &a;
    int* pb = &b;
    int** ppa = &pa;
    cin>>a>>b;
    cout<<*pa<<" "<<*pb<<endl;
    cout<<pa<<" "<<pb<<endl;
    cout<<*ppa<<endl;
    cout<<**ppa<<endl;
    c1 = *pa;
    c2 = **ppa;
    c4 = r;
    cout<<c1<<" "<<c2<<" "<<c4<<endl;
    cout<<"------------------------------------fine esercizio 4"<<endl;
    a +=3;
    cout<<a<<endl;
    *pa += 3;
    cout<<a<<endl;
    **ppa += 3;
    cout<<a<<endl;
    r+=3;
    cout<<a<<endl;
    a = c1;
    cout<<"cambio pa=pb"<<endl;
    pa = pb;
    a +=3;
    cout<<a<<endl;
    *pa += 3;
    cout<<a<<endl;
    **ppa += 3;
    cout<<a<<endl;
    r+=3;
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}