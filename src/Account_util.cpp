#include <iostream>
#include "bank_accounts/Account_util.h"

/*
 * void display(const std::vector<Account> &accounts)
 * helper function to display list of Account
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
 * helper function to deposit an amount to list of Account
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
 * helper function to withdraw an amount of money from list of Account
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
 * helper function to display list of SavingAccount
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
 * helper function to deposit an amount to list of SavingAccount
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
 * helper function to withdraw an amount of money from list of SavingAccount
*/
void withdraw(std::vector<SavingAccount> &saving_accounts, double amount){
    for(SavingAccount &acc:saving_accounts){
        if(acc.withdraw(amount))
            std::cout << acc.get_account_name() << " withdraw: " << amount << std::endl;
        else
            std::cout << acc.get_account_name() << " withdraw operation faild!" << std::endl;
    }
}


/*
 * void display(const std::vector<CheckingAccount> &checking_accounts)
 * helper function to display list of CheckingAccount
*/
void display(const std::vector<CheckingAccount> &checking_accounts){
    std::cout << "=======CheckingAccount==========" << std::endl;
    for(CheckingAccount acc : checking_accounts){
        std::cout << acc << std::endl;
    }
    std::cout << "================================" << std::endl;
}


/*
 * void deposit(std::vector<CheckingAccount> &checking_accounts, double amount)
 * helper function to deposit an amount to list of CheckingAccount
*/
void deposit(std::vector<CheckingAccount> &checking_accounts, double amount){
    for(CheckingAccount &acc : checking_accounts){
        if(acc.deposit(amount))
            std::cout << acc.get_account_name() << " deposit: " << amount <<std::endl;
        else 
            std::cout << acc.get_account_name() << " deposit operation faild!" << std::endl;
    }
}

/*
 * void withdraw(std::vector<Account> &accounts, double amount)
 * helper function to withdraw an amount of money from list of Account
*/
void withdraw(std::vector<CheckingAccount> &checking_accounts, double amount){
    for(CheckingAccount &acc:checking_accounts){
        if(acc.withdraw(amount))
            std::cout << acc.get_account_name() << " withdraw: " << amount << std::endl;
        else
            std::cout << acc.get_account_name() << " withdraw operation faild!" << std::endl;
    }
}


/*
 * void display(const std::vector<TrustAccount> &trust_accounts)
 * helper function to display list of TrustAccount
*/
void display(const std::vector<TrustAccount> &trust_accounts){
    std::cout << "===========TrustAccount=========" << std::endl;
    for(TrustAccount acc : trust_accounts){
        std::cout << acc << std::endl;
    }
    std::cout << "================================" << std::endl;
}


/*
 * void deposit(std::vector<TrustAccount> &trust_accounts, double amount)
 * helper function to deposit an amount to list of TrustAccount
*/
void deposit(std::vector<TrustAccount> &trust_accounts, double amount){
    for(TrustAccount &acc : trust_accounts){
        if(acc.deposit(amount))
            std::cout << acc.get_account_name() << " deposit: " << amount <<std::endl;
        else 
            std::cout << acc.get_account_name() << " deposit operation faild!" << std::endl;
    }
}

/*
 * void withdraw(std::vector<TrustAccount> &trust_accounts, double amount)
 * helper function to withdraw an amount of money from list of TrustAccount
*/
void withdraw(std::vector<TrustAccount> &trust_accounts, double amount){
    for(TrustAccount &acc:trust_accounts){
        if(acc.withdraw(amount))
            std::cout << acc.get_account_name() << " withdraw: " << amount << std::endl;
        else
            std::cout << acc.get_account_name() << " withdraw operation faild!" << std::endl;
    }
}