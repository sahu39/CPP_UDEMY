#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "Account.h"
class Saving_Account :public Account{
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account &sav_acc);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr const double def_bal = 0.0;
    static constexpr const double def_rate = 0.0;
protected:
    //std::string name;
    double int_rate;
public:
    Saving_Account(std::string name=def_name,double amt=def_bal,double int_rate=def_rate);
    bool deposit(double);
};
#endif