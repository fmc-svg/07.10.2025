#include <iostream>
using namespace std;
int main() {
    double n;
    cin>>n;
    double sum1 = 0,sum2 = 0,sum3 = 0;
    for (int i = 0;i=n;++i) {
        string surname,name;
        int a,b,c;
        cin>>surname,name,a,b,c;
        sum1 += a;
        sum2 += b;
        sum3 +=c;
    }
    cout<<sum1/n<< ""<<sum2/n << ""<<sum3/n;
}