#First of all, you need to install glib

To check if you have glib type in your terminal
ldd --version
The prompt should be something like:
ldd (Ubuntu GLIBC 2.23-0ubuntu10) 2.23
Copyright (C) 2016 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
Written by Roland McGrath and Ulrich Drepper.

At the fist line it says GLIBC X.XX,it means that you have glib in your computer :D

Linux

sudo apt-get install libglib2.0-dev


MacOS

Install the App
Press Command+Space and type Terminal and press enter/return key.
Run in Terminal app:
ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)" < /dev/null 2> /dev/null
and press enter/return key. Wait for the command to finish.
Run:
brew install glib

More info about MacOS glib installation @ http://macappstore.org/glib/

#Run the program
After you installed glib, you are ready to compile this program with the next command in the terminal

gcc -pthread *.c -o ExecName 

Then:
./ ExecName fileName.fileExtension

For example
gcc -pthread *.c -o MatrixMultiplication
./MatrixMultiplication matrix.txt



