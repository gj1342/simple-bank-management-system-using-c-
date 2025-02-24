# PayOnline: A Bank Management System

## Overview
PayOnline is a simple C++ based bank management system that allows users to create accounts, sign up, deposit and withdraw money, transfer cash, view transaction history, and manage user information.

## Features
- Create a new account
- Sign-up for an account
- Deposit and withdraw money
- Transfer cash between accounts
- Load menu for transactions
- View transaction history
- Display user information
- View a master list of accounts

## Project Structure
- `main.cpp` - Contains the core banking operations
- `useracc` class - Handles user account management
- File I/O operations to store and retrieve account information

## Requirements
- C++ compiler (e.g., GCC, MSVC, Clang)
- Standard C++ Libraries

## Compilation & Execution
### Using g++
```bash
g++ -o PayOnline main.cpp
./PayOnline
```

## Usage
Upon running the program, users will be presented with a menu where they can choose different banking operations:

1. Create a new account
2. Sign-up for an account
3. Deposit money
4. Withdraw money
5. Transfer cash
6. Load menu
7. View transaction history
8. View user information
9. Exit the application

## File Storage
The system stores user account data in `useraccount.txt` and performs file operations for creating, updating, and deleting account records.

## License
This project is licensed under the MIT License.

---

Enjoy banking securely with PayOnline! 🚀

