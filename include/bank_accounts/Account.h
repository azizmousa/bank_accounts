#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>
#include <string>

#include "bank_accounts/I_Print.h"

class Account: I_Print{
    // friend std::ostream &operator<<(std::ostream &out, const Account &account);
private:
    static constexpr char *DEF_NAME = const_cast<char*>("UNNAMED ACCOUNT");
    static constexpr double DEF_BALANCE = 0.0;
protected:
    std::string name;
    double balance;

public:

    Account(std::string name=DEF_NAME, double balance=DEF_BALANCE);
    virtual ~Account(){}
    virtual bool deposit(const double amount) = 0;
    virtual bool withdraw(const double amount) = 0;
    virtual bool withdraw_assurance(const double amount) const final;
    virtual bool deposit_assurance(const double amount) const final;
    virtual double get_balance()const final;
    virtual std::string get_account_name()const final;
    virtual void print(std::ostream &out) const override;
};


#endif // _ACCOUNT_H