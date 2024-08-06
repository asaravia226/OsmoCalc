#ifndef PARSE_FILE_H_
#define PARSE_FILE_H_

#include <fstream>
#include <vector> 
#include <string>
#include <sstream> 

// This file will open the necessary txt file and catch any file errors
// It will also modify the original txt file if prompted by the user. 

if(!(std::fstream file("ingredients.txt"))) {
	throw std::runtime_error( "ingredients.txt not found! Check directory to see if file exists.");  
	else {
		std::vector<ingredient> list; 
		std::string line; 
		std::string name; 
		std::temp_ion_dissoc; 
		std::ifstream fileStream; 
		
		while (std::getline(fileStream, line)) {
			std::stringstream ss(line);
			std::getline(ss, name, ',');
			list.
			
				
			std::getline(ss,temp_ion_dissoc, '\n'); 		
			try {std::stoi(temp_ion_dissoc);}
			catch(std::exception& e){std::cout << "No Ion Dissociation. Update 'ingredients.txt' file for ingredient: " << name << "\n";}
			
		}
	}
}	


#endif
