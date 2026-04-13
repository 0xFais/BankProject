# BankProject

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)
![Platform](https://img.shields.io/badge/Platform-Windows%2FLinux%2FMacOS-lightgray?style=flat-square)

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Technical Stack](#technical-stack)
- [Project Structure](#project-structure)
- [System Requirements](#system-requirements)
- [Installation & Setup](#installation--setup)
- [Build Instructions](#build-instructions)
- [Usage Guide](#usage-guide)
- [Architecture](#architecture)
- [File Format](#file-format)
- [Core Components](#core-components)
- [Contributing](#contributing)
- [License](#license)
- [Support](#support)

---

## Overview

**BankProject** is a console-based banking application developed in C++ that provides core banking operations. The application enables users to manage bank accounts, perform transactions, and access user information through an intuitive command-line interface. Built with a modular architecture, BankProject separates business logic, user interface, and utilities for maintainability and scalability.

This is an educational and practical project designed to demonstrate object-oriented programming concepts, file-based data persistence, and user authentication in C++.

---

## Features

### User Management
- **User Registration** - Create new user accounts with unique credentials
- **User Authentication** - Secure login system with username and password validation
- **User Management** - View, update, and manage user accounts
- **Role-Based Access** - Different permission levels for administrators and regular users
- **User Deletion** - Remove user accounts with proper verification

### Client Management
- **Client Database** - Store and manage client information
- **Client Registration** - Add new clients with personal and account details
- **Client Account Management** - Manage multiple accounts per client
- **Client Information Updates** - Modify client details as needed
- **Account Balance Tracking** - View current balance for each client account

### Transaction Operations
- **Deposit Funds** - Add money to client accounts
- **Withdraw Funds** - Remove money from client accounts with balance validation
- **Transfer Between Accounts** - Transfer funds from one account to another
- **Transaction History** - Track all transactions performed
- **Balance Verification** - Ensure sufficient balance before withdrawals

### Reports & Viewing
- **Client List Display** - View all registered clients and their details
- **Account Information** - Display account details including balance
- **Transaction Records** - View transaction history for accounts

---

## Technical Stack

### Programming Language
- **C++ 11/14** - Modern C++ with object-oriented design
- Standard Template Library (STL) for data structures

### Development Tools
- **Visual Studio 2019+** (Primary development environment)
- **GCC/Clang** (Linux/macOS support)
- **CMake** (Optional cross-platform building)

### Data Persistence
- **Text-based File Storage** - Simple file format with delimiter-based records
- **Clients.txt** - Client account information storage
- **Users.txt** - User account credentials and permissions
- **LoginRegister.txt** - Login audit trail

### Operating Systems
- Windows 10/11
- Linux (Ubuntu 18.04+, CentOS 7+)
- macOS 10.14+

---

## Project Structure
