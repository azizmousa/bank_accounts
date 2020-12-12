
#include "bank_accounts/TrustAccount.h"

/*
 * TrustAccount(std::string name, double balance, double bonus, int withdraw_rate)
 * class initialilzer
*/
TrustAccount::TrustAccount(std::string name, double balance, double bonus,
double bonus_check, double withdraw_amount_limit,
 int withdraw_times_limit)
    :Account(name, balance), bonus{bonus}, 
    bonus_check{bonus_check},
    withdraw_amount_limit{withdraw_amount_limit},
    withdraw_times_limit{withdraw_times_limit}{
}

/*
 * bool deposit(double amount)
 * method to deposit money to the account with a bonus
*/
bool TrustAccount::deposit(double amount){
    if(amount > this->bonus_check)
        amount += this->bonus;
    return Account::deposit(amount);
}

/*
 * bool withdraw(double amount)
 * method to withdraw money with checking limits
*/
bool TrustAccount::withdraw(double amount){
    double amount_limit = (withdraw_amount_limit/100) * this->balance;
    if(amount > amount_limit || this->withdraw_times_limit == 0)
        return false;
    this->withdraw_times_limit--;
    return Account::withdraw(amount);
}