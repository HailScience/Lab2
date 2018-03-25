/*********************************************************************
** Program name: main.cpp
** Author: Alexandra Carper
** Date: 01/21/2018
** Description: This main function asks for the name of the input
 *              file and opens the input file. If a invalid operation
 *              is attempted, the program asks the user for the
 *              file name again. For each paragraph in the input file
 *              it calls the count_letters and output_letters function
 *              to read the paragraph, count the frequencies, and
 *              write the frequencies to an output file through a
 *              pointer to an array of ints.
*********************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include "output_letters.hpp"
#include "count_letters.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::ios;

int main()
{
    //File stream variables
    ifstream inputFile;
    ofstream outputFile;

    //Name of input file
    string inputFileName;

    //Pointer to array of ints
    int frequencies[26] = {0};

    //Prompt for input file
    cout << "Please enter the input file you would like to read." << endl;
    cin >> inputFileName;

    //Open input file
    inputFile.open(inputFileName.c_str(), ios::in);

    //If invalid operation attempted
    if(inputFile.bad())
    {
        cout << "Invalid input file name! Please try again." << endl;

        //Prompt again
        cin >> inputFileName;
    }

    //While the state of the stream is still good
    //For each paragraph the program reads, it
    //will loop
    while(inputFile.good())
    {
        //Call count_letters
        count_letters(inputFile, frequencies);
        //Call output_letters
        output_letters(outputFile, frequencies);
    }

    //Close the input file
    inputFile.close();

    return 0;
}

