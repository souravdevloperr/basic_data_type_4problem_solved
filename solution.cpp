#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a;
    long long b;
    char ch;
    float f;
    double d;
    scanf("%d %lld %c %f %lf",&a, &b, &ch, &f, &d);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<ch<<endl;
    cout<<setprecision(16)<<f<<endl;//they take 16 digit
    
    cout<<d<<endl;
    return 0;
}
