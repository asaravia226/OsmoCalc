#include "parseFile.h"
void check_file(){
	if (!(std::ifstream fileStream("compound list.txt").open()))                                                                            throw std::runtime_error( "ingredients.txt not found! Check directory to see if file exists.");                         
	}                   	                                            
	else {pushFile(list, fileStream);}                                                                                      
std::vector<Ingredient> pushIngred(std::string name, unsigned int ions, std::vector<Ingredient> ingreds){
        ingredient my_ingred;
        my_ingred.name = name;
        my_ingred.ions = ions;
        ingreds.push_back(my_ingred);
        return ingreds;
}
void pushFile(std::vector<Ingredient> list, std::ifStream){
        std::string line, names, temp_ions;                     

        while (std::getline(fileStream, line)) {
                std::stringstream ss(line);
                std::getline(ss, name, ',');
                std::getline(ss,temp_ions, '\n');
                try {std::stoi(temp_ions);}
                catch(std::exception& e){std::cout << "No Ion Dissociation given to ingredient. Update 'ingredients.txt' file for ingredient:" << name << "\n";}
                list = pushIngred(name,ions,list);
        }
}
