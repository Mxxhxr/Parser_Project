# Parser & Interpreter Project

This project is a parser and interpreter written in C++.

It includes:
- A lexer (`lexer.cpp`)
- A parser (`parser.cpp`)
- A value system (`value.cpp`)
- A main driver program (`main.cpp`)

---

## 📦 Project Structure

/src  
├── main.cpp  
├── lexer.cpp / lexer.h  
├── parser.cpp / parser.h  
├── value.cpp / value.h  
/test_cases  
└── testprog1  (sample input file)

---

## 🚀 How to Build & Run

### ✅ Option 1: Compile with g++

If you have `g++` installed, run:

> g++ main.cpp lexer.cpp parser.cpp value.cpp -o parser

Then to run the program:

> ./parser test_cases/testprog1

---

### ✅ Option 2 (Recommended): Use Makefile

If you have `make` installed, run:

make

To clean up the build files:

make clean

To run the program:

./parser test_cases/testprog1

---

## 📚 Notes

- Use the **MSYS2 MinGW x64** shell on Windows, or make sure `g++` is added to your system PATH.
- Only compile either:
  - `parser.cpp` (with `main.cpp`)
  - or `interpreter.cpp` (if you want the combined parser + interpreter)

➥ **Do not compile both together, or you will get linker errors.**

---

## 💡 Example Run Command

./parser test_cases/testprog1

---

## 👥 Author

Maahir Vohra
