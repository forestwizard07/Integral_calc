#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double function(double n);
    double a,b;
    cin>>a>>b;
    int N = 10000; //number of trials (more trials =>more accurate)
    int n;
    double sum=0,ans=0;
    for(n=1;n<=N;n++){
        sum+=function(a+((n-(1/2))*((b-a)/N)));
    }
    ans = ((b-a)/N)*sum;
    printf ("%.4f",ans);
    return 0;
}

double function(double n){                //the function can be edited here
    return (sin(n)/n);
    }
