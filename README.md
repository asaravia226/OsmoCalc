# OsmoCalc
## A  calculator to sum the total osmolarity of buffer solutions ##

Goal: 
	 The goal of this program is to calculate the total osmolarity of a buffer solution (not including titrant volumes added). Most online Osmolarity tools focus on blood/serum osmolarity calculations. I saw a need to make a tool to calculate total solution osmolarities for my 	buffer/reagent solutions in the lab, often consisting of basic chemical compounds. 

How to use: 

1. The user will be asked how many ingredients/ reagents are in the solution
	a. e.g. 5
	
 2. The program will allocate this much space for these
		b. editing capacity will be an option, e.g. "you are missing a chemical, go back to adjust ingredient count." 
	
 3. The user will be asked to enter the name of the (1) ingredient (compund) and (2) its ion dissociation count. If you do not now ion dissociation count, you will have to research it on your own. 
		a. ingredient must be a common compound found in a typical buffer solution (e.g. HEPES, MgCl, etc.). 
			-if ingredient isn't found, the prompt will re-appear
		b. User can see current list of ingredients --> e.g. "To see current list of ingredients, type and enter i" 
	
 4. When successful, the user will then be asked to enter ingredient concentration in units of Molar (mol/L). 
		- Prompt will continue until a vail number is entered. 
	
 5. When ingredient size is met, the program will show a list of user ingredients along with concentrations, and ask if this is correct. 
		-If yes, the total osmolarity in in mOsm/Kg H2O will be shown.
	
 6. User will then be asked if they'd like to calculate another solution or exit the program. 
