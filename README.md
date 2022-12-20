# IMAT2906 Coursework Lab book 1 - Polymorphism

This piece of work will form your first submission and accounts for 33% of your overall mark. 

## Setting up the project.

- You will need to initially clone the repository.
- Within the repository is a CMakeLists.txt file that allows for a number of different actions.
- Using this with the CMake-Gui you can create the solution for your designed IDE. It is able to produce a VS2019 x64 solution.
- Included in the repository is the SFML library that you will need.
- CMake will configure your solution to include SFML.

## CMake file

The area to add your file is:
```sh
add_executable("${PROJECT_NAME}" "Main.cpp" "Files here each with a space")
```

AN IMPORTANT STEP
There are a number of .dll files that need to be included in your project to make it work. The files need to be in the same folder as your solution. 
You can find these files in: SFML-2.5.1\bin
These files are:
| .dll Files | 
| ------ | 
| sfml-window-d-2.dll | 
| sfml-window-2.dll | 
| sfml-system-d-2.dll | 
| sfml-system-2.dll | 
| sfml-network-d-2.dll |
| sfml-network-2.dll| 
|sfml-graphics-d-2.dll|
|sfml-graphics-2.dll | 
| sfml-audio-d-2.dll|
|sfml-audio-2.dll| 
|openal32.dll|

There is some skeleton code that shows how to draw a circle in an SFML window. You can use this for the assignment if you require, it's not a requirement. 

If this is failing to work or you have any questions, get in touch.

Thanks,

Jethro