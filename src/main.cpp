#include <iostream>
#include <iomanip>
#include <vector>

#include "bank_accounts/Account.h"
#include "bank_accounts/SavingAccount.h"
#include "bank_accounts/Account_util.h"
#include "bank_accounts/CheckingAccount.h"
#include "bank_accounts/TrustAccount.h"

int main(int argc, char *argv[]){
    // Account operations
    // std::vector<Account> accounts;
    // accounts.push_back(Account{});
    // accounts.push_back(Account{"user1"});
    // accounts.push_back(Account{"user2", 1000});

    // display(accounts);
    // deposit(accounts, 1000);
    // display(accounts);
    // withdraw(accounts, 2000);
    // display(accounts);

    // SavingAccount operations
    std::vector<SavingAccount> saving_accounts;
    saving_accounts.push_back(SavingAccount{});
    saving_accounts.push_back(SavingAccount{"saving user1", 2000});
    saving_accounts.push_back(SavingAccount{"saving user2", 1000, 0.8});

    display(saving_accounts);
    deposit(saving_accounts, 1000);
    display(saving_accounts);
    withdraw(saving_accounts, 2000);
    display(saving_accounts);

    // CheckingAccount operations
    std::vector<CheckingAccount> checking_accounts;
    checking_accounts.push_back(CheckingAccount{});
    checking_accounts.push_back(CheckingAccount{"Checking user1"});
    checking_accounts.push_back(CheckingAccount{"Checking user2", 1000});

    display(checking_accounts);
    deposit(checking_accounts, 1000);
    display(checking_accounts);
    withdraw(checking_accounts, 1000);
    display(checking_accounts);

    // // TrustAccount operations
    std::vector<TrustAccount> trust_accounts;
    trust_accounts.push_back(TrustAccount{});
    trust_accounts.push_back(TrustAccount{"trust user1"});
    trust_accounts.push_back(TrustAccount{"trust user2", 1000});

    display(trust_accounts);
    deposit(trust_accounts, 6000);
    display(trust_accounts);
    withdraw(trust_accounts, 2000);
    withdraw(trust_accounts, 100);
    withdraw(trust_accounts, 100);
    withdraw(trust_accounts, 100);
    withdraw(trust_accounts, 100);
    display(trust_accounts);
    return 0;
}