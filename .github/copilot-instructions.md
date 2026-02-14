# Copilot Instructions for Yards Project

## Language and Standards
- Use **C++20** standard for all C++ code
- Enable modern C++20 features where appropriate

## Code Style and Formatting

### Comments
- **Always use `/* */` block comment format** for all comments
- Comments must be placed **above** the code they describe
- Use **double spacing** (two spaces) for indentation
- Comments should be clear, concise, and explain the "why" rather than the "what"

### Example Comment Style
```cpp
/*  This function initializes the memory management system  */
void initMemory() {
  /*  Allocate the initial memory pool  */
  void* pool = malloc(POOL_SIZE);
  
  /*  Set up memory tracking structures  */
  setupTracking(pool);
}
```

## General Guidelines
- Write clean, maintainable, and well-documented code
- Follow RAII principles for resource management
- Use smart pointers (`std::unique_ptr`, `std::shared_ptr`) instead of raw pointers where appropriate
- Prefer `constexpr` and `const` where applicable
- Use `auto` for type deduction when it improves readability
- Follow the Rule of Zero/Three/Five for class design
- Write exception-safe code
- Use standard library containers and algorithms instead of reinventing the wheel

## Testing
- Write tests for new functionality
- Ensure all tests pass before committing
- Use meaningful test names that describe the behavior being tested

## Documentation
- Keep README.md up to date
- Document public APIs thoroughly
- Add inline comments for complex logic
- Follow the comment style guide consistently

## File Organization
- Header files should use `.h` or `.hpp` extension
- Implementation files should use `.cpp` extension
- Use include guards or `#pragma once` in headers
- Organize includes: standard library, third-party, project-specific

## Commit Messages
- Write clear, descriptive commit messages
- Use present tense ("Add feature" not "Added feature")
- Keep the first line under 50 characters
- Provide detailed description in the body if needed
