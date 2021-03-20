#include<iostream>
using namespace std;
class xyz
{
public:
inline long power(int b, int p)
{
    long i, res=1;
    for(i=1; i<=p; i++)
    res=res*b;
    return res;
}
};
int main()
{
   xyz ob;
      int base, exponent;
   cout<<" enter base value: ";
   cin>>base;
   cout<<" enter exponential value: ";
   cin>>exponent;
   cout<<" Result is: "<<ob.power(base, exponent);
}
