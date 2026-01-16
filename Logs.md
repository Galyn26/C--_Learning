# C++ Learning Log

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
