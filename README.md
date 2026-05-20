# Compiler for a Pascal-Like Language in C++

A compiler for a custom Pascal-like language, implemented in C++. It includes a lexical analyzer and a parser-interpreter capable of analyzing, parsing, and executing programs written in the defined language. The compiler evaluates the program, produces the correct outputs, and provides clear error messages when syntax or runtime errors are detected.

## 🌐 Live Demo

Try the compiler directly in your browser — no installation required:
**[Mxxhxr.github.io/Parser_Project](https://Mxxhxr.github.io/Parser_Project)**

The live IDE features:
- Monaco Editor (the engine powering VS Code) with custom syntax highlighting for the language
- Real compiler output powered by WebAssembly — the actual C++ compiler runs in your browser
- Error highlighting that marks the exact line reported by the compiler
- Pre-loaded example programs and a syntax reference panel
- User-created file tabs for writing and running your own programs

---

## 📦 Project Structure

```
/src
├── main.cpp
├── lexer.cpp / lexer.h
├── parser.cpp / parser.h
├── value.cpp / value.h
/Test_Cases
└── testprog1 ... testprog13  (sample input files with expected outputs)
/docs
└── index.html  (in-browser IDE)
```

---

## 🚀 How to Build & Run Locally

### ✅ Option 1: Compile with g++

If you have `g++` installed, run:

```
g++ src/main.cpp src/lexer.cpp src/parser.cpp src/value.cpp -o parser
```

Then to run the program:

```
./parser Test_Cases/testprog1
```

---

### ✅ Option 2 (Recommended): Use Makefile

If you have `make` installed, run:

```
make
```

To clean up the build files:

```
make clean
```

To run the program:

```
./parser Test_Cases/testprog1
```

---

## 📚 Notes

- Use the **MSYS2 MinGW x64** shell on Windows, or make sure `g++` is added to your system PATH.
- Only compile either:
  - `parser.cpp` (with `main.cpp`)
  - or `interpreter.cpp` (if you want the combined parser + interpreter)

➥ **Do not compile both together, or you will get linker errors.**

---

## 💡 Example Run Command

```
./parser Test_Cases/testprog1
```
