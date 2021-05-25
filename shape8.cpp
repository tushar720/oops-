# include <iostream>
using namespace std;
class shape
{
	public:
	virtual void numberOfSides ()
	{
		cout<<"base class is invocked"<<endl;
	}
};
class trapzoid : public shape
{
	public:
	void  numberOfSides()
	{
		cout<<"\n * derived class1 is invocked***"<<endl;
		cout<<"\n no of sides in trapzoid :"<<endl;
		cout<<"4 sides with one pair of parallel sides "<<endl;
	}
};
class triangle: public shape
{
	public:
	void  numberOfSides()
	{
		cout<<"\n **derived class2 is invocked*"<<endl;
		cout<<"\n number of sides in triangle"<<endl;
		cout<<"3"<<endl;
	}
};
class haxagon:public shape
{
	public:
	void numberOfSides()
	{
		cout<<"\n **derived class3 is invocked*"<<endl;
		cout<<"\n number of sides in hexagon is"<< endl;
		cout<<"6"<< endl;
	}
};
int main()
{
	shape *a;
	trapzoid b;
	triangle c;
	haxagon d;
	a=&b;
	a->numberOfSides();
	a =&c; 
	a->numberOfSides();
	a=&d;
	a->numberOfSides();
}
