# Compiler for a simple Perl-Like Language in C++

A compiler for a simple Perl-like language, implemented in C++. It includes a lexical analyzer and a parser-interpreter capable of analyzing, parsing, and executing programs written in the defined language. The compiler evaluates the program, produces the correct outputs, and provides clear error messages when syntax errors are detected.



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

> `g++ main.cpp lexer.cpp parser.cpp value.cpp -o parser`

Then to run the program:

> `./parser test_cases/testprog`

---

### ✅ Option 2 (Recommended): Use Makefile

If you have `make` installed, run:

> `make`

To clean up the build files:

> `make clean`

To run the program:

> `./parser test_cases/testprog1`

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
