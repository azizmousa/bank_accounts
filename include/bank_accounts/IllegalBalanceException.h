#ifndef _ILLEGAL_BALANCE_EXCEPTION_H
#define _ILLEGAL_BALANCE_EXCEPTION_H

#include <exception>
#include <string>
class IllegalBalanceException: public std::exception{
private:
    static constexpr char *DEF_WHAT_ARG = const_cast<char*>("this is Illegal Balance Exception");
    std::string what_arg;
public:
    IllegalBalanceException(const std::string what_arg=DEF_WHAT_ARG):what_arg{what_arg}{}
    virtual ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept override{
        return const_cast<char*>(this->what_arg.c_str());
    }
};

#endif //_ILLEGAL_BALANCE_EXCEPTION_H