#ifndef PARSE_FILE_H_
#define PARSE_FILE_H_

#include <fstream>
#include <vector> 
#include <string>
#include <sstream> 

// This file will open the necessary txt file and catch any file errors
// It will also modify the original txt file if prompted by the user. 
void pushFile(std::vector<ingredient>);
std::vector<ingredient> pushIngred(std::string, unsigned int, std::vector<ingredient>);

if(!(std::fstream file("ingredients.txt"))) {
	throw std::runtime_error( "ingredients.txt not found! Check directory to see if file exists.");  
}
	else {
		std::vector<ingredient> list; 
		pushFile(list); 
	}
std::vector<ingredient> pushIngred(std::string name, unsigned int ions, std::vector<ingredient> ingreds){
	ingredient my_ingred; 
	my_ingred.name = name; 
	my_ingred.ions = ions; 
	ingreds.push_back(my_ingred);
	return ingreds; 
}	
pushFile(std::vector<ingredient> list){
	std::string line; 
	std::string name;                                                                                                                                                           std::temp_ions;                                                                                                                                                             std::ifstream fileStream;
        
	while (std::getline(fileStream, line)) {
		std::stringstream ss(line);
		std::getline(ss, name, ',');
		std::getline(ss,temp_ions, '\n'); 		
		try {std::stoi(temp_ions);}
		catch(std::exception& e){std::cout << "No Ion Dissociation given to ingredient. Update 'ingredients.txt' file for ingredient:" << name << "\n";}
		list = pushIngred(name,ions,list); 
	}
}
#endif
