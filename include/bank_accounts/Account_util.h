#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H
#include <vector>

#include "bank_accounts/Account.h"
#include "bank_accounts/SavingAccount.h"
#include "bank_accounts/CheckingAccount.h"
#include "bank_accounts/TrustAccount.h"

// utility helper functions for Account class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// utility helper functions for SavingAccount class
void display(const std::vector<SavingAccount> &saving_accounts);
void deposit(std::vector<SavingAccount> &saving_accounts, double amount);
void withdraw(std::vector<SavingAccount> &saving_accounts, double amount);

// utility helper functions for CheckingAccount class
void display(const std::vector<CheckingAccount> &checking_accounts);
void deposit(std::vector<CheckingAccount> &checking_accounts, double amount);
void withdraw(std::vector<CheckingAccount> &checking_accounts, double amount);

// utility helper functions for TrustAccount class
void display(const std::vector<TrustAccount> &trust_accounts);
void deposit(std::vector<TrustAccount> &trust_accounts, double amount);
void withdraw(std::vector<TrustAccount> &trust_accounts, double amount);
#endif //_ACCOUNT_UTIL_H