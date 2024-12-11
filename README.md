# RPN-Calculator
Python Based

This is a simple, 4-function, console based Reverse-Polish Notation Calculator.
Reverse-Polish Notation is a post-fix UI for a calculator.

Enter a number and it goes into the stack. Enter another and it goes into the stack, pushing up the prior. Enter an operation and using the 2 most recent entries in the stack, the calculator will perform the operation and place it into the bottom of the stack, removing the two stack entries used for the operation.


Example:

[3,4,6]   ––>  [12,6]

*         

[3,4,6]   ––>  [1.33,6]

/        


## Controls:
• d : drop: drop stack; remove most recent entry from stack

• c : clear: clear stack of all entries; reset

• e : exit: exit program; quit

• * : multiply
  
• / : divide ; for 12 / 6 = 2, 6 must be at the bottom of the stack

• - : subtract; for 4 - 3 = 1, 3 must be at the bottom of stack
  
• + : add


## Future Plans:
I plan to make a physical implementation of this using a microcontroller and custom PCB. I will be modelling it after the HP-15C, but with an upgrade to the screen. The HP-15C fails to show the user the values in the stack, only the  current line. I will use a bigger screen that shows at least 3 lines of stack and the current line.
