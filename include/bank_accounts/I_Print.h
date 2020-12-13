#ifndef _I_PRINT_H
#define _I_PRINT_H

#include<iostream>

class I_Print{
public:
    virtual ~I_Print(){} 
    virtual void print(std::ostream &out)const = 0;
};
#endif//_I_PRINT_H