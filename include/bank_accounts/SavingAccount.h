#ifndef _SAVING_ACCOUNT_H
#define _SAVING_ACCOUNT_H

#include <iostream>

#include "bank_accounts/Account.h"

class SavingAccount: public Account{

   friend std::ostream &operator<<(std::ostream &out, SavingAccount &saving_account);
private:
    static constexpr char *DEF_ACCOUNT_NAME = const_cast<char*>("UNNAMED SAVING ACCOUNT");
    static constexpr double DEF_BALANCE = 0.0;
    static constexpr double DEF_RATE = 0.0;

protected:
    double rate;

public:
    SavingAccount(std::string name=DEF_ACCOUNT_NAME, double balance=DEF_BALANCE, double rate=DEF_RATE);
    bool deposit(double amount);

};

#endif // _SAVING_ACCOUNT