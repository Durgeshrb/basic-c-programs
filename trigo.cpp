#include<iostream>
using namespace std;

int cosx();
int sinx();

float e=0,d=0,x;  //declaring global var 

int main()
{
	cout<<"enter value of x in degree:";
	cin>>x;

	x=x*(3.14159/180);	//converting degree into radian
	cout<<"Its radian value is:"<<x;		

	cosx();			//calling cos x function
	sinx();			//calling sin x finction

	float a,b,tan;
	a=::d;
	b=::e;

	tan=a/b;
	cout<<"\ntan("<<x<<")="<<tan<<"\n";	//tanx
	cout<<"\ncot("<<x<<")="<<1/tan<<"\n";	//cotx
	cout<<"\ncosec("<<x<<")="<<1/a<<"\n";	//cosecx
	cout<<"\nsec("<<x<<")="<<1/b<<"\n";	//secx
}
//cosx....................................................
int cosx()
{
	float f=1,p=1,e1=0,e2=0;
	int i,count=0;
	
	for(i=1;i<50;i++)
	{
		f=f*i;
		p=p*x;
		e=(p/f);		
		if (i%2==0)	//taking only odd series
		{	
			if(count%2==0)
			{
				e1=e1+e; //positive series
			}
			
			if(count%2==1)
			{
				e2=e2+e;  //negative series
			}
		count++;
		}
		
	
		
	}
	e=1-e1+e2;		//subtracting positive from negative
	cout<<"\n\ncos("<<x<<")="<<e<<"\n";
	
}
//sinx..........................................................
int sinx()
{
	float f=1,p=1,e1=0,e2=0;
	int i,count=0;
	
	for(i=1;i<50;i++)
	{
		f=f*i;
		p=p*x;
		d=(p/f);		
		if (i%2==1)	//taking only odd series
		{	
			if(count%2==0)
			{
				e1=e1+d; //positive series
			}
			
			if(count%2==1)
			{
				e2=e2+d;  //negative series
			}
		count++;
		}
		
	
		
	}
	d=e1-e2;		//subtracting positive from negative
	cout<<"\nsin("<<x<<")="<<d<<"\n";
	
}

