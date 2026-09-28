# Turbo C++ / C89 Viva Cheat Sheet

## 1. Type Promotion Hierarchy Ladder
When evaluating an expression with different data types, C automatically promotes smaller types to larger types to prevent data loss. The ladder from lowest to highest is:
**Bool** -> **Char** -> **Short int** -> **Int** -> **Unsigned int** -> **Long** -> **Float** -> **Double** -> **Long Double**

## 2. Formatted vs. Unformatted I/O
- **Formatted I/O (`printf`, `scanf`)**: Allows reading and writing data in a specific format using format specifiers (e.g., `%d` for integers, `%f` for floats). They are versatile and can handle multiple data types in a single statement.
- **Unformatted I/O (`getch`, `getche`, `gets`, `puts`)**: Deals directly with characters or strings without needing format specifiers. They are simpler and faster but restricted to specific types of data (like characters and strings).

## 3. `getch()` vs. `getche()`
Both are used to read a single character from the console without waiting for the Enter key.
- **`getch()`**: Does **not** echo the pressed character to the screen (useful for hidden inputs like passwords or waiting for a key press).
- **`getche()`**: **Echoes** (displays) the pressed character to the screen.

## 4. Memory Sizing: `sizeof(int)`
- In **16-bit real-mode Turbo C++** (DOS era), an `int` corresponds to the natural word size of the 16-bit processor, which is **2 bytes** (range: -32,768 to 32,767).
- In modern **64-bit GCC** (and most 32-bit environments), an `int` is typically **4 bytes** to align with the standard 32-bit word processing model commonly used for generic integer math, offering a much larger range.

## 5. C89 Variable Scoping Rule
In the C89/C90 standard, **all variable declarations must be placed strictly at the beginning of a block** (immediately following an opening brace `{`), before any executable statements are encountered. This is why you must declare all your variables *before* calling `clrscr()`. If you call `clrscr()` first and then declare variables, the compiler will throw a syntax error.
