#include <iostream>

using namespace std;

main()
{
	int uang;
	int a,a1,b,b1,c,c1,d,d1,e,e1,f,f1,g,g1,h,h1;
	int total;
	int koin;
	
	cout<<"masukan uang kembalian = "<<endl;
	cin>>uang;
	
	a=uang/50000;
	a1=uang%50000;
	b=a1/20000;
	b1=a1%20000;
	c=b1/10000;
	c1=b1%10000;
	d=c1/5000;
	d1=c1%5000;
	e=d1/2000;
	e1=d1%2000;
	f=e1/1000;
	f1=e1%1000;
	g=f1/500;
	g1=f1%500;
	h=g1/100;
	h1=g1%100;
	koin = g+h;
	total = a+b+c+d+e+f+g+h;
	
	cout<<"============================"<<endl;
	
	cout<<a<<" lembar 50.000"<<endl;
	cout<<b<<" lembar 20.000"<<endl;
	cout<<c<<" lembar 10.000"<<endl;
	cout<<d<<" lembar 5.000"<<endl;
	cout<<e<<" lembar 2.000"<<endl;
	cout<<f<<" lembar 1.000"<<endl;
	cout<<g<<" koin 500"<<endl;
	cout<<h<<" koin 100 perak"<<endl;
	
	//cout<<"total= "<<total = a+b+c+d+e+f <<"lembar";
	cout<<"total = "<<total <<" pecahan "<<endl; 
	cout<<"terima kasih"<<endl;
	//getch();
}
