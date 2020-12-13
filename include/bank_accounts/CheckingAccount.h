#ifndef _CHECKING_ACCOUNT_H
#define _CHECKING_ACCOUNT_H

#include <string>

#include "bank_accounts/Account.h"

class CheckingAccount: public Account{
    friend std::ostream &operator<<(std::ostream &out, CheckingAccount &checking_account);
private:
    static constexpr char *DEF_NAME = const_cast<char *>("UNNAMED CHECKING ACCOUNT");
    static constexpr double DEF_BALANCE = 0.0;
    static constexpr double DEF_FEE = 1.50;
protected:
    double fee;
public:
    CheckingAccount(std::string name=DEF_NAME, double balance=DEF_BALANCE, double fee=DEF_FEE);
    virtual bool withdraw(const double amount) override;
    virtual bool deposit(const double amount) override;
};

#endif // _CHECKING_ACCOUNT_H