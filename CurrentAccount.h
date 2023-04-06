#pragma once
#include "BankAccount.h"
ref class CurrentAccount :BankAccount
{
public:
	CurrentAccount(String^ holder, double limit);
	void ChangeOverdraftLimit(double newLimit);
	double GetOverdraftLimit();
	virtual String^ ToString() override;
	virtual bool CanDebit(double amount) override;
private:
	double overdraftLimit;
};