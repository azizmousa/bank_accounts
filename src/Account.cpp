
#include "bank_accounts/Account.h"

/*
 * Account(std::string name, double balance)
 * account constructor
*/
Account::Account(std::string name, double balance): name{name}, balance{balance}{

}

// /*
//  * deopsit(double amount)
//  * method to add amount of money to the base balance
// */
// bool Account::deposit(double amount){
//     if(amount < 0)
//         return false;
//     this->balance += amount;
//     return true;
// }

// /*
//  * withdraw(double amount)
//  * method to decrease amount of money from the base balance
// */
// bool Account::withdraw(double amount){
//     if(amount > balance || amount < 0)
//        return false;
//     this->balance -= amount; 
//     return true;
// }

/*
 * get_balance()const
 * method to get the current balance
*/
double Account::get_balance()const{
    return this->balance;
}

/*
 * std::string get_account_name()const
 * method to get the current name
*/
std::string Account::get_account_name()const{
    return this->name;
}

/*
 * bool withdtaw_assurance(double amount) const
 * method to check if the amount is valid value
*/
bool Account::withdraw_assurance(double amount)const{
    if(amount > this->balance || amount < 0)
        return false;
    return true;
}

/*
 * bool deposit_assurance(double amount) const
 * method to check if the amount is valid value
*/
bool Account::deposit_assurance(double amount)const{
    if(amount < 0)
        return false;
    return true;
}
/*
 * std::ostream &operator<<(std::ostream &out, const Account &account)
 * insertion operator overload to write the account data
*/
std::ostream &operator<<(std::ostream &out, const Account &account){
    account.print(out); 
    return out;
}