#include "pch.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    CurrentAccount acc("Me",2000.0);
    acc.Credit(100.0);
    double balance= acc.GetBalance();
    double overdraft = acc.GetOverdraftLimit();
    Console::WriteLine("Balance:{0}", balance);
    Console::WriteLine("Overdraft:{0}", overdraft);
    SavingsAccount::SetInterestRate(2.5);
    SavingsAccount sacc("You");
    double rate = sacc.GetInteresRate();
    Console::WriteLine("Interes rate:{0}", rate);
    Console::WriteLine("Testing the CurrentAccount");
    CurrentAccount current("Jane", 100);
    current.Credit(500);
    if (current.Debit(550) == true)
    {
        Console::WriteLine("Debit(550) OK");
    }
    else
    {
        Console::WriteLine("Debit(550) failed");
    }
    if (current.Debit(100) == true)
    {
        Console::WriteLine("Debit(100) OK");
    }
    else
    {
        Console::WriteLine("Debit(100) failed");
    }
    Console::WriteLine("\nTesting the SavingsAccount");
    SavingsAccount savings("fred");
    savings.Credit(500);
    if (savings.Debit(50) == true)
    {
        Console::WriteLine("Debit(50) OK");
    }
    else
    {
        Console::WriteLine("Debit(50) failed");
    }
    if (savings.Debit(46) == true)
    {
        Console::WriteLine("Debit(46) OK");
    }
    else
    {
        Console::WriteLine("Debit(46) failed");
    }
    Console::WriteLine(savings.ToString());
    return 0;
}
