# Module 1 - Understanding the Computer

## Big Ideas

1. **Hardware** – CPU, I/O, Memory, etc. that are used to run your computer.
2. **Kernel** – The middleman between software applications you run (game, browser, etc.) and the actual hardware of the computer. It manages system resources, ensuring everything works together smoothly and efficiently.
    * Handles tasks like running programs, accessing files, and connecting to devices like printers and keyboards.
3. **Application Code** – Instructions written in a programming language that tell a software program (or simply app) what to do, processing data and performing specific tasks for the user (VSCode, compiler, Chrome, shell).
4. Often there are many details in an application you do not know yet and many details that aren't important at all in an application. **Abstraction** allows us to often ignore aspects we don't need to really worry about or dive into.
5. All code runs on **hardware**.
6. Compiler, application, CPU, PC, ALU, OS, memory, disk, I/O are all various hardware/software that work together to run a computer program!
7. The **OS** (Operating System) has a major role:
    * Switches between running programs.
    * Interfaces with many parts of the hardware like memory and other devices.

---

## CLI - Terminal/Shell Overview

There are many ways to interface with a computer. The two most common ones being the **GUI** (Graphical User Interface - where you click things!) and **CLI** (Command Line Interface - where you type stuff in a terminal!).

The CLI is very fast and efficient and is often preferred by many when dealing with file systems! Using a terminal running a shell is often great to:
* Navigate your files!
* Run applications! (Python, your compiler - GCC, ssh/scp)

### Simple Vocab
1. **Terminal/Command Line** – The interface where you run commands!
2. **Shell** – The software that executes commands in the command line!
3. **Directory (Folder)** – A folder in the file system.
4. **Path** – The location of a file or folder.

### Basic Commands
* `ls` – lists all files and directories in your working directory. (Use `-al` flag after `ls` to include hidden files (`-a`) and permissions (`-l`)).
* `cd` – changes the directory (a.k.a. folder!). Use `.` to indicate the current path. Use `..` to go back one directory in a path!
* `pwd` – Print the current working directory. Check what file path you are in. Good to know where you are in your file system!

---

## Running a C/C++ file

1. **Compile** $\rightarrow$ turns program into an executable.
2. **Run** the executable file $\rightarrow$ ran on CPU!

Every C/C++ file needs to be compiled!

For example, suppose there are three files: `a.c`, `a.h` (a header file for `a.c`), and `b.c`. To compile:
1. Compile each `.c` file listed.
2. Link together `.o` files (compiled machine code files!).
3. If there are many, use **make** (a.k.a. create a **Makefile**) to easily compile all dependencies and run the program!

> **Note:** When you update your written code, you need to recompile it into a new executable to see the change!
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTU5ODI1ODQ5MV19
-->