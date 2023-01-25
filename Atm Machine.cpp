#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string data,data1,search;
int i=1;
int accountnumber,pin,count=0,count2=0;
string name,accountnumber1,record,search_name,all,num,searchaccountnumber,searchpinnumber;
char answer;
bool loop=1;
	void txt()
	{
		ifstream ifile("trans.txt");
		while(getline(ifile,all))
		{
			cout<<all<<endl;
		}
	}

int main()
{    int  option,option1,pin;
    double withdraw,money, accountnumber,deposit, balance = 0;
		    cout << endl << endl;
    cout<<  "      ****************Welcome To Atm Project***********"<<endl; 
	cout<<endl; 
 ifstream file("Atm.txt");
    while(true)
    {
    	cout<<"Account Number"<<endl;
		cin>>searchaccountnumber;
		cout<<"Enter the pin Number"<<endl;
    	cin>>searchpinnumber;
		ifstream infile("Atm.txt");
		while(getline(infile,num))
		{
			if(num==searchaccountnumber)
			{
				while(getline(infile,num))
				if(num==searchpinnumber)
				{
					count++;
					break;
				}
				
			}
			else
			continue;
		}
		if(count==0)
		{
			cout<<"Try again"<<endl;
			count2++;
			if(count2==3)
			{
				count2=0;
				exit(0);
			}
			continue;
		}
		else
		break;
	}
    while(file>>searchpinnumber)

        
    
	while (1) {
		    cout << endl << endl;
    cout << "                   **************Menu*****************" << endl;
    cout << "                   *       1. Check Balance          *" << endl;
    cout << "                   *       2. Deposit                *" << endl;
    cout << "                   *       3. Withdraw               *" << endl;
    cout << "                   *       4. Show  Transiction      *" << endl;
    cout << "                   *       5.Transfer Momey          *" << endl;
    cout << "                   *       6. Exit                   *" << endl;
    cout << "                   ***********************************" << endl;
//file make
ofstream file("Atm.txt",ios::app);
ofstream ifine("trans.txt",ios::app);
    cout<< "Press any option" << endl;
    cin>>option;
    switch (option){
	case 1:
	 cout << "Your current balance is $" << balance << endl;
            break;
		case 2:
		     cout << "Please Deposit money " << endl;
            cout << "$";
            cin >> deposit;
            balance += deposit;
            cout << "Your current balance is $ " << balance << endl;
		break;
		case 3:
	cout << "Please Withdraw money " << endl;
            cout << "$";
            cin >> withdraw;
            if (balance < withdraw)
                cout << "Balance is not enough" << endl;
            else
            {
                balance -= withdraw;
                cout << "Your current balance is $ " << balance << endl;
            }
            break;
         case 4:
    txt();
    break;
    case 5:
    	cout<<"Please transfer money"<<endl;
	 cout << "Your current balance is $" << balance << endl;    	
    	cout<<"Enter the Account Number"<<endl;
    	cin>>accountnumber;
    	cout<<"Enter the pin"<<endl;
    	cin>>pin;
    	cout<<"Enter the money"<<endl;
    	   	cout<<"$";
    	cin>>money;
 
    	 if (balance < money)
                cout << "Balance is not enough" << endl;
            else
            {
                balance -= withdraw;
                cout << "Your current balance is $ " << balance << endl;
            }
    case 6:
    	cout<<"do you want to close the program: ";
    	default:
    		cout<<"Wrong input"<<endl;
cin>>answer;
if(answer=='y' || answer =='Y')
exit(0);
main();
}
}
}
