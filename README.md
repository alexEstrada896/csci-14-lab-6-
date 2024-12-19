1. (10 pts) Write a complete program in C++ that calculates the monthly payment on a loan.

The monthly payment on a loan may be calculated by the following formula:
Payment = Rate(1 + Rate)^n / ((1 + Rate)^n -1) L
          


Rate is the monthly interest rate. N is the number of payments, and L is the amount of the loan. Your program should have reasonable prompts asking the user for the loan amount, monthly interest rate, and number of payments. Your program in the end should display a FORMATTED report similar to

Loan Amount:               $     10000.00
Monthly Interest Rate:                 1%
Number of Payments:                    36
Amount of Each Payment:    $       332.14
Amount Paid Back:          $     11957.15
Interest Paid:             $      1957.15
 

If the monthly interest rate is a whole number, it should be displayed as a whole number. Otherwise, decimal values after the decimal point should appear.
