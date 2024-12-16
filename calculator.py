def subtract(stack1):
    if len(stack1) >= 2:
        stack1[0] = stack1[1] - stack1[0]
        stack1.pop(1)
    else:
        print("Not enough arguments on stack")

def add(stack1):
    if len(stack1) >= 2:
        stack1[0] = stack1[1] + stack1[0]
        stack1.pop(1)
    else:
        print("Not enough arguments on stack")

def multiply(stack1):
    if len(stack1) >= 2:
        stack1[0] = stack1[1] * stack1[0]
        stack1.pop(1)
    else:
        print("Not enough arguments on stack")
        
def divide(stack1):
    if len(stack1) >= 2:
        stack1[0] = stack1[1] / stack1[0]
        stack1.pop(1)
    else:
        print("Not enough arguments on stack")
    
def clear(stack1):
    stack1.clear()
    
def drop(stack1):
    stack1.pop(0)

def enter(stack1, input):
    stack1.insert(0, input)


stack = [] # RPN stack
op_status = 1 # true when calulator is operating

print("RPN Calculator by JT\n enter * to mulitply, - to subtract, and + to add\n Enter e to quit, c to clear stack, and d to remove most recent input")



while op_status:
    print("\n\n")
    print(stack)
    action = input()
    if action == "*": # multiply
        multiply(stack)
    elif action == "/": # divide
        divide(stack)
    elif action == "+": # add
        add(stack)
    elif action == "-": # subtract
        subtract(stack)
    elif action == "d": #drop most recent stack entry
        drop(stack)
    elif action == "c": #clear stack
        clear(stack)
    elif action == "e": # exit program
        op_status = 0
    else: 
        try: 
            x = float(action)
            enter(stack, x)
        except ValueError:
            print("You did not enter a number or valid command")
    
print("Calculator turned off")