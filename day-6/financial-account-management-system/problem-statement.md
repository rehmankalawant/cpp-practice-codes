#### Problem 2: Financial Account Management System Using Inheritance, Polymorphism
and RTTI

Domain: Finance / Banking

Problem Statement-
A bank provides different types of accounts to its customers. Each account contains common information,
but the rules for calculating returns, handling withdrawals, overdraft facilities and maturity amounts
differ depending on the account type.
Develop a Financial Account Management System using inheritance, runtime polymorphism and RTTI.
Create a base class named Account containing common information such as Account Number, Customer
Name and Balance.
Derive SavingsAccount, CurrentAccount and FixedDepositAccount from Account. A savings account earns
interest based on its balance. A current account may provide an overdraft facility and apply service
charges. A fixed deposit account earns returns based on principal amount, interest rate and deposit
tenure.
The program should process all account types through a common base-class interface while also
identifying the actual account type at runtime.
Requirements
• Create a base class Account with data members such as accountNumber, customerName and balance.
• Provide suitable constructors for initializing account information.
• Declare virtual functions calculateReturns() and displayAccountInfo().
• Derive SavingsAccount, CurrentAccount and FixedDepositAccount from Account.
• Include additional data in SavingsAccount such as interestRate and minimumBalance.
• Override calculateReturns() to calculate interest earned by a savings account.
• Include overdraftLimit and serviceCharges in CurrentAccount and implement suitable withdrawal
rules.
• Include principal amount, interest rate and deposit tenure in FixedDepositAccount and calculate the
maturity amount.
• Store objects of all account types using Account pointers.
• Demonstrate runtime polymorphism by calling calculateReturns() and displayAccountInfo() through
Account pointers.
• Use dynamic_cast to identify the actual runtime account type.
• For SavingsAccount, display interest rate and minimum balance.
• For CurrentAccount, display overdraft limit and service charges.
• For FixedDepositAccount, display interest rate, deposit tenure and calculated maturity amount.
• Perform safe downcasting by checking the result of dynamic_cast before accessing derived-classspecific members.
• Create a menu-driven application to create accounts, display accounts, calculate returns, perform
withdrawals and identify account types using RTTI.