#ifndef _ILLEGAL_BALANCE_EXCEPTION_H
#define _ILLEGAL_BALANCE_EXCEPTION_H
class IllegalBalanceException{
public:
    IllegalBalanceException() noexcept =  default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept{
        return "Illegal Balance exception";
    }
};
#endif