#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "Account.h"

class Saving_Account : public Account{
    friend std::ostream &operator<<(std::ostream &os,const Saving_Account &sav_acc);
protected:
    double int_rate;
public:
    Saving_Account();
    Saving_Account(double,double);
    void deposit(double);
    //Withdraw is inherited
};

#endif