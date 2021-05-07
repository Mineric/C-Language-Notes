# C-Language-Notes
C languages basic and advance features



### Linux env setup


``` console
$ sudo apt update
$ sudo apt upgrade
$ sudo apt install package-name
$ sudo apt remove package-name

// install build-essential packages (This is C language development environment and debugger tool)
$ sudo apt install -y build-essential gdb
```


##### Run this everytime before using bash (Make a habit)
(-y make not to choose (Y)/n)

``` console
$ sudo apt update -y
$ sudo apt update -y
```

##### Creating Directory 

``` console
$ mkdir file_name

$ explorer.exe file_name    //this will open the file directory that is created.
```

##### Other commands

``` console
$ pwd  
(Print Working Directory)
show the current directory 

$ cd path
change current directory to the path specified.

$ mkdir path
(make directory)
create a directory with a path specified.

$ rmdir path
remove directory with path specifed. Falied when path is not existed.

$ code path
Open the file/directory specifed with "Visual studio code remote"

$ ls path
show the list of files contained in the directory specifed.

$ rm path
remove file specided

$ rm -r path
for removing recursively a directory and its contens
** This command is very dangerous. **

$ mv file destination
move file to the destination

$ cp file destination
copy file to the destination
```

### Visual Studio Code set up

install extensions
- Remote-WSL
- C/C++

open from ubuntu

``` console
 code .
```

VS code remote window for ubuntu(WSL) environment.
Different from environment for windows.


#### To Build and Run the program .c on VS code

` Terminal => Run Build Task => C/C++: gcc build active file`

`Create New Terminal '+' to run on the terminal.`

###### for GCC compiler
``` 
//to compile
gcc progrma_name.c 

//to run
./a.out
```
On terminal,
` ./file_name` ```ENTER tab``` 
```console  ./program_name ```

#### To Run Python Programs

``` bash
$python filename.py
```

#### To Know the time of program execution time

``` console
// C program
$time ./filename   //( .c extension is not required)

// Python Program
$time filename.py  //( .py extension is necessary)
```

Output may be different base on version of shell.
```
Output

# Bash
real	0m33.961s
user	0m0.340s
sys	0m0.940s

# Zsh
0.34s user 0.94s system 4% cpu 33.961 total

# GNU time (sh)
0.34user 0.94system 0:33.96elapsed 4%CPU (0avgtext+0avgdata 6060maxresident)k
0inputs+201456outputs (0major+315minor)pagefaults 0swaps
```

#### To build without VS code

``` console
$ gcc -Wall -g hello.c -o hello

-Wall: Enable notification of all warnings.
-g: Add debug information to the executable hello.c 
-o output-filename: Output the program with the name specified.
```



## To read manual

``` console
$ man 3 printf

read the manual of function_name printf. 
[Q] to quite the manual interface.
```

## To see C program inside bash terminal

``` console
$ cat executable.c

cat and exexuatble file with .c extension.
```
