#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H

#include "bank_accounts/Account.h"
class TrustAccount: public Account{
    // friend std::ostream &operator<<(std::ostream &out, TrustAccount &trust_account);
private:
    static constexpr char *DEF_NAME = const_cast<char*>("UNNAMED TRUST ACCOUNT");
    static constexpr double DEF_BALANCE = 0;
    static constexpr int DEF_WITHDRAW_LIMIT = 3;
    static constexpr double DEF_BONUS = 50;
    static constexpr double DEF_BONUS_CHECK = 5000;
    static constexpr double DEF_WITHDRAW_AMOUNT_LIMIT = 20;
protected:
    double bonus, bonus_check, withdraw_amount_limit;
    int withdraw_times_limit;
public:
    TrustAccount(std::string name=DEF_NAME, double balance=DEF_BALANCE, 
    double bonus=DEF_BONUS,
    double bonus_check=DEF_BONUS_CHECK, 
    double withdraw_amount_limit=DEF_WITHDRAW_AMOUNT_LIMIT,
    int withdraw_limit=DEF_WITHDRAW_LIMIT);
    virtual ~TrustAccount(){}
    virtual void print(std::ostream &out)const override;
    virtual bool deposit(const double amount)override;
    virtual bool withdraw(const double amount)override;
    
};

#endif //_TRUST_ACCOUNT_H