
//Implementation file checkingAccountImp.cpp
  
#include <iostream>
#include <iomanip>
#include "checkingAccount.h"

using namespace std;

checkingAccount::checkingAccount(int acctNumber, double bal, 
                                 double minBal, double intRate, double servC)
               : 
               
               // get the account number and balance from the base class........................
{
    interestRate = intRate;
    minimumBalance = minBal;
    serviceCharge = servC;
}

double checkingAccount::getMinimumBalance() const 
{
    return minimumBalance;
}

void checkingAccount::setMinimumBalance(double minBalance)
{
    // set the minimum balance with the parameters
.........
}

double checkingAccount::getInterestRate() const
{
    return interestRate;
}

void checkingAccount::setInterestRate(double intRate)
{
    interestRate = intRate;
}

// declare the getter function for service charge
.................................................
{
    return serviceCharge;
}

void checkingAccount::setServiceCharge(double servC)
{
    serviceCharge = servC;
}

// define the void post interest function
.........................................
{
    balance = balance + balance * interestRate;
}

bool checkingAccount::verifyMinimumumBalance(double amount)
{
    return (balance - amount >= minimumBalance);
}

 void checkingAccount::writeCheck(double amount)
{
    withdraw(amount);
}

void checkingAccount::withdraw(double amount)
{
// verify if the balance less than minimum balance
hints balance = balance - amount - service charge
................................................
}

void checkingAccount::print() const
{
    cout << fixed << setprecision(2);
    cout << "Interest Checking ACCT#:\t" << getAccountNumber()
         << "\tBalance: $" << getBalance() << endl;
}