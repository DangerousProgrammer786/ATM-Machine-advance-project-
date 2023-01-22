#include<iostream>
#include<fstream>
using namespace std;
string data,data1;
int accountnumber;
	void txt()
	{
	ifstream ifile("trans.txt");
	 getline(ifile,data);
	 cout<<data;
	 ifile>>accountnumber;
	 cout<<endl;
	 cout<<accountnumber;
    ifile.close(); 
	}

int main()
{    int  option, pin;
    double withdraw,accountnumber,deposit, balance = 0;
    string name, search_name;
	while (1) {
		    cout << endl << endl;
    cout<<  "      ****************Welcome To Atm Project***********"<<endl;
    cout<<endl;
    cout << "                   **************Menu*****************" << endl;
    cout << "                   *       1. Creat Acoount          *" << endl;
    cout << "                   *       2. Check Balance          *" << endl;
    cout << "                   *       3. Deposit                *" << endl;
    cout << "                   *       4. Withdraw               *" << endl;
    cout << "                   *       5. Show  Transiction      *" << endl;
    cout << "                   *       6. Search user            *" << endl;
    cout << "                   *       7. Exit                   *" << endl;
    cout << "                   ***********************************" << endl;
//file make
ofstream file("Atm.txt",ios::app);
ofstream ifine("trans.txt",ios::app);
    cout<< "Press any option" << endl;
    cin>>option;
    switch (option){
    	
		case 1:
		cout << "Enter Name" << endl;
            cin >> name;
            cout << "Enter Account number" << endl;
            cin >> accountnumber;
            cout << "Enter Account Pin" << endl;
            cin >> pin;
            cout << "Enter Balance" << endl;
            cout << "$";
            cin >> balance;
            cout << endl;
            file<< name << endl;
            file<< accountnumber << endl;
            file<< pin << endl;
            file<< balance<<endl;
            file.close();
            cout << "Congratulations! Your Account is Created" << endl;
            break;
		case 2:
	 cout << "Your current balance is $" << balance << endl;
            break;
		case 3:
		     cout << "Please Deposit money " << endl;
            cout << "$";
            cin >> deposit;
            balance += deposit;
            cout << "Your current balance is $ " << balance << endl;
		case 4:
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
         case 5:
    txt();
    break;
case 6:
    ifstream file("Atm.txt");
    cout << "Enter the name of user" << endl;
    cin >> search_name;
    while (file >> name)
    {
        if (name == search_name)
        {
            cout << "User found: " << name << endl;
            file>>accountnumber;
            cout<<accountnumber;
            cout<<endl;
            file>>balance;
            cout<<balance;
            break;
        }
    }
    if (file.eof() && name != search_name){
        cout << "User not found";
        break;
    }
    file.close();
    break;
}
}
}

