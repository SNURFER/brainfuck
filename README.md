# brainfuck-collections
#### This project is collections of brainfuck interpreter with various languages. 
#### The main goal of this project is programing this simple concept with many languages.
#### I plan to apply it whenever I learn a new language.

## have done
- C++

## What is brainfuck?
#### [Brainfuck](https://en.wikipedia.org/wiki/Brainfuck) is an esoteric programming language created in 1993 by Urban Müller.
#### Notable for its extreme minimalism, the language consists of only eight simple commands, a data pointer and an instruction pointer.
#### While it is fully Turing complete, it is not intended for practical use, but to challenge and amuse programmers.

## Basic rules
|Character|Meaning|
|:-:|:-|
|>|Increment the data pointer (to point to the next cell to the right).|
|<|Decrement the data pointer (to point to the next cell to the left).|
|+|Increment (increase by one) the byte at the data pointer.|
|-|Decrement (decrease by one) the byte at the data pointer.|
|.|Output the byte at the data pointer.|
|,|Accept one byte of input, storing its value in the byte at the data pointer.
|[|If the byte at the data pointer is zero, then instead of moving the instruction pointer forward to the next command, jump it forward to the command after the matching ] command.|
|]|If the byte at the data pointer is nonzero, then instead of moving the instruction pointer forward to the next command, jump it back to the command after the matching [ command.|
