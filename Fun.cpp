#include "iostream"
#include "cstdlib"
#include "unistd.h"
#include "time.h"
#include "Fun.h"

using namespace std;

Fun::Fun(int width, int height): width_(width), height_(height){
	while(1){
		print_all();
	}
}

void Fun::print_color(int color_code){
	cout << "\e[" << color_code << "m  \e[0m";
}

void Fun::print_all(){
	system("clear");
	srand(time(0));

	for(int i = 0; i < height_; i++){
		for(int j = 0; j < width_; j++){
			if(rand()%2 == 0){
				print_color(100 + rand()%8);
			} else {
				print_color(40 + rand()%8);
			}
		}
		cout << endl;
	}
	sleep(1);
	system("clear");
}
