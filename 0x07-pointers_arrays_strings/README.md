# 0x07. C - Even more pointers, arrays and strings
## About
An introductory project on:
- pointers to pointers and how to use them
- multidimensional arrays and how to use them
## Requirements
- Ubuntu 14.04
- gcc 4.8.4
- no standard library functions
- allowed to use [_putchar](https://github.com/hounsounon-anselme/_putchar.c/blob/master/_putchar.c)
## File Descriptions
### Mandatory
**[0-memset.c](0-memset.c)** - function that fills memory with a constant byte.

**[1-memcpy.c](1-memcpy.c)** - function that copies memory area.

**[2-strchr.c]()** - function that locates a character in a string.

**[3-strspn.c](3-strspn.c)** - function that gets the length of a prefix substring.

**[4-strpbrk.c](4-strpbrk.c)** - function that searches a string for any of a set of bytes.

**[5-strstr.c](5-strstr.c)** - function that locates a substring.

**[7-print_chessboard.c](7-print_chessboard.c)** - function that prints a chessboard.

**[8-print_diagsums.c](8-print_diagsums.c)** - function that prints the sum of the two diagonals of a square matrix of integers. Allowed to use the standard library.


### Advanced
**[100-set_string.c](100-set_string.c)** - function that sets the value of a pointer to a char.

**[101-crackme_password](101-crackme_password)** - file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.
- download file [crackme2](https://raw.githubusercontent.com/holbertonschool/0x06.c/master/crackme2)
-go to the folder where you downloaded the file, then run 
```bash
ltrace ./crackme2
```
   you could observe that this program is accessing the environment variables like PATH, HOSTNAME, HOME, LANG, et al. Using the strncmp function in C language, it is comparing the first 20 characters with jennieandjayloveasm=. It is searching the environment variable for a name with jennieandjayloveasm.
   
- Let us give this program what it is looking for by creating a variable with that name with any value of choice.
   
  ```bash
export jennieandjayloveasm=okans
```
- Now, let us re-run the ltrace on the file
 ```bash
ltrace ./crackme2
```
-You could see that it went farther than the initial trial that we did.
From the look of it, you will see that it has calculated the MD5 hash of the environment variable value and compare it to a predefined MD5  in the program itself using the strcmp function.
```bash
strcmp("e99a18c428cb38d5f260853678922e03"...,"8d2cc35e70deca8505ee61f089a46ec4"...) = 45
```
- Get the password
To confirm the actual password, you should try decrypting the MD5 hash value to the string. You can use [md5online](https://www.md5online.org/md5-decrypt.html) website for this.
- Après avoir obtenu le mot de passe , aller ensuite dans votre dossier de repository puis :
.creer le fichier 101-crackme_password
```bash
vi 101-crackme_password
```
.press i, enter the password and press Esc
- type
```bash
:set binary noeol
```
- type
```bash
:wq
```
