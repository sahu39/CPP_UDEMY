#ifndef _TRUST_ACC_H_
#define _TRUST_ACC_H_
#include <string>
#include "Saving_Account.h"
class Trust_Account : public Saving_Account{
    friend std::ostream &operator<<(std::ostream &os,const Trust_Account &obj);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr const double def_bal = 0.0;
    static constexpr const double def_rate = 0.0;
    static constexpr int def_withdraw = 3;
    static constexpr double def_bonus = 50.0;
    static constexpr double def_withdraw_rate = 0.2;
protected:
    int count_withdraw;
public:
    Trust_Account(std::string nm = def_name, double bal = def_bal, double rate = def_rate);
    bool deposit(double amt);
    bool withdraw(double amt);
};

#endif