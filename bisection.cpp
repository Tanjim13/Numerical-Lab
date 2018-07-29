#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double func(double x)
    {
        double a=x*x-4.0;
        return a;
    }
int main()
{
cout.precision(5);
cout.setf(ios::fixed);

double a,b,c=0,fa,fb,fc,es;
a:cout<<"Enter the initial value\na = ";
cin>>a;
cout<<"\nb = ";
cin>>b;
cout<<"Enter the degree of accuracy required"<<endl;
cin>>es;
if(func(a)*func(b)>0)
{
    goto a;
}
else{
int iter=0;
double temp=0.0;
cout<<"Iter"<<setw(10)<<"lo"<<setw(10)<<"hi"<<setw(12)<<"mid"<<setw(20)<<"relativeError"<<setw(12)<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
while(fabs(a-b)>=es)
{temp=c;
c=(a+b)/2.0;
fa=func(a);
fb=func(b);
fc=func(c);
iter++;
if(iter>1)
cout<<iter<<setw(12)<<a<<setw(12)<<b<<setw(12)<<c<<setw(12)<<fabs((c-temp)/c)*100.00<<endl;
if(iter==1)
cout<<iter<<setw(12)<<a<<setw(12)<<b<<setw(12)<<c<<setw(12)<<" "<<endl;
if(fc==0){
cout<<"The root of the equation is "<<c<<endl;
return 0;
}
else if(fa*fc<0)
b=c;
else
a=c;
}
}

cout<<"The root of the equation is "<<c<<endl;
return 0;
}
