#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H
#include <vector>

#include "bank_accounts/Account.h"
#include "bank_accounts/SavingAccount.h"
#include "bank_accounts/CheckingAccount.h"
#include "bank_accounts/TrustAccount.h"

// utility helper functions for Account class
void display(const std::vector<Account*> &accounts);
void deposit(std::vector<Account*> &accounts, double amount);
void withdraw(std::vector<Account*> &accounts, double amount);
void clean_memory(std::vector<Account*> &accounts);

#endif //_ACCOUNT_UTIL_H