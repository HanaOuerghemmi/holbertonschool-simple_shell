<h1 align="center">
	🔑 Simple Shell
</h1>

<p align="center">
	<b><i>HOLBERTON SCHOOL Simple Shell</i></b><br>
</p>
<p align="center">
	<img ="Simple Shell" src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTeL2ivVpHRvL1aL3qa1svnG85MEwdJwfgb6g&amp;usqp=CAU"/>
</p>

<p align="center">
<img src="https://media.giphy.com/media/JVGLHEuzbVviw/giphy.gif" alt="funny GIF" width="100%">
</p>
<p align="center">
<iframe src="https://giphy.com/embed/Lny6Rw04nsOOc" width="480" height="360" frameBorder="0" class="giphy-embed" allowFullScreen></iframe><p><a href="https://giphy.com/gifs/code-404-javascript-Lny6Rw04nsOOc">via GIPHY</a></p>
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


## 📇  Function prototype
```{r mon_bloc, echo = FALSE, WARNING = TRUE}

int _printf(const char *format, ...);
```
where format can be a simple string without any specifiers or it can contain specifiers and the arguments corresponding to them.

## 📔  Implemented format specifiers

| Specifier:|	Output							|	Example			|
| :---------|:----------------------------------|-----------------:	|
|	c		|		Character					|		H			|
|	s		|		String						|		Hello		|
|	d		|		decimal integer				|		100			|	
|	i		|		Integer						|		100			|
|	%		|		% followed by another %		|		%			|
|	b		|		Binary						|		1010		|
|	u		|	Unsigned decimal int			|		100			|
|   o		|	Unsigned octal integer			|		1142		|
|	x		|	Unsigned Hzxadecimal (lowcase)	|		7fa			|
|	X		|	Unsigned Hexadecimal (uppercase)|		7FA			|
|	r		|	Reverse a string				|		olleh		|



>Check the [Man](https://github.com/HanaOuerghemmi/holbertonschool-printf/blob/main/man_3_printf) Page for detailed usage.

## 🛠️  Algorithm and logic behind this
* Check this flowchart explaining the functions flow
![flowchart](_printfFLOWCHART.png)

## 🔭  Compilation and testing

#### We are compiling via:
```{r mon_bloc, echo = FALSE, WARNING = TRUE}
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
### EXEMPLE
```
_printf("print d :%d\n", -762534);

```
`the output` : 

	print d : -762534


## 🎯  What our file stand for:

* [Main.h](https://github.com/HanaOuerghemmi/holbertonschool-printf/blob/main/main.h) :The Header file
* [Get_function.c](https://github.com/HanaOuerghemmi/holbertonschool-printf/blob/main/get_function.c):  This file contains the functions to handle each argument type like (s, c, %, i, d).
* [Get_more_func.c](https://github.com/HanaOuerghemmi/holbertonschool-printf/blob/main/get_more_func.c) : This file contains the function to handle each argument type like (b,u, o, x, X)
* [even_func.c](https://github.com/HanaOuerghemmi/holbertonschool-printf/blob/main/even_func.c): This file contains the function to handle each argument type like (r, )
* [get_all.c](https://github.com/HanaOuerghemmi/holbertonschool-printf/blob/main/get_all.c) : this file containe the function how cheks function 
* [stdr_function.c](https://github.com/HanaOuerghemmi/holbertonschool-printf/blob/main/stdr_function.c) : This file contains the standard function (_putchar).


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
 
## Authors:
* [Hana Ouerghemmi](https://github.com/HanaOuerghemmi)
* [ Majdi Aribi](https://github.com/majdideveloper)
* [Dhafer Hamza Sfaxi](https://github.com/dhaferHS) 
