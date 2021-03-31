 #include <iostream>
using namespace std;
class Bank
{
	private:
		int accountno;
		char name[50];
		float balance,withdraw;
    public:
    	void openaccount()
    	{
    		cout<<"enter the name";
    		cin>>name;
    		cout<<"enter account no";
    		cin>>accountno;
    		cout<<"enter the balance";
    		cin>>balance;
    		
		}
		void showaccount()
		{
			 
        cout << "account no " <<accountno<<"\n";
        cout << "Name: " << name << "\n";
        cout << "balance " <<balance <<"\n";
		}
		void deposit()
		{
			long amt;
			cout<<"enter the amount to deposit";
			cin>>amt;
			balance = balance+ amt;
		}
		void withdrawl()
		{
			cout<<"enter the amount u with draw";
			cin>>withdraw ;
			if ( withdraw<= balance )
            balance = balance - withdraw;
        else
            cout << "Less Balance..." << endl;
		}
int search(int a)
{
	if(accountno == a)
	{
		showaccount();
		return (1);
	}
	else
	return (0);
}
};
int main()
{
	Bank ob[3];
	int found = 0,a,ch,i;
	for(i=0;i<=2;i++)
	{
		ob[i].openaccount()	;	
	}
	do{
		cout<<"1 display all"<<"2 by acc no "<<"3 deposit "<<"4 withdrawl "<<"exit";
		cout << "Please input your choice: ";
        cin >> ch;
         switch (ch) {
        case 1:
            for (i = 0; i <= 2; i++) {
               ob[i].showaccount();
            }
            break;
        case 2: 
            cout << "account no";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = ob[i].search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: 
            cout << "Account Number To Deposit Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = ob[i].search(a);
                if (found) {
                   ob[i].deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
            case 4:
            	cout << "Account Number To withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = ob[i].search(a);
                if (found) {
                    ob[i].withdrawl();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
            default:
            cout << "Wrong Option" << endl;
        }
    } while (ch != 4);
		
	return(0);
}
