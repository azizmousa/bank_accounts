#include <iostream>
#include <iomanip>

#include "bank_accounts/Account.h"
#include "bank_accounts/SavingAccount.h"
int main(int argc, char *argv[]){
    Account ac1;
    Account lary_account{"lary", 100};
    Account moe_accoutn{"moe", 200};
    SavingAccount sac1;
    SavingAccount sup_sv_accoutn{"superman", 1000.0, 4};
    SavingAccount bat_sv_accoutn{"batman", 2000000.0}; 

    sup_sv_accoutn.deposit(1000);
    sup_sv_accoutn.withdraw(100);

    bat_sv_accoutn.deposit(3000);
    bat_sv_accoutn.withdraw(9000);

    lary_account.deposit(200);
    moe_accoutn.withdraw(50);

    std::cout.precision(2);
    std::cout << std::fixed;

    std::cout << ac1 << std::endl;
    std::cout << lary_account << std::endl;
    std::cout << moe_accoutn << std::endl;

    std::cout << sac1 << std::endl;
    std::cout << sup_sv_accoutn << std::endl;
    std::cout << bat_sv_accoutn << std::endl;

    return 0;
}