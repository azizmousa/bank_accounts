
#include "bank_accounts/TrustAccount.h"

/*
 * TrustAccount(std::string name, double balance, double bonus, double bonus_check, double withdraw_amount_limit,int withdraw_times_limit)
 * class initialilzer
*/
TrustAccount::TrustAccount(std::string name, double balance, double bonus, double bonus_check, 
double withdraw_amount_limit, int withdraw_times_limit)
    : Account(name, balance), bonus{bonus}, 
    bonus_check{bonus_check},
    withdraw_amount_limit{withdraw_amount_limit},
    withdraw_times_limit{withdraw_times_limit}{
}

/*
 * bool deposit(const double amount)
 * method to deposit money to the account with a bonus
*/
bool TrustAccount::deposit(const double amount){
    if(!deposit_assurance(amount))
        return false;

    double bonuses = amount;
    if(amount > this->bonus_check)
         bonuses += this->bonus;
    this->balance += bonuses;
    return true;
}

/*
 * bool withdraw(const double amount)
 * method to withdraw money with checking limits
*/
bool TrustAccount::withdraw(const double amount){
    if(!withdraw_assurance(amount))
        return false;

    double amount_limit = (withdraw_amount_limit/100) * this->balance;
    if(amount > amount_limit || this->withdraw_times_limit == 0)
        return false;
    this->balance -= amount;
    this->withdraw_times_limit--;
    return true;
}


/*
 * void print(std::ostream &out)
 * function that create the ostream object to print the class data
*/
void TrustAccount::print(std::ostream &out)const{
    out << "[Name: " << this->name 
    << ", Balance: " << this->balance 
    << ", Withdraws Left:" << this->withdraw_times_limit 
    << "]"; 
}