<h1 align="center">
	🔑 Simple Shell
</h1>

<p align="center">
	<b><i>HOLBERTON SCHOOL Simple Shell</i></b><br>
</p>

<p align="center">
<img src="https://media0.giphy.com/media/gU25raLP4pUu4/giphy.gif?cid=790b76116e2a388f5f6f10d0313c30e62b755121af79704b&rid=giphy.gif&ct=g" >
</p>

<h3 align="center">
	<a href="#Description">About</a>
	<span> · </span>
	<a href="#Algorithm-and-logic-behind-this">Usage</a>
	<span> · </span>
	<a href="#Compilation-and-testing">Testing</a>
</h3>

---

## 📋 Simple Shell:

 <h3 simple_shell </h3> A simple UNIX command interpreter written as part of the low-level programming and algorithm.

## 🔍 Description: 

 <h3 simple_shell </h3>  is a simple UNIX command language interpreter that reads commands from either a file or standard input and executes them.


## 📇  Introduction to Function in Shell Scripting
{r mon_bloc, echo = FALSE, WARNING = TRUE}

A function is a block of code that is reusable and performs certain operations. Like any other programming language, Shell-Scripting also supports functions. Functions are popular for the following reasons:

* Help to reuse a piece of code.
* Improve the readability of the program.
* Make the program modular.
* Make maintenance easier.

There are two ways of writing functions:

* Keep the function in the same script where it is used.
* Write a library of useful functions inside a file and import the file in the script where it is required.

## 🛠️  Algorithm and logic behind this
* Check this flowchart explaining the functions flow
![flowchart](_printfFLOWCHART.png)

## 🔭  Compilation and testing

#### We are compiling via:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
#### We are Testing via:

* This in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
* But also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
### EXEMPLE


## 🎯  What our file stand for:

* [README.md](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell/blob/main/README.md) :The README file
* [AUTHORS](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell):  This file contains the authors of the project
* [execute.c](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell/blob/main/execute.c) : This file contains the function to handle each argument type like (b,u, o, x, X)
* [parse.c](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell/blob/main/parse.c): This file contains the function to handle each argument type like (r, )
* [print_env.c](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell/blob/main/print_env.c) : this file containe the function how cheks function 
* [prompt.c](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell/blob/main/prompt.c) : This file contains the standard function (_putchar).
* [readline.c](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell/blob/main/readline.c) : This file contains the standard function (_putchar).
* [shell.c](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell/blob/main/shell.c) : This file contains the standard function (_putchar).
* [shell.h](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell/blob/main/shell.h) : The Header file
* [signal.c](https://github.com/HanaOuerghemmi/holbertonschool-simple_shell/blob/main/signal.c) :

## 🃏  Functions used:

* access
* chdir
* close
* closedir
* execve
* exit
* _exit
* fflush
* fork
* free
* getcwd
* getline
* getpid
* isatty
* kill
* malloc
* open
* opendir
* perror
* read
* readdir
* signal
* stat
* lstat
* fstat
* strtok
* wait
* waitpid
* wait3
* wait4
* write
 ## 🃏 OTHER Functions used:

* _strncpy
* _strlen
* _putchar
* _atoi
* _puts
* _strcmp
* _isalpha
* array_rev
* intlen
* _itoa
* _strcat
* _strcpy
* _strchr
* _strncmp
* _strdup
* _memcpy
* _calloc
* _realloc
* _getenv
* _getline
* _strtok
For More Info About It Check The Man Page by

./man_simple_shell
## Authors:
* [Hana Ouerghemmi](https://github.com/HanaOuerghemmi)
* [ Majdi Aribi](https://github.com/majdideveloper)
* [Dhafer Hamza Sfaxi](https://github.com/dhaferHS) 
