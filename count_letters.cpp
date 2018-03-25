/*************************************************************************
 * Program name: count_letters.cpp
 * Author: Alexandra Carper
 * Date: 01/21/2018
 * Description: The count_letters function takes an input file stream
 *              variable and a pointer to an array of integers and reads
 *              the paragraph string from the input file stream, counts
 *              the letter frequencies of that paragraph, and stores them
 *              in the array. It also changes all uppercase characters to
 *              lowercase characters to make use of the ASCII codes.
 ************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include "count_letters.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

void count_letters(ifstream& inputFile, int (&frequencies)[26])
{
    string paragraph;
    char letter;

    //Read letter
    inputFile.get(letter);
    //While the read has not reached the EOF marker
    while(!inputFile.eof())
    {
        //If read gets to newline character
        if(letter == '\n')
        {
            //Break out of loop
            break;
        }
        else
        {
            //Add each letter to the "paragraph"
            paragraph += letter;
        }
        //Read next letter
        inputFile.get(letter);
    }

    //Set initial value to 0/Reset array
    for(int i = 0; i < 26; i++)
    {
        frequencies[i] = 0;
    }

    //Count the frequencies
    for(int i = 0; i < paragraph.length(); i++)
    {
        //Make all uppercase
        letter = tolower(paragraph[i]);
        //If letter is between 'a' and 'z', increment that
        //letter's frequency
        if((int)letter >= 97 && (int)letter <= 122)
        {
            frequencies[(int)letter - 97] += 1;
        }

    }
}

