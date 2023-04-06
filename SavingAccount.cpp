#include "pch.h"
#include "SavingsAccount.h"
SavingsAccount::SavingsAccount(String^ holder)
	:BankAccount(holder)
{
}
void SavingsAccount::SetInterestRate(double rate)
{
	interesRate = rate;
}
double SavingsAccount::GetInteresRate()
{
	return interesRate;
}
bool SavingsAccount::CanDebit(double amount)
{
	return (amount <= GetBalance() / 10);
}