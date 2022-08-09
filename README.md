# "PROJECT SHELL DEFINITIVE"
<div>
<h1 align ="center"> <a> <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcStyaO32EP-alH-HF1JinKc-6PYm92vNohHSnHv9ygcPFE-isnbALteFJCgadSnNfXLxCk&usqp=CAU" height="50%" width="20%"> </a> <div> <a> <img src="https://i.ytimg.com/vi/wYd3l0O7-EA/hqdefault.jpg" height="90%" width="70%"></h1></a>
</div>
</div>

# simple_shell

**simple shell (hsh)** is a command language interpreter that shall execute commands read from a command line string and the standard input. **simple_shell** program was build using the C language, and was designed to interact with a linux distribution or unix like system that uses system calls and other commands found in the linux PATH.

## Table of contents

-   Description
-   Learning objectives
-   What is the file structure
-   How to install
-   Functionalities
-   Builtings
-   Using example
-   Bugs
-   Authors

## Description

Simple shell (./hsh) is a command line interpreter inspirated in ./sh shell. It was created with system calls and standard function like `fork(), wait(), getline, stat, malloc, free, perror, and others.` When a command is executed, the program will made the action that the user wish and will print the shell prompt again ($).

## Requeriments

Compiled with Ubuntu 20.04 LTS using flags `-Wall -Werror -Wextra -pedantic std=gnu89`

## Learning objectives

-   How does a shell work
-   What is a pid and a ppid
-   How to manipulate the environment of the current process
-   What is the difference between a function and a system call
-   How to create processes
-   What are the three prototypes of main
-   How does the shell use the PATH to find the programs
-   How to execute another program with the execve system call
-   How to suspend the execution of a process until one of its children terminates
-   What is EOF / “end-of-file”?

## What is the file structure

**AUTHORS** - this file contains a list of contributors of this project. **shell_aux_function.c** - function *sig_handler* that detects a control + c and function *separator_counter* that separates a string according to the separator. **shell_read_line** - function prints the message and reads what is entered in the getline function, also receives if it detects the EOF signal (control + D). **shell_split_line** - the function receives a string of characters and separates them with a delimiter. **shell_create_child.c** -function that executes a program and sends it to the current process. **free_arg** - function release argument string. **get_env** - function prints the environment. **README.md** - file contains a brief description of how works the simple_shell. **search_execute** - function finds the executable file in the path. **get_path** - function get path. **shell.c** - main shell function where it receives the arguments and executes them.

# How to install

1.  Clone this repository using git clone:  `https://github.com/DaisyGeraldine/holbertonschool-simple_shell.git`
2.  Use cd to change directories into the repository simple _shell:  `cd holbertonschool-simple_shell`
3.  Compile. We recommend use flags wall, werror, wextra and pedantic:`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`
4.  Run the program. You can use interactive mode  `./hsh`  and type command, or non-interactive mode.



## Functionalities and use

-   cat
-   echo
-   cp
-   df
-   rm
-   ls
-   mkdir
-   ps
-   pwd
-   mv

**Non-Interactive Mode**
```
echo "ls -l" | ./hsh
```
![enter image description here](https://github.com/DaisyGeraldine/holbertonschool-simple_shell/blob/master/mode_interactive.gif?raw=true)
**Interactive Mode*** Activate the shell
```
(your_terminal)$ ./hsh
#cisfun$
```
![enter image description here](https://github.com/DaisyGeraldine/holbertonschool-simple_shell/blob/master/mode_no_interactive.gif?raw=true)
## Builtings

-   `exit`  exits shell (`Usage: exit [status]`)
-   `env`  prints environmental variables (Usage:  `env`)

## Using example
```
root@DESKTOP-K0KHTBP:~/holbertonschool-simple_shell# ls 
AUTHORS shell.c shell_aux_function.c shell_execute.c shell_read_line.c README.md shell.h shell_create_child.c shell_free.c shell_split_line.c
$
$ ls -l
total 40 
-rw-r--r-- 1 root root 161 Aug 9 03:34 AUTHORS 
-rw-r--r-- 1 root root 16 Aug 8 21:59 README.md 
-rw-r--r-- 1 root root 870 Aug 9 03:35 shell.c 
-rw-r--r-- 1 root root 647 Aug 8 22:12 shell.h 
-rw-r--r-- 1 root root 532 Aug 8 22:18 shell_aux_function.c 
-rw-r--r-- 1 root root 559 Aug 9 03:35 shell_create_child.c 
-rw-r--r-- 1 root root 1492 Aug 8 22:32 shell_execute.c 
-rw-r--r-- 1 root root 305 Aug 8 22:07 shell_free.c 
-rw-r--r-- 1 root root 466 Aug 9 03:35 shell_read_line.c
$
```

## Bugs
We have some memory leaks on our project.


## Flowchart
![enter image description here](https://github.com/DaisyGeraldine/holbertonschool-simple_shell/blob/master/Flowchart_.png?raw=true)


## Authors
| [<img src="https://avatars.githubusercontent.com/u/105659277?v=4" width=130><br><sub> Daisy Geraldine </sub>](https://github.com/DaisyGeraldine)   | [<img src="https://avatars.githubusercontent.com/u/105623752?s=400&u=9cf2927dd5d7e4ef800016b6ebf129d88a5ce1f4&v=4" width=130><br><sub> Carlos Cantoral </sub>](https://github.com/carloscm2022)   |
|--|--|
| <div align="center"> <a href="mailto:chipanal@hotmail.com" target="_blank"> <img height="32" src="https://www.pngall.com/wp-content/uploads/12/Gmail-Email-PNG-Pic.png" target="_blank"> <a href="https://twitter.com/DaisyChipana" target="_blank"> <img height="32" src="https://upload.wikimedia.org/wikipedia/commons/thumb/4/4f/Twitter-logo.svg/2491px-Twitter-logo.svg.png"> </a> <a href="https://www.instagram.com/dage_cl/" target="_blank"> <img height="32" src="http://assets.stickpng.com/images/580b57fcd9996e24bc43c521.png" target="_blank"> </a>  </div>| <div align="center" > <a href="mailto:chipanal@hotmail.com" target="_blank"> <img height="32" src="https://www.pngall.com/wp-content/uploads/12/Gmail-Email-PNG-Pic.png" target="_blank"> <a href="https://twitter.com/CarlosCantoral9" target="_blank"> <img height="32" src="https://upload.wikimedia.org/wikipedia/commons/thumb/4/4f/Twitter-logo.svg/2491px-Twitter-logo.svg.png"> </a> <a href="https://www.instagram.com/carloscmking/" target="_blank"> <img height="32" src="http://assets.stickpng.com/images/580b57fcd9996e24bc43c521.png" target="_blank"> </a> </div> |
| <div align="center"><a href="https://www.linkedin.com/in/daisy-chipana-lapa-1b96861b4/" target="_blank"> <img height="32" src="https://www.marcoszuniga.com/wp-content/uploads/2020/05/Linkedin-Logo.png" target="_blank"> </a> <a href="https://medium.com/@chipanal" target="_blank"> <img height="32" src="https://img.shields.io/badge/Medium-12100E?style=for-the-badge&logo=medium&logoColor=white" target="_blank"> </a> <a href="https://www.youtube.com/channel/UCCq-zyaajPYrAUL_AXUOcaQ" target="_blank"><img height="32" src="http://assets.stickpng.com/thumbs/580b57fcd9996e24bc43c545.png" target="_blank"> </a></div> |   <div align="center"> <a href="https://www.linkedin.com/in/carlos-cantoral-a2701123b/" target="_blank"> <img height="32" src="https://www.marcoszuniga.com/wp-content/uploads/2020/05/Linkedin-Logo.png" target="_blank"> </a> <a href="https://medium.com/@carloscr7cmreal" target="_blank"> <img height="32" src="https://img.shields.io/badge/Medium-12100E?style=for-the-badge&logo=medium&logoColor=white" target="_blank"> </a> <a href="https://www.youtube.com/channel/UCC4sj7FiJmPCqAwfiSlDsbg" target="_blank"><img height="32" src="http://assets.stickpng.com/thumbs/580b57fcd9996e24bc43c545.png" target="_blank"> </a> </div>|
