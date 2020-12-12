#include <iostream>
#include "bank_accounts/Account_util.h"

/*
 * void display(const std::vector<Account> &accounts)
 * helper function to display list of Accounts
*/
void display(const std::vector<Account> &accounts){
    std::cout << "===========Account==============" << std::endl;
    for(Account acc : accounts){
        std::cout << acc << std::endl;
    }
    std::cout << "================================" << std::endl;
}


/*
 * void deposit(std::vector<Account> &accounts, double amount)
 * helper function to deposit an amount to list of Accounts
*/
void deposit(std::vector<Account> &accounts, double amount){
    for(Account &acc : accounts){
        if(acc.deposit(amount))
            std::cout << acc.get_account_name() << " deposit: " << amount <<std::endl;
        else 
            std::cout << acc.get_account_name() << " deposit operation faild!" << std::endl;
    }
}

/*
 * void withdraw(std::vector<Account> &accounts, double amount)
 * helper function to withdraw an amount of money from list of Accounts
*/
void withdraw(std::vector<Account> &accounts, double amount){
    for(Account &acc:accounts){
        if(acc.withdraw(amount))
            std::cout << acc.get_account_name() << " withdraw: " << amount << std::endl;
        else
            std::cout << acc.get_account_name() << " withdraw operation faild!" << std::endl;
    }
}


/*
 * void display(const std::vector<SavingAccount> &saving_accounts)
 * helper function to display list of SavingAccounts
*/
void display(const std::vector<SavingAccount> &saving_accounts){
    std::cout << "===========SavingAccount==============" << std::endl;
    for(SavingAccount acc : saving_accounts){
        std::cout << acc << std::endl;
    }
    std::cout << "================================" << std::endl;
}


/*
 * void deposit(std::vector<SavingAccount> &saving_accounts, double amount)
 * helper function to deposit an amount to list of SavingAccounts
*/
void deposit(std::vector<SavingAccount> &saving_accounts, double amount){
    for(SavingAccount &acc : saving_accounts){
        if(acc.deposit(amount))
            std::cout << acc.get_account_name() << " deposit: " << amount <<std::endl;
        else 
            std::cout << acc.get_account_name() << " deposit operation faild!" << std::endl;
    }
}

/*
 * void withdraw(std::vector<SavingAccount> &saving_accounts, double amount)
 * helper function to withdraw an amount of money from list of Accounts
*/
void withdraw(std::vector<SavingAccount> &saving_accounts, double amount){
    for(SavingAccount &acc:saving_accounts){
        if(acc.withdraw(amount))
            std::cout << acc.get_account_name() << " withdraw: " << amount << std::endl;
        else
            std::cout << acc.get_account_name() << " withdraw operation faild!" << std::endl;
    }
}