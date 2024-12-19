/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <cmath>
#include<iomanip>
#include <iostream>

int main()
{
	//asks user for loan amount
	cout <<"What is your loan amount?:"<<endl;
	double loan;
	cin>> loan;
	//asks user for monthly intrest rate
	cout<<"What is your monthly intrest rate?:"<<endl;
	double intrestRate;
	cin>> intrestRate;
	double rate;
	rate = intrestRate/100;
	//asks user for number of payments
	cout <<"What is your number of payments?:"<<endl;
	double payments;
	cin>>payments;
//calculates payments
	double payment = rate*(1+pow(rate,payments))/
	
	((1+pow(rate,payments))-1)*loan;
//calculates amount paid back
	double paidBack = payment * payments;
//calculates intrest paid
	double intrestPaid = paidBack-loan;
//outputs result
	cout <<"Loan Amount:"<<setw(12)<<"$"<<setw(10)<<fixed<<setprecision(2)<<loan<<endl;;
	cout<<"Monthly Intrest Rate:"<<setw(7)<<fixed<<setprecision(0)<<intrestRate<<"%"<<endl;
	cout<<"Number of Payments:"<<setw(9)<<payments<<endl;
	cout<<"Amount of Each Payment:"<<setw(1)<<"$"<<setw(5)<<fixed<<setprecision(2)<<payment<<endl;
	cout <<"Amount Payed Back:"<<setw(6)<<"$"<<paidBack<<endl;
	cout<<"Intrest Paid:"<<setw(11)<<"$"<<intrestPaid<<endl;

	return 0;
}