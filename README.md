# 🎓 Student Management System

> A simple console-based student record manager written in **C++**.

![C++](https://img.shields.io/badge/C++-17-00599C?logo=cplusplus)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey)
![Console](https://img.shields.io/badge/Interface-Console-black)

---

## 📋 Overview

A beginner-friendly C++ console application for managing student records. It supports adding, viewing, searching, updating, and deleting student data — all stored in memory using a `vector` of structs. A great project for practicing core C++ concepts like structs, vectors, loops, and functions.

---

## ✨ Features

- ➕ Add one or multiple student records at once
- 📄 Display all stored student records
- 🔍 Search for a student by roll number
- ✏️ Update an existing student's details
- 🗑️ Delete a specific record or clear all records
- 🔁 Menu-driven loop that runs until the user exits

---

## 🛠 Tech Stack

| | |
|---|---|
| Language | C++ |
| Data Structure | `std::vector` of `struct` |
| Interface | Console (stdin/stdout) |
| Libraries | `<iostream>`, `<vector>` |

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler (g++, clang++, or MSVC)

### Compile & Run

**Linux / macOS**
```bash
g++ -o student_manager main.cpp
./student_manager
```

**Windows (MinGW)**
```bash
g++ -o student_manager.exe main.cpp
student_manager.exe
```

---

## 📁 Project Structure

```
StudentManagement/
└── main.cpp    # All logic in a single file
```

---

## 🖥 Menu Options

```
1. Enter data    → Add one or more student records
2. Show data     → Display all records
3. Search data   → Find a student by roll number
4. Update data   → Edit an existing student's details
5. Delete data   → Remove one or all records
6. Exit          → Close the program
```

---

## 🗃 Data Model

Each student record stores the following fields:

| Field | Type | Description |
|---|---|---|
| `name` | `string` | Student's full name |
| `roll` | `string` | Roll number (used as identifier) |
| `course` | `string` | Course name |
| `clas` | `string` | Class or year |
| `contact` | `string` | Contact number |

---

## 🎓 What Concepts I Used In This 

### 1. Structs
- Grouping related data fields into a single `struct`
- Creating and initializing struct instances
- Accessing struct members with the `.` operator

### 2. Vectors
- Using `std::vector` as a dynamic array
- Adding elements with `push_back`
- Removing elements with `erase` and clearing with `clear`
- Checking if a container is empty with `.empty()`

### 3. Functions
- Breaking a program into focused, single-purpose functions
- Passing and modifying data using references (`auto& s`)

### 4. Loops & Control Flow
- Using a `while(true)` loop with a `switch` statement for a menu system
- Iterating over a vector with index-based and range-based `for` loops
- Using `bool` flags to track search results

### 5. Basic I/O
- Reading user input with `cin`
- Outputting formatted data with `cout` and `endl`

---

## 🔮 Possible Improvements

- [ ] Save and load records from a file using `<fstream>`
- [ ] Add input validation (e.g. check contact is numeric)
- [ ] Sort records alphabetically by name or roll number
- [ ] Search by name in addition to roll number
- [ ] Move into multiple files (header + source) for better structure

---
