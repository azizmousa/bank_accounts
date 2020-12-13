#include <iostream>
#include "bank_accounts/Account_util.h"

/*
 * void display(const std::vector<Account> &accounts)
 * helper function to display list of Account
*/
void display(const std::vector<Account*> &accounts){
    std::cout << "===========Account==============" << std::endl;
    const Account *acc_ptr{nullptr};
    for(size_t i{0}; i< accounts.size(); ++i ){
        acc_ptr = accounts.at(i);
        std::cout << *acc_ptr << std::endl;
    }
    std::cout << "================================" << std::endl;
}


/*
 * void deposit(std::vector<Account> &accounts, double amount)
 * helper function to deposit an amount to list of Account
*/
void deposit(std::vector<Account*> &accounts, double amount){
    for(Account *acc : accounts){
        if(acc->deposit(amount))
            std::cout << acc->get_account_name() << " deposit: " << amount <<std::endl;
        else 
            std::cout << acc->get_account_name() << " deposit operation faild!" << std::endl;
    }
}

/*
 * void withdraw(std::vector<Account> &accounts, double amount)
 * helper function to withdraw an amount of money from list of Account
*/
void withdraw(std::vector<Account*> &accounts, double amount){
    for(Account *acc:accounts){
        if(acc->withdraw(amount))
            std::cout << acc->get_account_name() << " withdraw: " << amount << std::endl;
        else
            std::cout << acc->get_account_name() << " withdraw operation faild!" << std::endl;
    }
}

/*
 * void clean_memory(std::vector<Account*> &accounts)
 * method that free the memore from the raw pointers in the vector
*/
void clean_memory(std::vector<Account*> &accounts){
    for(Account *acc: accounts){
        std::cout << "deleted account: " << acc->get_account_name() << std::endl;
        delete acc;
    }
        
}