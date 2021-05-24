# Strings
Strings are treated as arrays in C.

`'\0'` Null character is necessary for marking the end of the string. (not Null Pointer)

``` C
//Declaring a string

char c[] = "MINERIC";  // {'M', 'I', 'N', 'E', 'R', 'I', 'C', '\0'};
char c[] = {'M', 'I', 'N', 'E', 'R', 'I', 'C', '\0'};  // "MINERIC"
```

In strings, 
Additional + 1 byte is neeeded for array size.
Becuase as null character is needed to be stored, addtional + 1 byte is included for null character.

<br>
For stroing "Min", you need 5 bytes of Memory.


How to concantanate strings in C. ("Min" + "Eric" )

``` c

# indclude <string.h>
memcpy(dest, src, size_t n)

```
