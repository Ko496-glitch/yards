# Coding Practices for Yards Project

## Overview
This document outlines the coding standards and practices for the Yards project. All contributors should follow these guidelines to maintain code consistency and quality.

## Language Standard
- **C++20** is the standard for this project
- Compiler must support C++20 features
- Use modern C++20 features and idioms

## Code Formatting

### Indentation
- Use **2 spaces** (double spacing) for indentation
- Do not use tabs
- Ensure consistent indentation throughout the file

### Comments
- **Always use `/* */` block comment style**
- **Never use `//` single-line comments**
- Comments must be placed **on top** of (above) the code they describe
- Add a blank line between comment and the previous code block for readability

#### Comment Examples

**Correct:**
```cpp
/*  Initialize the system  */
void init() {
  /*  Set up default configuration  */
  config = getDefaultConfig();
  
  /*  Start the main loop  */
  mainLoop();
}
```

**Incorrect:**
```cpp
// Don't use single-line comments
void init() {
  config = getDefaultConfig();  // Don't place comments inline
}
```

### Braces and Spacing
- Opening brace on the same line for functions and control structures
- Add space before opening brace
- Closing brace on its own line

```cpp
/*  Example function  */
void exampleFunction() {
  if (condition) {
    doSomething();
  }
}
```

## C++20 Best Practices

### Use Modern Features
- Use `concepts` for template constraints
- Use `std::span` for array views
- Use `ranges` library for algorithms
- Use `std::format` for string formatting (when available)
- Use structured bindings for multiple return values
- Use designated initializers where appropriate

### Memory Management
- Prefer stack allocation over heap allocation
- Use RAII (Resource Acquisition Is Initialization)
- Use smart pointers (`std::unique_ptr`, `std::shared_ptr`) instead of raw pointers
- Avoid manual `new` and `delete`

### Type Safety
- Use `auto` for type deduction when it improves readability
- Use `constexpr` for compile-time constants
- Use `const` and `constexpr` liberally
- Use strongly-typed enums (`enum class`)
- Avoid C-style casts; use C++ casts (`static_cast`, `dynamic_cast`, etc.)

### Standard Library
- Prefer standard library containers over custom implementations
- Use standard algorithms instead of manual loops where possible
- Use `std::array` instead of C-style arrays
- Use `std::string` and `std::string_view` for strings

## Naming Conventions

### Variables and Functions
- Use camelCase for variables and functions
- Use descriptive names that convey meaning
- Avoid abbreviations unless widely understood

```cpp
/*  Good variable names  */
int userCount;
std::string userName;
void calculateTotalScore();

/*  Avoid  */
int uc;
std::string usrnm;
void calcTotScr();
```

### Classes and Types
- Use PascalCase for class names and type names
- Use descriptive names

```cpp
/*  Class definition  */
class MemoryManager {
  /*  Implementation  */
};

/*  Type alias  */
using UserList = std::vector<User>;
```

### Constants
- Use UPPER_SNAKE_CASE for compile-time constants
- Use `constexpr` for constants

```cpp
/*  Constant definition  */
constexpr int MAX_BUFFER_SIZE = 1024;
constexpr double PI = 3.14159265359;
```

## File Organization

### Header Files (.h, .hpp)
- Use include guards or `#pragma once`
- Organize includes in order:
  1. Corresponding header (for .cpp files)
  2. Standard library headers
  3. Third-party library headers
  4. Project-specific headers
- Group related includes together

```cpp
#pragma once

/*  Standard library includes  */
#include <string>
#include <vector>
#include <memory>

/*  Project includes  */
#include "config.h"
#include "utils.h"

/*  Class declaration  */
class MyClass {
  /*  Implementation  */
};
```

### Source Files (.cpp)
- Include corresponding header first
- Follow same include organization as headers
- Keep functions focused and concise

## Error Handling
- Use exceptions for exceptional conditions
- Use return codes for expected errors
- Document exceptions that functions may throw
- Write exception-safe code (use RAII)
- Prefer `std::optional` for functions that may not return a value

## Testing
- Write unit tests for new functionality
- Use descriptive test names
- Test edge cases and error conditions
- Ensure tests are independent and repeatable

## Documentation
- Document all public APIs
- Use clear, concise language
- Follow the comment style guide
- Keep documentation up to date with code changes

## Version Control
- Write meaningful commit messages
- Keep commits focused and atomic
- Test before committing
- Don't commit commented-out code
- Don't commit build artifacts or generated files

## Code Review Guidelines
- Review code for adherence to these practices
- Check for proper error handling
- Verify comments follow the style guide
- Ensure tests are included
- Look for potential memory leaks or resource issues

## Additional Resources
- C++20 Reference: https://en.cppreference.com/w/cpp/20
- C++ Core Guidelines: https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines

---

**Remember:** Consistency is key. When in doubt, look at existing code in the project and follow the established patterns.
