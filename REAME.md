" is a 3D maze game written in C using the SDL2 library. Development took place on Ubuntu 14.04 LTS using the gcc compiler version 4.8.4.

SDL2, also known as Simple DirectMedia Layer, is a cross-platform development library. Its primary purpose is to offer developers low-level access to various hardware components such as audio, keyboard, mouse, joystick, and graphics hardware. This access is facilitated through interfaces with OpenGL and Direct3D. SDL2 is widely utilized in various software applications including video playback tools, emulators, and popular games, including titles from Valve's acclaimed catalog and many Humble Bundle games.

Instalation
$ git clone https://github.com/danielaloperahernandez/The-Maze.git
Usage
Execute ./maze or type make run
Use up and down arrow keys to move forward and backward (keys w and s serve the same function)
Use right and left arrow keys to turn the camera arround (keys d and a serve the same function)
Compilation
$ gcc -Wall -Werror -Wextra -pedantic ./src/*.c -lm -o maze `sdl2-config --cflags` `sdl2-config --libs`;
