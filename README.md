# Aim  
To study and implement the different types of operators in C++.  

# Software Required  
Visual Studio  

# Theory  
In C++, an operator is a symbol that directs the compiler to perform a specific action. These can be mathematical operations, comparisons, logic decisions, or even bit manipulation. Operators are the basic building blocks of expressions in any program.  

The different categories of operators are:  

---

### 1. Arithmetic Operators  
Arithmetic operators are used for mathematical calculations.  
- `+` : Addition (e.g., `a + b`)  
- `-` : Subtraction (e.g., `a - b`)  
- `*` : Multiplication (e.g., `a * b`)  
- `/` : Division (e.g., `a / b`)  
- `%` : Modulus, gives the remainder (e.g., `a % b`)  

Example: If `a = 10` and `b = 3`, then  
- `a + b = 13`  
- `a - b = 7`  
- `a * b = 30`  
- `a / b = 3` (integer division)  
- `a % b = 1`  

---

### 2. Relational Operators  
These are used to compare two values or expressions. The result is either `true (1)` or `false (0)`.  
- `==` : Equal to  
- `!=` : Not equal to  
- `>`  : Greater than  
- `<`  : Less than  
- `>=` : Greater than or equal to  
- `<=` : Less than or equal to  

Example: If `a = 10` and `b = 3`,  
- `a > b` → true  
- `a == b` → false  
- `a != b` → true  

---

### 3. Logical Operators  
Logical operators are mainly used with conditional statements. They work on boolean values.  
- `&&` : Logical AND → true only if both conditions are true  
- `||` : Logical OR  → true if at least one condition is true  
- `!`  : Logical NOT → reverses the truth value  

Example: If `x = 1` (true) and `y = 0` (false),  
- `x && y` → false  
- `x || y` → true  
- `!x` → false  

---

### 4. Bitwise Operators  
Bitwise operators operate on binary bits of integers.  
- `&`  : Bitwise AND  
- `|`  : Bitwise OR  
- `^`  : Bitwise XOR  
- `~`  : Bitwise NOT (flips bits)  
- `<<` : Left shift  
- `>>` : Right shift  

Example: If `a = 5 (0101 in binary)` and `b = 3 (0011 in binary)`,  
- `a & b = 1 (0001)`  
- `a | b = 7 (0111)`  
- `a ^ b = 6 (0110)`  
- `~a = -6` (in 2’s complement representation)  
- `a << 1 = 10 (1010)`  
- `a >> 1 = 2 (0010)`  

---

### 5. Assignment Operators  
These are used to assign or update values of variables.  
- `=`  : Simple assignment (e.g., `a = 5`)  
- `+=` : Add and assign (e.g., `a += 3` means `a = a + 3`)  
- `-=` : Subtract and assign (e.g., `a -= 2`)  
- `*=` : Multiply and assign (e.g., `a *= 2`)  
- `/=` : Divide and assign (e.g., `a /= 2`)  
- `%=` : Modulus and assign (e.g., `a %= 3`)  

Example: If `a = 10`,  
- `a += 3` → `a = 13`  
- `a *= 2` → `a = 20`  

---

# Implementation  
I implemented the concepts of operators with three small programs:  

1. **Check if a number is Positive or Negative**  
   - Uses relational operators (`>`, `<`) to decide if the entered number is positive, negative, or zero.  

2. **Student Grade Determination**  
   - Accepts marks in five subjects, calculates the average.  
   - Uses relational (`>=`, `<`) and logical (`&&`) operators to decide whether the student gets Grade A, B, C, etc.  

3. **Quadrant Determination**  
   - Takes `x` and `y` coordinates as input.  
   - Uses a combination of relational and logical operators to check whether the point lies in the 1st, 2nd, 3rd, or 4th quadrant.  
   - If `x = 0` or `y = 0`, it also handles axis cases.  

---

# Conclusion  
By performing this practical, I got hands-on experience with the different operators in C++. I learned how arithmetic operators handle calculations, relational and logical operators help with decisions, bitwise operators manipulate binary data, and assignment operators simplify updating variables. These are fundamental tools for writing any C++ program.  
