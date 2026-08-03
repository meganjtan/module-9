// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Exceptions

#include <stdexcept>
#include <cctype>
using namespace std;

/// @brief Throws exceptions if the start or target is not a letter.
/// @param char start 
/// @param int offset 
/// @return char
char character(char start, int offset){
    /*if start is not A-Z or a-z, throw invalidCharacterException
    if target is not a letter, throw invalidRangeException
    otherwise, return letter described by the start and offset */

   if(!isalpha(start)){
    throw invalidCharacterException();
   }

   char target = start + offset;
   if(!isalpha(target) || (isupper(start) && islower(target) || (islower(start) && isupper(target)))){
    throw invalidRangeException();
   }

   return target;
}
