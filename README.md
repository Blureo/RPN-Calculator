# RPN-Calculator
V1 - Python Based

V2 - C++ Based

-----

Verison 2 of this calculator was translated to C++ with additional functions, where version 1 only had 4 functions. Version 2 ***must*** be compiled using C++11 or later, as previous versions did not support range-based for loops.

Enter a number and it goes into the stack. Enter another and it goes into the stack, pushing up the prior. Enter an operation and using the 2 most recent entries in the stack, the calculator will perform the operation and place it into the bottom of the stack, removing the two stack entries used for the operation. Single value operations such as cosine, square, and log10 only use the bottom value on the stack.


Example:

[3,4,6]   ––>  [12,6]

input: *         

[3,4,6]   ––>  [1.33,6]

input: /       


## Controls:
• d : drop: drop stack; remove most recent entry from stack

• c : clear: clear stack of all entries; reset

• e : exit: exit program; quit

• * : multiply
  
• / : divide ; for 12 / 6 = 2, 6 must be at the bottom of the stack

• - : subtract; for 4 - 3 = 1, 3 must be at the bottom of stack

• sin : sin

• cos : cos

• tan : tan

• asin : arcsin

• acos : arccos

• atan : arctan
  
• e : e^x

• ln : natural log

• ^ : x^y ; for 6^2 = 36, 6 must be at bottom of stack

• ^2 : x^2 

• root : y√x or the yth root of x ; for cubic root of 8 = 2, 8 must be at bottom of stack

• sqrt : √x or the square root of x

• logN : log_y(x) or log base y of x ; for log base 2 of 8 = 3, 8 must be at bottom of the stack

• log10 : log_10(x) or log base 10 of x


## Future Plans:
I plan to make a physical implementation of this using a microcontroller and custom PCB. I will be modelling it after the HP-15C, but with an upgrade to the screen. The HP-15C fails to show the user the values in the stack, only the  current line. I will use a bigger screen that shows at least 3 lines of stack and the current line.
