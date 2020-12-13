#ifndef _SAVING_ACCOUNT_H
#define _SAVING_ACCOUNT_H

#include <iostream>

#include "bank_accounts/Account.h"

class SavingAccount: public Account{

// friend std::ostream &operator<<(std::ostream &out, const SavingAccount &saving_account);

private:
    static constexpr char *DEF_ACCOUNT_NAME = const_cast<char*>("UNNAMED SAVING ACCOUNT");
    static constexpr double DEF_BALANCE = 0.0;
    static constexpr double DEF_RATE = 0.0;

protected:
    double rate;

public:
    SavingAccount(const std::string name=DEF_ACCOUNT_NAME, const double balance=DEF_BALANCE, const double rate=DEF_RATE);
    virtual ~SavingAccount(){}
    virtual bool deposit(const double amount)override;
    virtual bool withdraw(const double amount)override;
    virtual void print(std::ostream &out)const override;

};

#endif // _SAVING_ACCOUNT