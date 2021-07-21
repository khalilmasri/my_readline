# my_readline

**Function**

The function my_readline reads a line from the strean represented by fd and returns it into an allocated string (heap or stack ?). It stops when either the newline character is read or when the end-of-file is reached, whichever comes first. The newline character is not copied to the string.

On success, a pointer to the string is returned. On error, a null pointer is returned. If the end-of-file occurs before any characters have been read, the string remains unchanged.

Number of characters read will be set by the define READLINE_READ_SIZE
You are allowed to maximum one static. Be ready, we will change the value of READLINE_READ_SIZE.

#
**Use instructions**

1- `make` to run the program.

2- Pass `./my_readline` or `./my_readline -option`.

   *options:*
    
- `-s` for stdin and print all standard input.
       
- If you are in stdin mode you can exit by pressing `ctrl+c`. 
  
 - `-f` followed by the file name that you want to read.

3- `make clean`
