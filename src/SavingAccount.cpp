
#include "bank_accounts/SavingAccount.h"

/*
 * SavingAccount(const std::string name, const double balance , const double rate)
 * saving account initializer
*/
SavingAccount::SavingAccount(const std::string name, const double balance, const double rate)
    : Account(name, balance), rate{rate}{

}


/*
 * bool deposit(const double amount)
 * add amount of money with the rate of interrest
*/
bool SavingAccount::deposit(const double amount){
    if(!deposit_assurance(amount))
        return false; 
    double interrest = amount + (amount * (this->rate / 100));
    this->balance += interrest;
    return true;
}

/*
 * bool withdraw(const double amount)
 * method to decrease the amount from the balance
*/
bool SavingAccount::withdraw(const double amount){
    if(!withdraw_assurance(amount))
        return false;
    this->balance -= amount;
    return true;
}

/*
 * std::ostream &operator<<(std::ostream &out, const SavingAccount &saving_account)
 * insertion operator ovlerloaded to display the saving account data
*/
std::ostream &operator<<(std::ostream &out, const SavingAccount &saving_account){
    return out;
}

/*
 * void print(std::ostream &out)
 * function that create the ostream object to print the class data
*/
void SavingAccount::print(std::ostream &out)const{
    out << "[Name: " <<this->name << "\tBalance: " << this->balance << "\tRate: " << this->rate << "]";
}