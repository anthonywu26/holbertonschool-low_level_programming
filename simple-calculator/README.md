## C - Simple Calculator
A calculator program that serves as a checkpoint for my current understanding of the C programming language.

### Usage
- **Compilation Instructions** - Ensure the pwd contains calculator.c and calculator.h. Run:
    ```bash
    gcc -Wall -Werror -pedantic -std=gnu89 calculator.c -o calculator
    ```
- **Run Instructions** - Run the executable with the following command:
    ```bash
    ./calculator
    ```

### Supported Operations
The user selects an operation type.
The calculator will then prompt the user to enter integer values `a` and `b`. According to the inputs, the calculator will then return a result:
- Addition: `a + b`.
- Subtraction: `a - b`.
- Multiplication: `a × b`.
- Division: `a ÷ b`, assuming that `b` is nonzero.*

*When `b` is zero and operation type is division, the calculator reports `Error: division by zero`.

### Numeric behaviour
- Under addition, subtraction and multiplication, the result is still an integer (integers are closed under addition and multiplication). However, the result of a division may not necessarily be an integer and is converted to a floating point in our implementation.

### Limitations and possible extensions
- Does not support a mix of both floating point and integer operands.
- Does not support parenthesis or compound expressions.
