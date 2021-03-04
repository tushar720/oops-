#include <iostream>
using namespace std;
void power(double m, int n=2)
{
        long double power = 1;
    int i;
     /* Multiply base, exponent times*/
    for(i=1; i<=n; i++)
    {
        power = power * m;
    }
cout <<"\n"<<m <<"\t" << n <<"\t" << power;
   
   }
int main()
{ int n;
double m;
    /* Input base and exponent from user */
    cout <<"Enter m: ";
    cin >> m;
    
cout <<"Enter n: ";
    cin>>n;
power(m,n); 
power(m);   

    return 0;
}

