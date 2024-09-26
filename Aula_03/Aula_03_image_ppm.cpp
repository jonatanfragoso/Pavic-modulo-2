#include <iostream>
#include <fstream>
#include <chrono>  // For performance timing

using namespace std;

int main() {
std::ofstream image;
	image.open("Image_2500x2500.ppm");
	// Image PPM  Header
	image << "P3" << std::endl;
	image << "2500 2500" << std::endl;
	image << "255" << std::endl;
//Timer
	auto start_single_thread = std::chrono::high_resolution_clock::now();
	// Image PPM Body
	for (int y = 0;y < 2500;y++) {
		for (int x = 0;x < 2500;x++) {
			//Pixel RGB (0->> 255) 8 bits
			image << y << " " << 255 << " " << x << std::endl;
		}
	 }
auto stop_single_thread = std::chrono::high_resolution_clock::now();
	auto duration_single_thread = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_single_thread - start_single_thread);
	// Display timing results
	cout << "Single-threaded image processing time: " << duration_single_thread.count() << " ms" << endl;


	image.close();

	return 0;
}