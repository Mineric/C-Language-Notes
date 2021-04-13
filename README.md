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
show the current directory 

$ cd path
change current directory to the path specified.

$ mkdir path
create a directory with a path specified.

$ rmdir path
remove direcoty with path specifed. Falied when path is not existed.

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

On terminal,
` ./file_name` ```ENTER tab``` 
```console  ./program_name ```

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
