# Bank System Project

## Overview
This project implements a simple banking system in C++. It allows users to perform basic banking operations such as creating accounts, deleting accounts, depositing money, withdrawing money, and checking account balances.

## Features
- Create new bank accounts
- Delete existing accounts
- Deposit money into accounts
- Withdraw money from accounts
- Check account balances
- Simple command-line interface

## Project Structure
The project consists of several C++ files:
- `main.cpp`: Contains the main program logic and user interface
- `Bank.h` and `Bank.cpp`: Implement the Bank class, which manages accounts
- `Account.h` and `Account.cpp`: Define the Account class for individual bank accounts
- `linkedlist.h` and `linkedlist.cpp`: Implement a linked list data structure to store accounts

## How to Compile and Run
1. Ensure you have a C++ compiler installed (e.g., g++)
2. Compile the project using the following command:
   ```
   g++ main.cpp Bank.cpp Account.cpp linkedlist.cpp -o bank_system
   ```
3. Run the compiled program:
   ```
   ./bank_system
   ```

## Usage
Upon running the program, you'll be presented with a menu of options:
1. Create a new account
2. Delete an account
3. Deposit money
4. Withdraw money
5. Check account balance
0. Exit

Follow the on-screen prompts to perform various banking operations.

## Security Note
This is a simple demonstration project and does not implement robust security measures. In a real-world application, you would need to implement proper authentication, encryption, and other security best practices.

## Contributing
Contributions to improve the project are welcome. Please feel free to fork the repository and submit pull requests.

## License
This project is open-source and available under the MIT License.
