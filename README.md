# tfbin
A tool to convert decimal numbers to binary numbers and vise versa.

## Usage
To convert a decimal number to binary:
```
tfbin to <input>
```
To convert a binary number to decimal:
```
tfbin from <input>
```
## Inputs
##### Decimal to Binary
When converting a decimal number to a binary number the input can neither exede 2^16 nor be under 0. You can change the maximum input value by editing the 'tobin.c' file and recompiling the program.
##### Binary to Decimal
When converting a binary number to decimal the minimum and maximum values are definied by LLONG_MIN and LLONG_MAX.
> [!note]
> While you can input numbers that are not 1 or 0 I am not sure what the output would be
