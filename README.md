# Simple Shell
Simple Shell is a project for students at Alx School. The project test everything we have learned about the C programming language and our skills for work as a team and planning for a long term project.

## Description
The Simple Shell is a simple UNIX command interpreter written in C. The program runs based on bash commands obtained from the input stream by the user, the respective command typed by the user in executed as if in a UNIX shell.

## Requirements
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS
Your C programs and functions will be compiled with gcc using the Options -Wall -Werror -Wextra -pedantic -std=gnu89 All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Your shell should not have any memory leaks
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to (why?)
## Compilation
All of the .c files along with a main.c file are to be compiled with gcc 4.8.4 on Ubuntu 14.04 LTS with the flags -Wall Werror -Wextra and -pedantic. The files will be compiled this way:

- gcc -Wall -Werror -Wextra -pedantic *.c -o hsh Execute $ ./hsh
## List of allowed functions and system calls
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)
## Checks
The Checker will be released at the end of the project (1-2 days before the deadline). We strongly encourage the entire class to work together to create a suite of checks covering both regular tests and edge cases for each task. See task 8. Test suite.
