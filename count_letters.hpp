/*********************************************************************
** Program name: count_letters.hpp
** Author: Alexandra Carper
** Date: 01/21/2018
** Description: This header file for the count_letters function
 *              contains the prototype for the count_letters
 *              function.
*********************************************************************/


#ifndef COUNT_LETTERS_HPP
#define COUNT_LETTERS_HPP

#include <iostream>
#include <fstream>
using std::ifstream;

void count_letters(ifstream&, int (&) [26]);

#endif