#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H

#include "bank_accounts/Account.h"
class TrustAccount: public Account{
    friend std::ostream operator<<(std::ostream &out, TrustAccount &trust_account);
private:
    static constexpr char *DEF_NAME = const_cast<char*>("UNNAMED TRUST ACCOUNT");
    static constexpr double DEF_BALANCE = 0;
    static constexpr int DEF_WITHDRAW_LIMIT = 3;
    static constexpr double DEF_BONUS = 50;
protected:
    int withdraw_limit;
    double bonus;
public:
    TrustAccount(std::string name=DEF_NAME, double balance=DEF_BALANCE, double bonus=DEF_BONUS, int withdraw_limit=DEF_WITHDRAW_LIMIT);
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif //_TRUST_ACCOUNT_H