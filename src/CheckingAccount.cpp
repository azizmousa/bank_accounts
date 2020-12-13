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
 * function that apply fee on every withdraw transaction 
*/
bool CheckingAccount::withdraw(double amount){
    amount += this->fee;
    return Account::withdraw(amount); 
}

/*
 * std::ostream &operator<<(std::ostream &out, CheckingAccount &checking_account)
 * insertion operator overloaded to print out the CheckingAccount data
*/
std::ostream &operator<<(std::ostream &out, CheckingAccount &checking_account){
    out << "[" << checking_account.name << "\tBalance: " << checking_account.balance << "\tfee: " << checking_account.fee << "]";
    return out;
}