#ifndef _CHECKING_ACCOUNT_H
#define _CHECKING_ACCOUNT_H

#include <string>

#include "bank_accounts/Account.h"

class CheckingAccount: public Account{
    friend std::ostream &operator<<(std::ostream &out, CheckingAccount &checking_account);
private:
    static constexpr char *DEF_NAME = const_cast<char *>("UNNAMED CHECKING ACCOUNT");
    static constexpr double DEF_BALANCE = 0.0;
    static constexpr double DEF_FEE = 0.0;
protected:
    double fee;
public:
    CheckingAccount(std::string name=DEF_NAME, double balance=DEF_BALANCE, double fee=DEF_FEE);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_blanace()const;
    std::string get_account_name()const;
};

#endif // _CHECKING_ACCOUNT_H