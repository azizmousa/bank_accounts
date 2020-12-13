#include "bank_accounts/CheckingAccount.h"

/*
 * CheckingAccount(std::string name, double balance, double fee)
 * class initializer
*/
CheckingAccount::CheckingAccount(std::string name, double balance, double fee)
    :Account(name, balance), fee{fee}{

}

/*
 * bool withdraw(double amount)
 * method to apply fee on every withdraw transaction 
*/
bool CheckingAccount::withdraw(const double amount){
    if(!withdraw_assurance(amount))
        return false;

    double feed_amount = amount + this->fee;

    if(!withdraw_assurance(feed_amount))
        return false;

    this->balance -= feed_amount;
    return true; 
}

/*
 * bool deposit(double amount)
 * method to deposit amount to the current balance
*/
bool CheckingAccount::deposit(const double amount){
    if(!deposit_assurance(amount))
        return false;
    this->balance += amount;
    return true;
}

/*
 * std::ostream &operator<<(std::ostream &out, CheckingAccount &checking_account)
 * insertion operator overloaded to print out the CheckingAccount data
*/
std::ostream &operator<<(std::ostream &out, CheckingAccount &checking_account){
    out << "[" << checking_account.name << "\tBalance: " << checking_account.balance << "\tfee: " << checking_account.fee << "]";
    return out;
}