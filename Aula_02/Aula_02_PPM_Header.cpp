// Images ppm Header
// PPM 
// Header
// P3 - Format ASCII
// 250 250 - Image size
// 255 - RGB Max

// user >> Pc - Image.ppm

// User << PC

#include <iostream>
#include <fstream>
using namespace std;

int main (){
    std::ofstream image;
    image.open("Image.ppm");
    // Image PPM Header
    image << "P3" << endl;
    image << "3 2" << endl;
    image << "255" << endl;
    image << "255 0 0" << endl;
    image << "0 255 0" << endl;
    image << "0 0 255" << endl;
    image << "255 255 0" << endl;
    image << "255 255 255" << endl;
    image << "0 0 0" << endl;
    
    image.close();


    return 0;
}