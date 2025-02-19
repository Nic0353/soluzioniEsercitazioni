#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int& max = (a>b && a>c)?a:((b>c)?b:c);
    max++;
    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<" non si possono usare gli if perche' non si può assegnare in seguito il valore al riferimento 'max'."<<endl;
    return 0;
}