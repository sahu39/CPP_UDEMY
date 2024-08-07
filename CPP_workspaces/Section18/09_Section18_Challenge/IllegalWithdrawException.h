#ifndef _ILLEGAL_WITHDRAW_EXCEPTION_H
#define _ILLEGAL_WITHDRAW_EXCEPTION_H
class IllegalWithdrawException:public std::exception{
public:
    IllegalWithdrawException() noexcept = default;
    ~IllegalWithdrawException() = default;
    virtual const char *what() const noexcept{
        return "Negative Withdraw";
    }
    
};
#endif