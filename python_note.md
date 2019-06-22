#!/usr/bin/python

Standard Data types
- numbers
- string
- list  [ ]
- tuple ( )
- dictionary  { }

things you cant do with all sequence types:
- indexing
- slicing
- adding
- multiplying
- checking for membership

var = ooxx
del var

str[2:]
print( str*2 )

list[::-1]  list[-1::-1] reverse the list
print( list*2 )
print( aList + bList )   aList.expand( bList )
cList = aList.copy( )
# Make a one layer deep copy using slices
li2 = li[:]  # => li2 = [1, 2, 4, 3] but (li2 is li) will result in false.

list comprehensions
[ x for x in [3, 4, 5, 6, 7] if x > 5 ]    # => [6, 7]

# You can construct set and dict comprehensions as well.
set
{ x for x in 'abcddeef' if x not in 'abc' }   # => {'d', 'e', 'f'}
dict
{ x: x**2  for x in range(5) }                # => {0: 0, 1: 1, 2: 4, 3: 9, 4: 16}


tuple can be thought of as read-only list
tuple can't be updated
tuple[N]
del tuple

dictionary
- no order
- no duplicated key
- key immutable

Dictionaries have no concept of order among elements. It is incorrect to say that the elements are "out of order"; they are simply unordered.
More than one entry per key not allowed. Which means no duplicate key is allowed. When duplicate keys encountered during assignment, the last assignment wins.

Keys must be immutable. Which means you can use strings, numbers or tuples as dictionary keys but something like ['key'] is not allowed.

false  dict1 = { ['name']:'zara','age':7 } 
true   dict2 = { 'name':'zara', 'age':7 }

repr(x)
Converts object x to an expression string.
eval(str)
Evaluates a string and returns an object.


type of operator
- arithmetic operators
  - / division  
  - % modulus
  - // floor division(int)
- comparison operator
- assignment operators
- bitwise operators

operators precedence

condition
loop
- for
- while

break
continue
pass

Random numbers are used for games, simulations, testing, security, and privacy applications.


r/R  Raw String - Suppresses actual meaning of Escape characters. 
print(r'aa/nbb')
Normal strings in Python are stored internally as 8-bit ASCII, while Unicode strings are stored as 16-bit Unicode.
print( u'hellp, world' )

Class
attribute
funtion   len(aList)
method    aList.append('ooxx')

time.time()
return current numbers of ticks since 12:00am, January 1, 1970(epoch)

Date arithmetic is easy to do with ticks. However, dates before the epoch cannot be represented in this form.
Dates in the far future also cannot be represented this way - the cutoff point is sometime in 2038 for UNIX and Windows.

shallow copy  deep copy
Pass by reference vs value
All parameters (arguments) in the Python language are passed by reference.
It means if you change what a parameter refers to within a function, the change also reflects back in the calling function.


- required argument
- keyword arguments
    - the order of parameters does not matter
- default arguments

Keyword arguments
# Function definition is here
def printme( str ):
   "This prints a passed string into this function"
   print(str)
# Now you can call printme function
printme( str = "My string")
# default Function definition is here
def printinfo( name, age = 35 ):
   "This prints a passed info into this function"
   print("Name:{}".format(name))
   print ("Age {}".format(age))

# Now you can call printinfo function
printinfo( age=50, name="miki" )
printinfo( name="miki" )

- Variable-length arguments
Syntax for a function with non-keyword variable arguments is this

def functionname([formal_args,] *var_args_tuple ):
   "function_docstring"
   function_suite
   return [expression]

# Function definition is here
def printinfo( arg1, *vartuple ):
   '''This prints a variable passed arguments'''
   print("Output is: ")
   print(arg1)
   for var in vartuple:
      print(var)

# Now you can call printinfo function
printinfo( 10 )
printinfo( 70, 60, 50 )

An asterisk (*) is placed before the variable name that holds the values of all nonkeyword variable arguments.
This tuple remains empty if no additional arguments are specified during the function call.


The Anonymous Functions
- Syntax
lambda [arg1 [,arg2,.....argn]]: expression
#Lambda forms can take any number of arguments but return just one value in the form of an expression.
#They cannot contain commands or multiple expressions.

sum = lambda arg1, arg2: arg1 + arg2
# Now you can call sum as a function
print("Value of total : {}"format(sum( 10, 20 )))   # => 30

(lambda x, y, z: x ** 2 + y ** 2 + z)(2, 1, 10)    # => 15
list(map(max, [1, 2, 3], [4, 2, 1]))               # => [4, 2, 3]
list(filter(lambda x: x > 5, [3, 4, 5, 6, 7]))     # => [6, 7]


## Scope of Variables
Variables that are defined inside a function body have a local scope, and those defined outside have a global scope.

The scope of a variable determines the portion of the program where you can access a particular identifier. There are two basic scopes of variables in Python
- Global variables
- Local variables

**What's *namespace* and *scoping*?**
- KEY-VALUE dictionary
Variables are names (identifiers) that map to objects.
A *namespace* is a dictionary of variable names (keys) and their corresponding objects(values).

- Local vs Global namespace

## Module
- A module is a Python object with arbitrarily named attributes that you can bind and reference.
- Simply, a module is a file consisting of Python code. A module can define functions, classes and variables. 
- The Python code for a module named ooxx normally resides in a file named ooxx.py. 
- Python's __from statement__ lets you import specific attributes from a module into the current namespace.
- When you import a module, the Python interpreter searches for the module in the following sequences:

  - The current directory.
    > If the module isn't found, Python then searches each directory in the shell variable PYTHONPATH.
    > If all else fails, Python checks the default path. On UNIX, this default path is normally /usr/local/lib/python/.

The module search path is stored in the system module __sys__ as the sys.path variable. The sys.path variable contains the current directory, PYTHONPATH, and the installation-dependent default.

Variables are names (identifiers) that map to objects. A namespace is a dictionary of variable names (keys) and their corresponding objects (values).

the special string variable __name__ is the module's name, and __file__ is the filename from which the module was loaded.

# Packages in Python
/phone
    - pots.py
    - Isdn.py
    - G3.py
    - __init__.py
        - import phone

## what's a module in python?
* A module is a file consisting of Python code. 
* A module can define functions, classes and variables. 
* A module can also include runnable code.

## then what's package in python ?
> It includes many directories and python files. 
> "A package is a hierarchical file directory structure that 
> defines a **single Python application environment** that 
> consists of modules and subpackages and sub-subpackages, and so on."

**What's the role of *__init__.py* file in a Python package ?**
> To import a package by the package's name

**how do *dir()* do?**
built-in function returns a sorted list of strings 
containing the names defined by a module.


## IMPORT
You can use any Python source file as a module 
by executing an import statement in some other Python source file.

FROM　　*　IMPORT *
Python's FROM  statement lets you import specific attributes 
from a module into the current namespace.

from  filename import attribute, function, method
import filename

**where to find filename.py?**
print(u'%s' % sys.__doc__)

## locating modules:
- the current directory
- search directory in the shell varialble PYTHONPATH
- the Default path, in unix: /usr/local/lib/python/


File I/O
Reading Keyboard Input in pyton3

str = input("Enter your input: ");
print "Received input is : ", str

Enter your input: [x*5 for x in range(2,10,2)]
Recieved input is :  [10, 20, 30, 40]

write()
does not add '\n' to the end of the string
writelines()
writelines expects a list of strings, while write expects a single string.

read()       the whole File
readline()   a string with '\n'
readlines()  a List, every line is a element with '\n'

os module provides methods that help you perform file-processing operations,
such as renaming and deleting files.
os.rename(old_name, new_name)
os.remove(filename)
os.mkdir(dir_name)
os.chdir(new_dir)   change the current directory
os.getcwd()         display the current working directory
os.rmdir(dir_name)


(is vs. ==) 
is checks if two variables refer to the same object, 
but == checks if the objects pointed to have the same values.

## Handle exceptions with a try/except block
try:
    # Use "raise" to raise an error
    raise IndexError("This is an index error")
except IndexError as e:
    pass                 # Pass is just a no-op. Usually you would do recovery here.
except (TypeError, NameError):
    pass                 # Multiple exceptions can be handled together, if required.
else:                    # Optional clause to the try/except block. Must follow all except blocks
    print("All good!")   # Runs only if the code in try raises no exceptions
finally:                 # Execute under all circumstances
    print("We can clean up resources here")

## Instead of try/finally to cleanup resources you can use a with statement
with open("myfile.txt") as f:
    for line in f:
        print(line)

import math as m
math.sqrt(16) == m.sqrt(16)


## Object Oriented Pragraming
- class
- object
- instance
- attribute
- method
- function
- inheritance

```
class Superhero(Human):
    species = 'Superhuman'
    def __init__(self, name, movie=False, superpowers=["super strength", "bulletproofing"]):
        self.fictional = True
        self.movie = movie
        self.superpowers = superpowers
        super().__init__(name)

    def sing(self):
        return 'Dun, dun, DUN!'

    def boast(self):
        for power in self.superpowers:
            print("I wield the power of {pow}!".format(pow=power))


class Superhero3(Human):
    species = 'Superhuman'
    def __init__(self, name, movie=False, superpowers=["super strength","bulletproofing"]):
        self.fictional = True
        self.movie = movie
        self.superpowers = superpowers
        super().__init__(name)
```

What does super(Employee, self).__init__(name) do?
That’s how you can run the __init__ method of a parent class reliably. Go search for “python
super” and read the various advice on it being evil and good for you.


    def sing(self):
       return 'Dun, Dun!'

    def boast(self): 
       for power in self.superpowers:
           print("I wield the power of {pow}!".format(pow=power))                

```
class Bat:
    species = 'Baty'
    def __init__(self, can_fly=True):
        self.fly = can_fly
    def say(self, msg):
        msg= '*** ***'
        return msg
    def sonar(self):
        return ')))...((('

class Batman(Superhero, Bat):
    def __init__(self, *args, **kwargs):
        Superhero.__init__(self, 'anonymous', movie=True, superpowers=['Wealthy'], *args, **kwargs)

        Bat.__init__(self, *args, **kwargs)
        self.name = 'Sad Affleck'

    def sing(self):
      return 'nan nan nan nan nan batman!'
```

## Animal is- a object look at the extra credit
class Animal(object):
pass

## class has-a 
class Dog(Animal):
    def __init__(self, name):
        ## has-a
        self.name = name

class Name(object)

his is where “class is- a object” comes in. They decided that they would use the word
“object,” lowercased, to be the “class” that you inherit from to make a class. Confusing, right?
A class inherits from the class named object to make a class, but it’s not an object. (Really
it’s a class, but do not forget to inherit from object.)

