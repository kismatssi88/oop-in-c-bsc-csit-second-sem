#include <iostream>
using namespace std;
 
class Account {
protected:
    string accNumber;
    double balance;
public:
    void setAccount(string no, double bal) { accNumber = no; balance = bal; }
    void showAccount() { cout << "Acc No: " << accNumber << ", Balance: " << balance << endl; }
};
 
class SavingAccount : public Account {
private:
    float interestRate;
public:
    void setInterest(float r) { interestRate = r; }
    void showSaving() {
        showAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};
 
class CurrentAccount : public Account {
private:
    double overdraftLimit;
public:
    void setOverdraft(double o) { overdraftLimit = o; }
    void showCurrent() {
        showAccount();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};
 
int main() {
    SavingAccount sa;
    sa.setAccount("SA-001", 25000);
    sa.setInterest(4.5);
    sa.showSaving();
 
    cout << endl;
 
    CurrentAccount ca;
    ca.setAccount("CA-002", 100000);
    ca.setOverdraft(50000);
    ca.showCurrent();
    return 0;
}
