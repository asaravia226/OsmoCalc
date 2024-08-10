#ifndef PARSE_FILE_H_
#define PARSE_FILE_H_

#include <fstream>
#include <vector> 
#include <string>
#include <sstream> 
#include <iostream>

// This file will open the necessary txt file and catch any file errors
// It will also modify the original txt file if prompted by the user. 
struct Ingredient{
	std::string name;
	unsigned int ions; 
};
std::vector<Ingredient> list; 

void pushFile(std::vector<Ingredient>, std::ifstream fileStream);
std::vector<Ingredient> pushIngred(std::string ,unsigned int, std::vector<Ingredient>);
bool check_file();
#endif
