#ifndef _I_PRINT_H
#define _I_PRINT_H

#include<iostream>

class I_Print{
    friend std::ostream &operator<<(std::ostream &out, I_Print &i_print);
public:
    virtual ~I_Print() = default;
    virtual void print(std::ostream &out)const;
};
#endif//_I_PRINT_H