
#include "bank_accounts/I_Print.h"

std::ostream &operator<<(std::ostream &out, I_Print &i_print){
    i_print.print(out);
    return out;
}