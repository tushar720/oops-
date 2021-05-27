# include <iostream>
using namespace std;

class constructor
{
	private:
	int a,b,c;
	
	public:
	constructor(int b1, int c1)
	{
		b=b1;
		c=c1;
	}
	int getx()
	{
		return b;
	}
	int gety()
	{
		return c;
	}

    
    /* Copy constructor */
    constructor (const constructor &sam)
    {
        b = sam.b;
        c = sam.c;
    }
    
    void display()
    {
        cout<<b<<" "<<c<<endl;
    }
	
};
int main()
{
		
		int a, b,c;
		cout<<" enter any two no for parameterized  constructor \n";
		cin>>b>>c;

	    constructor p1(b,c);
	    cout<<" parameterised constructor";
	    
        cout << "p1.b = " << p1. getx() << ", p1.c = " << p1.gety();
       cout<<" \n enter any two no for copy constructor \n ";
       cin>>a>>b;
       constructor obj1(a,b);    
       constructor obj2 = obj1;      
      cout<<"Normal constructor : ";
      obj1.display();
      cout<<"Copy constructor : ";
      obj2.display();
      cout<<" this is what we call"<<endl<<       " Constructor Overloading";
       
return 0;
}


