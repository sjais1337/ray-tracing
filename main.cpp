#include <iostream>
#include "color.h"
#include "vec3.h"

int main() {

    // Image

    int image_width = 12;
    int image_height = 12;

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {
        std::clog <<  "\r Scanlines remaining: " << image_height - j << ' ' << std::flush;
        for (int i = 0; i < image_width; i++) {
            auto pixel_color =  color(double(i)/(image_width - 1), double(j)/(image_height - 1), 0);
            write_color(std::cout, pixel_color);
        }
    }

    std::clog << "\rDone.                 \n";
}