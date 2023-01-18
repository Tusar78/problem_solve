#include <iostream>
using namespace std;

class account {
  long accountNum;
  string userName;
  double balance;
public:
  void createAccount(long acNum, string userN, double blnc) {
    accountNum = acNum;
    userName = userN;
    balance = blnc;
  }

  void deposit (double depositAmount) {
    if (depositAmount >= 500) {
      balance += depositAmount;
    } else {
      cout << "Please enter grater then 500";
    }
    cout << "\nYour Current Balance is: " << balance;    
  }

  double withdraw (double withdrawAmount) {
    balance -= withdrawAmount;
    cout << "\nYour Current Balance is: " << balance;
  }

  double getBalance() {
    return  balance;
  }
};


int main() {
  int flag;
  double userAmmount;
  string userName;
  long accountNum;

  cout << "Enter Account number : ";
  cin >> accountNum;
  cout << "Enter Account name: ";
  cin >> userName;

  account myAccount;
  myAccount.createAccount(accountNum, userName, 500.00);

  cout << "\nYour current balance is: " << myAccount.getBalance() << "\n";
  cout << "\nPress 1 to deposit and \nPress 2 to Withdraw \n";
  cin >> flag;
  if (flag == 1) {
    cout << "\nEnter your deposit Amount: ";
    cin >> userAmmount;
    myAccount.deposit(userAmmount);
  } else {
    cout << "\nEnter an amount to Withdraw: ";
    cin >> userAmmount;
    myAccount.withdraw(userAmmount);
  }
}

Enter Account number : 326478
Enter Account name: Tusar

Name: Tusar.
AcNumber: 326478
AcBalance: 500

Now =>
Press 1 to deposit,
Press 2 to Withdraw
1

Enter your deposit Amount: 600

Now your current Balance is: 1100