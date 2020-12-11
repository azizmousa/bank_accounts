#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>
#include <string>

class Account{
    friend std::ostream &operator<<(std::ostream &out, const Account &account);
private:
    static constexpr char *DEF_NAME = const_cast<char*>("UNNAMED ACCOUNT");
    static constexpr double DEF_BALANCE = 0.0;
protected:
    std::string name;
    double balance;

public:

    Account(std::string name=DEF_NAME, double balance=DEF_BALANCE);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance()const;
};


#endif // _ACCOUNT_H