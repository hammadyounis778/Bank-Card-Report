#include <iostream>
using namespace std;
class Account {
private:
double balance;
public:
Account(double initialBalance) {
if (initialBalance >= 0.0) {
balance = initialBalance;
} else {
balance = 0.0;
cout << "Initial balance invalid. Setting balance to 0." << endl;
}
}
void credit(double amount) {
if (amount > 0)
balance += amount;
else
cout << "Credit amount must be positive." << endl;
}
void debit(double amount) {
if (amount > balance) {
cout << "Debit amount exceeded account balance." << endl;
} else if (amount < 0) {
cout << "Debit amount must be positive." << endl;
} else {
balance -= amount;
}
}
double getBalance() const {
return balance;
}
};
int main() {
Account myAccount(1000.0);
cout << "Initial balance: " << myAccount.getBalance() << endl;
myAccount.credit(500.0);
cout << "After credit of 500: " << myAccount.getBalance() << endl;
myAccount.debit(300.0);
cout << "After debit of 300: " << myAccount.getBalance() << endl;
myAccount.debit(1500.0); 
return 0;
}