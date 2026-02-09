# C++ Learning Log

## 📅 2026-01-23
### ⏱ Session Length
~15 minutes

### 🎯 Focus
- Practicing `for` loops, `while` loops, and nested loops
- Loop control: `break`, `continue`
- Iterating over arrays and vectors

### 🧠 Key Concepts Learned
- `for` loop structure: `for(initialization; condition; increment)`  
- `while` loop continues as long as condition is true  
- Nested loops iterate fully for each iteration of outer loop  
- `break` exits the current loop immediately  
- `continue` skips the rest of the current iteration and moves to the next  

### ❓ Questions / Confusion
- When is a `while` loop preferable over a `for` loop?  
- How to avoid off-by-one errors in nested loops?  
- Best way to print a 2D array using loops efficiently  

### 💡 Breakthroughs
- Realized that nested loops are just loops inside loops — the inner loop completes fully for each outer iteration  
- Visualizing loop iterations on paper helps catch off-by-one mistakes  

### ➡️ Next Session Goals
- Practice looping through vectors and strings  
- Try writing a multiplication table using nested loops  
- Experiment with `do-while` loops for at least one example

---

## 📅 2026-01-16
### ⏱ Session Length
~30 minutes

### 🎯 Focus
- Running C++ in VS Code
- `main()` errors
- `std::cout`, `std::endl`, namespaces

### 🧠 Key Concepts Learned
- `std::endl` is a stream manipulator (function), not a value
- `std::cout << std::endl;` works because of operator overloading
- `using namespace std;` pulls names into global scope
- Best practice is explicit `std::`

### ❓ Questions / Confusion
- When *should* I actually use `std::endl` vs `'\n'`?
- How does `operator<<` know how to handle functions?

### 💡 Breakthroughs
- Realized `std::endl` is basically a function call
- Linking errors usually mean “compiler can’t find something”

### ➡️ Next Session Goals
- Practice references vs values
- Write a swap function using references
