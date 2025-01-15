#include <iostream>
#include <string>

using namespace std;

class BankAccount{
private:
    string type; 
    int balance;
    
public:
Account(const string& t, int b) : type(t), balance(b) {}
    void checkBalance() const { cout << "Balance: " << balance << endl; }
    void deposit(int amount) { balance += amount; }
    void withdraw(int amount) { balance -= amount; }

};

class User{
private:
    string CardNumber;
    int pin;
    Account checkingAccount;

    User(string c, int p) : cardNumber(c), pin(p), checkingAccount("checking", 1000) {}
    const BankAccount& getCheckingAccount() const { return checkingAccount; }
    string getCardNumber() const { return cardNumber; }
    int getPin() const { return pin; }
};

class ATMController{
    User* CurrentUser;
    Account* selectedAccount;

    public:
    User user1 = {"8258-5516", 5516}
// => Insert Card 

    bool insert(string card){
        if (user.cardNumber == card) {
            return true;
        }
        return false;
    }

// => PIN number

    bool enterPin(int pin) { return CurrentUser && CurrentUser->pin == pin;}
// => Select Account 

    bool selectAccount() {
        selectedAccount = &CurrentUser->checkingAccount;
        return true;
    }


// => See Balance/Deposit/Withdraw

    void checkBalance() {
        if (selectedAccount) {
            selectedAccount->checkBalance();
        }
    }

    void deposit() {
        if (selectedAccount) {
            selectedAccount->deposit(amount);
        }
    }
    void withdraw(int amount) {
        if (selectedAccount) {
            selectedAccount->withdraw(amount);
        }
    }
};


int main() {
    ATMController atm;

    bool Inserted = atm.insert("8258-5516");
    bool pin = atm.entePIN(5516);
    bool accountSelected = atm.selectedAccount();

    if (Inserted && pin && accountSelected){
        atm.checkBalance();
        atm.Deposit(1);
        atm.withdraw(1);
        atm.checkBalance();
    }

}