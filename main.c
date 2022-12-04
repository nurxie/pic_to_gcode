#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

//34.203.60.141

int main(){
    system("python3 image_to_gcode.py --input image.png --output graph.gcode --threshold 80");
    system("cp /var/www/firstimeke/maps/pic_to_gcode/graph.gcode /var/www/firstimeke/maps/");
    system("rm image.png & rm graph.gcode");
    sleep(10);
    system("cd.. & rm graph.gcode");
    return 0;
}