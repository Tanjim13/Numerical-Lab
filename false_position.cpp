#include<stdio.h>
#include<stdlib.h>
#include "math.h"
#include <bits/stdc++.h>

using namespace std;
double f(double x)
{
    return (x*x*x-5*x-7);
}

int main()
{
double x0,x1,x2,k=0;

do{
    printf("Enter the range...");
    cin>>x0>>x1;
    }while((f(x0)*f(x1))>0);
    cout<<"Iter"<<setw(18)<<"x0"<<setw(18)<<"x1"<<setw(18)<<"x2"<<setw(18)<<"func(x2)"<<endl;
    do{
    k++;
    x2=x0-((f(x0)/(f(x1)-f(x0)))*(x1-x0));

    cout<<k<<setw(18)<<x0<<setw(18)<<x1<<setw(18)<<x2<<setw(18)<<f(x2)<<endl;
    if(f(x2) > 0)
    x1=x2;
    else
    x0=x2;

    }while(fabs(f(x2)) >.0001);


}
