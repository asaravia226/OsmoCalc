#ifndef PARSE_FILE_H_
#define PARSE_FILE_H_

#include <fstream>
#include <vector> 

// This file will open the necessary txt file and catch any file errors
// It will also modify the original txt file if prompted by the user. 

if(!(std::fstream file("ingredients.txt"))) {
	throw std::runtime_error( "ingredients.txt not found! Check directory to see if file exists.");  
	else {
		while (!file.eof()){

		}
	}
}	


#endif
