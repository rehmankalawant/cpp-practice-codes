#### Problem Statement

Domain: Banking / Digital Wallet System
Problem Statement
Develop a C++ application to manage a simple Digital Wallet system. The system should
store wallet holder details and wallet balance. The application must demonstrate the use of
custom exception handling and operator overloading for the insertion (<<) and extraction
(>>) operators.
Class Requirements
• Create a class Wallet with the following data members:
• walletId
• holderName
• balance
Provide suitable constructors and member functions to initialize and display wallet details.
Custom Exception Requirements
• Create a custom exception class InvalidAmountException.
• Throw the exception when the user enters an invalid transaction amount, such as zero
or a negative value.
• Create another custom exception class InsufficientBalanceException.
• Throw the exception when a withdrawal amount is greater than the available wallet
balance.
• Handle all exceptions using appropriate try-catch blocks and display meaningful error
messages.
Operator Overloading Requirements
• Overload the >> operator to accept Wallet details from the user.
• Overload the << operator to display Wallet details in a formatted manner.
• Implement these operators as friend functions.
Functional Requirements
1. Accept wallet details using the overloaded >> operator.
2. Display wallet details using the overloaded << operator.
3. Provide options to add money and withdraw money.
4. Validate transaction amounts using custom exceptions.
5. Display the updated wallet information after every successful transaction.
6. Use a menu-driven program to perform multiple operations until the user chooses to
exit.
Expected Learning Outcomes
• Understand and implement user-defined/custom exception classes.
• Use throw and try-catch blocks for exception handling.
• Overload the stream insertion operator (<<).
• Overload the stream extraction operator (>>).
• Understand the use of friend functions in operator overloading.
• Design a menu-driven object-oriented C++ application.
Sample Menu
1. Create Wallet
2. Add Money
3. Withdraw Money
4. Display Wallet Details
5. Exit