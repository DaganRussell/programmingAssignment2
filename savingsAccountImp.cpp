
//Implementation File savingsAccountImp.cpp

#include <iostream>
#include <iomanip>
#include "savingsAccount.h"
  
using namespace std; 

savingsAccount::savingsAccount(// write the parameter name............................. )
       :bankAccount(acctNumber, bal)
{
    interestRate = intRate;
}

double savingsAccount::getInterestRate() const
{
    return interestRate; 
}

void savingsAccount::setInterestRate(double rate)
{
    interestRate = rate;
}

void savingsAccount::withdraw(double amount)
{
    if (balance - amount < 0)
        cout << "Unable to complete transaction. Insufficient Funds!" << endl;
    else 
        balance = balance - amount;
}

void savingsAccount::postInterest()
{

 // equation for post interest

}

void savingsAccount::print() const
{
   // print the account information(account number and balance)
   
}
