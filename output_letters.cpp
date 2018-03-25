/*********************************************************************
** Program name: output_letters.cpp
** Author: Alexandra Carper
** Date: 01/21/2018
** Description: The output_letters function asks for the name of the
 *              output file, opens that output file, and for every
 *              letter of the alphabet it prints the frequency that
 *              was counted in count_letters.cpp.
*********************************************************************/
#include <iostream>
#include "output_letters.hpp"
#include <fstream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::ofstream;
using std::string;
using std::ios;

void output_letters(ofstream& outputFile, int (&frequencies)[26])
{
    string outputFileName;

    //Enter the name of the output file
    cout << "\n Enter the output file name: " << endl;
    cin >> outputFileName;
    //Open output file
    outputFile.open(outputFileName.c_str(), ios::out);

    //For every letter, print the frequency
    for(int i = 0; i < 26; i++)
    {
        outputFile << char(i + 97) << ": " << frequencies[i] << endl;
    }

    //Close the file
    outputFile.close();
}
