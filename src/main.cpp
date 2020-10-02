#include <stdio.h>
#include <string>

std::string blockColors[8] = {"\e[40;30m  \e[0m", 
				"\e[41;31m  \e[0m",
				"\e[42;32m  \e[0m", 
				"\e[43;33m  \e[0m",
				"\e[44;34m  \e[0m", 
				"\e[45;35m  \e[0m",
				"\e[46;36m  \e[0m", 
				"\e[47;37m  \e[0m"};

enum class Color : int {
    BLACK,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    PURPLE,
    CYAN,
    WHITE
};
    


int main(void) {
    Color color;
    printf("\33[10C");	// move cursor to right 10 spaces
    printf("\33[5B");	// move cursor to bottom 5 spaces
    printf("%s", blockColors[(int)Color::RED].c_str()); // change background and font color to RED and then reset it
    

    //printf("\33[u");	// set cursor at 0.0
    return 0;
}
