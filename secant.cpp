#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double func(double x)
{
    double a=x*x*x-8.0;
    return a;
}
int main()
{
    cout.precision(6);
    cout.setf(ios::fixed);
    double a,b,c,es,temp;
    int iter=1;
    cout<<"Enter the initial value\na = ";
    cin>>a;
    cout<<"\nb = ";
    cin>>b;
    temp=a;
    cout<<"Enter the degree of accuracy required"<<endl;
    cin>>es;
    cout<<"Iter"<<setw(18)<<"a"<<setw(18)<<"b"<<setw(18)<<"c"<<setw(18)<<"func(c)"<<setw(18)<<"|cn-c|"<<endl;
    cout<<"-------------------------------------------------------------------------------------------"<<endl;
    while(fabs(b-temp)>es)
    {
        temp=b;
        c=b-(b-a)/(func(b)-func(a))*func(b);
        cout<<iter<<setw(18)<<a<<setw(18)<<b<<setw(18)<<c<<setw(18)<<func(c)<<setw(18)<<fabs(b-c)<<endl;
        a=b;
        b=c;
        iter++;
        if(func(c)==0)
        {
            cout<<"The root of the equation is "<<c<<endl;
            return 0;
        }
    }
     cout<<"The root of the equation is "<<c<<endl;
    return 0;
}
