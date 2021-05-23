#include <iostream>
using namespace std;

class time{
    private:
        int h;
        int m;
        int s;
    public:
        void gettime(void);
      
        time add(time t1){
            time temp;
            temp.s = s + t1.s;
            temp.m = m + t1.m;
            temp.h = h + t1.h;

        
            return temp;
        }
 
        void display(){
            cout<<"H:M:S = "<<h<<":"<<m<<":"<<s<<endl;
        }
};
void time::gettime(void)
{
	cout<<"enter time "<<endl;
	cout<<"enter hours";
	cin>>h;
	cout<<"enter minutes";
	cin>>m;
	cout<<"enter seconds";
	cin>>s;
}
	
int main(){
    class time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    cout<<"Two times are:"<<endl;
    t1.display();
    t2.display();
    t3 = t1.add(t2);
    cout<<"SUM is:"<<endl;
    t3.display();
    return 0;
}
