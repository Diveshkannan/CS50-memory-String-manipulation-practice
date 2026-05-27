String Copy and Capitalization in C (CS50 Practice Project)

## Overview

This project is a simple implementation of string copying and character manipulation in C, built as part of my CS50 learning journey. The program manually copies a string into a separate character array and capitalizes the first character using "toupper()" from "ctype.h".

The goal of this project is to strengthen understanding of:

- string storage in memory,
- array-based string copying,
- stack memory allocation,
- loops and traversal,
- and character manipulation in C.

---

## How It Works

1. The program takes a string input from the user using CS50’s "get_string()".
2. A new character array is created with enough memory to store the copied string.
3. The original string is manually copied character by character into the new array.
4. The first character of the copied string is converted to uppercase using "toupper()".
5. Both the original and modified copied string are printed.

---

## Features

- Manual string copying without using "strcpy()"
- Separate copied string stored in another memory location
- First-character capitalization using "toupper()"
- Preserves the original string unchanged
- Demonstrates stack-based array allocation

---

## Concepts Used

- Strings in C
- Character arrays
- Loops and traversal
- Stack memory allocation
- ASCII character manipulation
- String copying logic

---

## What I Learned

- How strings are stored as arrays of characters
- How to manually copy strings in C
- Difference between modifying original and copied strings
- How stack memory behaves in local scope
- How functions like "toupper()" operate on characters

---

## Limitations

- Uses stack memory allocation instead of dynamic heap allocation
- String lifetime is limited to function scope
- Only capitalizes the first character
- Does not handle Unicode or multi-byte characters

---

## Future Improvements

- Implement dynamic memory allocation using "malloc()"
- Add full-word capitalization support
- Replace manual copy logic with reusable utility functions
- Add lowercase-to-uppercase transformations for entire strings
- Explore deeper memory management concepts

---

## Conclusion

This project reflects my continued effort to strengthen low-level programming fundamentals through hands-on experimentation while learning C and computer science concepts through CS50.