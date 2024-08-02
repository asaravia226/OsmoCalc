# OsmoCalc
##a calculator to sum the total osmolarity of buffer solutions##

Goal: 
	-The goal of this program is to calculate the total osmolarity of a buffer solution (not including titrant volumes added). 

How to use: 

1. The user will be asked how many ingredients/ reagents are in the solution
	a. e.g. 5
	
 2. The program will allocate this much space for these
		b. editing capacity will be an option, e.g. "you are missing a chemical, go back to adjust ingredient count." 
	
 3. The user will be asked to enter the name of the  (1) ingredient name, (2) its molar mass, and (3) ion dissociation count
		a. ingredient must be a common compound found in a typical buffer solution (e.g. HEPES, MgCl, etc.). 
			-if ingredient isn't found, the prompt will re-appear
		b. User can see current list of ingredients --> e.g. "To see current list of ingredients, type and enter i" 
	
 4. When successful, the user will then be asked to enter ingredient concentration in units of Molar (mol/L). 
		- Prompt will continue until a vail number is entered. 
	
 5. When ingredient size is met, the program will show a list of user ingredients along with concentrations, and ask if this is correct. 
		-If yes, the total osmolarity in in mOsm/Kg H2O will be shown.
	
 6. User will then be asked if they'd like to calculate another solution or exit the program. 
