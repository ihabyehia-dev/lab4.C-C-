# C Lab - Integer Utility Functions

This introductory C exercise separates reusable functions from the file containing `main`.

## Features
- `lastDigit(number)` - return a number's last digit
- `wholeMinutes(seconds)` - convert seconds into whole minutes

## Files
`lab2.c` contains the functions and `lab2main.c` contains the interactive demonstration.

## Build and run
```bash
gcc -Wall -Wextra lab2.c lab2main.c -o lab2
./lab2
```

On Windows, use `lab2.exe`. Enter a number and then a number of seconds.

## Testing
Try positive and negative numbers, zero, 60 seconds and 125 seconds. This is an early course exercise in functions and basic tests.
