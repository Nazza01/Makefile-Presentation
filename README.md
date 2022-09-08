# Makefile-Presentation
The supporting code for the Makefile Presentation at 42 Adelaide - 8th September 2022

See the Makefile.pdf for the presentation, will upload the recording of the presentation when it is available.

# Concept Breakdown

3-MakeRules
-----------------------
- What is a rule
- How to write a rule
- Why the default rule is the first one that runs

4-Basics
-----------------------
- Basic compilation and example with a hello world example
- Cleaning

5-Variables
-----------------------
- Using variables for subsitution in rules
- Setting up NAME rule

6-CompLink
-----------------------
- Difference between compilation and linking and pre-requisite rule calling

10-42ify
-----------------------

### 1-simple
-----------------------
- Definition of all 42 make rules (all $(NAME) clean fclean re)
- Listing sources explicity

### 2-Relinking
-----------------------
#### 2-Relinking-HowToDo
- Shows an example of how relinkng wont happen with proper setup of all rules

#### 2-Relinking-Whatnottodo
-----------------------
- Makefile
	- Shows an example from online that links every time make is run, which is known as re-linking
- Fixed.mk
	- Shows a fixed example of the Makefile with proper rules/definitions.

### 3-MultipleBinaries
-----------------------
- Shows how to have two executables without having rules setup
- Shows implicit rules (automatic built in rules for make to compile .c to .o)

### 4-NonSystemLib
-----------------------
- Shows how to use a included library in the linking stage

13-Bonus
-----------------------
- Covers how to setup a bonus rule in your makefile
- Linking a library using ar -rcs as well as ranlib to index the library

14-Organised
-----------------------
- Showcases a bit more organised directory setup for the everything.

15-Nested
-----------------------
- Allows for a sources folder having subfolders and we use a rule to create the same directory structure for the objects.
- Also we need to define a specific syntax for the compilation stage so the program knows where each object is.

16-ProjectLayout
-----------------------
- Shows a project layout with a library
- organised sources/objects/headers/includes

17-TipsAndTricks
-----------------------
- Shows including another makefile inside another for using variables across them.
- Shows automatic detection of libraries and folders for it too
- Shows ifeq for silent command progression
