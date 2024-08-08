#ifndef MENU_H_
#define MENU_H_
#include "parseFile.h" 
void display_options();
void greeting(); 
void get_cmd();
bool check_input(std::string); 

void greeting(){
	std::cout << "Welcome to OsmoCalc" << "\n"; 
	display_options(); 
}
bool check_input(std::string cmd){
	if(cmd.size() > 1 || cmd.size() == 0){
		return false; 
	} else if(!(cmd.c_str().isalpha())){
		return false;
	}
	if(cmd.c_str().isupper()){
		cmd = cmd.c_str().tolower();
	}
	if (cmd.find_first_of("carosq") == std::string::npos){
		return false; 
	}
	
}	
void display_options(){
	std::cout << 
	"Enter [C]: Start Osmolarity Calculation" <<"\n" <<
	"Enter [A]: Add Reagent to Master list" << "\n" <<
	"Enter [R]: Remove Current Reagent" << "\n" <<
	"Enter [O]: View Program Options" << "\n" <<
	"Enter [S]: See Full List of Available Reagents" << "\n" <<
	// Enter [E] edit current reagent
	"Enter [Q]: Exit Program" << "\n"; 
	get_cmd(); 
}
void get_cmd(){
	std::string input; 	
	do{std::getline(std::cin,input);} 	
	while( ){
}
	
#endif
