#include <iostream>
#include <iomanip>
#include <vector>
#include <exception>

#include "bank_accounts/Account.h"
#include "bank_accounts/SavingAccount.h"
#include "bank_accounts/Account_util.h"
#include "bank_accounts/CheckingAccount.h"
#include "bank_accounts/TrustAccount.h"
#include "bank_accounts/IllegalBalanceException.h"

int main(int argc, char *argv[]){

    try{
        TrustAccount tra{};
        Account *acc = &tra;
        acc->deposit(10000);
        acc->withdraw(500);
        std::cout << *acc << std::endl;
        // delete acc;
        // SavingAccount operations
        std::vector<Account*> saving_accounts;
        saving_accounts.push_back(new SavingAccount{});
        saving_accounts.push_back(new SavingAccount{"saving user1", -2000});
        saving_accounts.push_back(new SavingAccount{"saving user2", 1000, 0.8});

        display(saving_accounts);
        deposit(saving_accounts, 1000);
        display(saving_accounts);
        withdraw(saving_accounts, 2000);
        display(saving_accounts);

        // // // TrustAccount operations
        std::vector<Account*> trust_accounts;
        trust_accounts.push_back(new TrustAccount{});
        trust_accounts.push_back(new TrustAccount{"trust user1"});
        trust_accounts.push_back(new TrustAccount{"trust user2", 1000});

        display(trust_accounts);
        deposit(trust_accounts, 6000);
        display(trust_accounts);
        withdraw(trust_accounts, 2000);
        withdraw(trust_accounts, 100);
        withdraw(trust_accounts, 100);
        withdraw(trust_accounts, 100);
        withdraw(trust_accounts, 100);
        display(trust_accounts);
        
        // CheckingAccount operations
        std::vector<Account*> checking_accounts;
        checking_accounts.push_back(new CheckingAccount{});
        checking_accounts.push_back(new CheckingAccount{"Checking user1"});
        checking_accounts.push_back(new CheckingAccount{"Checking user2", 1000});

        display(checking_accounts);
        deposit(checking_accounts, 1000);
        display(checking_accounts);
        withdraw(checking_accounts, 1000);
        display(checking_accounts);

        clean_memory(trust_accounts);
        clean_memory(checking_accounts);
        clean_memory(saving_accounts);
    }catch(std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }
    
    return 0;
}