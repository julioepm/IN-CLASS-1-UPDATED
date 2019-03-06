/* 
RJ Sundseth
CSC 160-001
Date:22 Feb, 2019
ProjectName: hangman
Description: This is Part #6 of the work-in-progress hangman file.
Currently onto the 2nd or 3rd iteration, Project#2 if I remember correctly
(Probably don't)
Create C++ string named constants for the 7 boards of hangman and print out 
the boards using the named constants
Prompt the user for the hangman word to guess as a string in all UPPERCASE letters.
Prompt the user for a letter to guess as a char as an UPPERCASE letter.
The program should indicate if the letter is Found in the word or Not Found.


*/


#include <locale> // needed for toupper
#include <fstream> // input file stream
#include <iostream> // istream, ostream
#include <string> // string class and string header

int main()
{	
	// variable/str initialization &
	// initialization for the hangman.dat file input
	std::string fileName = "hangman.dat";
	std::ifstream inFile;
	std::string word, hangWord, letter;
	// 1a. open the file for reading
	inFile.open(fileName.c_str());
	// 1b. check the file opened ok for reading
	if (!inFile) // if(!fin.good())  if(fin.fail())
	{
		std::cout << "Error opening file for reading\n";
		std::cin.get(); // pause the program to read last error
		return 1;  // stop the program run
	}

	inFile >> word;

	std::cout << "Here are all the words from hangman.dat: ";
	while (!inFile.eof()) // this prints out all the words
	{
		std::cout << word << "\n";
		inFile >> word;
	}

	// print out the list of words from hangman.dat
	std::cout << "Here's the last word from hangman.dat: " << word << "\n";

	// using toupper
	std::cout << "Now we'll make the word uppercase: ";
	std::locale loc;
	for (std::string::size_type i = 0; i < word.length(); ++i)
		{
		std::cout << std::toupper(word[i], loc);
		hangWord += std::toupper(word[i], loc);
		}

	std::cout << "\n";
	std::cout << "Here's the uppercase word stored as variable hangWord: " << hangWord;
	inFile.close();


	std::cout << "\n";




	// Create C++ string named constants for the 7 boards of hangman
	std::string boardOne  (" --------|\n |       |\n         |\n         |\n         |\n         |\n       -----"),
				boardTwo  (" --------|\n |       |\n O       |\n         |\n         |\n         |\n       -----"),
				boardThree(" --------|\n |       |\n O       |\n |       |\n         |\n         |\n       -----"),
				boardFour (" --------|\n |       |\n O       |\n-|       |\n         |\n         |\n       -----"),
				boardFive (" --------|\n |       |\n O       |\n-|-      |\n         |\n         |\n       -----"),
				boardSix  (" --------|\n |       |\n O       |\n-|-      |\n/        |\n         |\n       -----"),
				boardSeven(" --------|\n |       |\n O       |\n-|-      |\n/ \\      |\n         |\n       -----");

	// print the 7 boards


	 std::cout << boardOne << std::endl;
	 std::cout << boardTwo << std::endl;
	 std::cout << boardThree << std::endl;
	 std::cout << boardFour << std::endl;
	 std::cout << boardFive << std::endl;
	 std::cout << boardSix << std::endl;
	 std::cout << boardSeven << std::endl;

    // ask user for a word
	 std::cout << "Enter word to guess: " << std::endl;
	 std::getline(std::cin,word);
	// ask user for a letter
	 std::cout << "Enter letter to guess: " << std::endl;
	 std::getline(std::cin, letter);
	 std::size_t letterFound = word.find(letter);
	 if (letterFound!=std::string::npos)
	 {
		 std::cout << "Letter " << letter 
			 << " found in the word " 
			 << word << std::endl;
	 }

	 else
	 {
		 std::cout << "Letter " << letter 
			 << " is NOT FOUND in the word " 
			 << word << std::endl;
	 }

	 std::cout << "Press ENTER twice to exit." << std::endl;



	
	
	
	
	
	// how to pause C++ code, in an operating-system agnostic way
	if (std::cin.peek() == '\n') // checks for enter key
								 // press in strean
		std::cin.ignore();       // ignores the enter key
	std::cin.get();              // pauses to get the next
								 // char entered
	return 0;
}


