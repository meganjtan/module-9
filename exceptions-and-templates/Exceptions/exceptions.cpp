// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Exceptions

#include <stdexcept>
#include <cctype>
#include <iostream>
#include <iomanip>
using namespace std;

void tryCatch(char start, int offset);
char character(char start, int offset);

int main(){
    tryCatch('a', 1); //a, 1 = b
    tryCatch('a', -1); //a, -1 = invalidRangeException
    tryCatch('Z', -1); //Z, -1 = Y
    tryCatch('?', 5); //?, 5 = invalidCharacterException
    tryCatch('A', 32); //A, 32 = invalidRangeException
}

class invalidCharacterException : public exception { //did some research, and learned about exception class()
    public: 
        const char* what() const noexcept override{ //overriding what() from exception class for error description
            return "Invalid. Not a character.";
        }
};

class invalidRangeException : public exception{
    public:
        const char* what() const noexcept override{
            return "Invalid. Out of range.";
        }
};

void tryCatch(char start, int offset){ //try-catch for testing characters and their offsets
    char test;

    cout << "Input:  Start = " << start << endl;
    cout << left << setw(8 ) << "" << "Offset = " << offset << endl;
    cout << "Output: ";
    try{ 
        test = character(start, offset);
        cout << test << endl;
    } catch (const invalidCharacterException e){ //catch invalidCharacterException and create an object
        cout << "Error. " << e.what() << endl; //call .what() of object to display error text
    } catch (const invalidRangeException e){
        cout << "Error. " << e.what() << endl;
    }
    cout << endl;

}

char character(char start, int offset){
    /*if start is not A-Z or a-z, throw invalidCharacterException.
    if target is not a letter or does upper-lower transitiont (ie A->a), throw invalidRangeException.
    otherwise, return the target letter described by start and offset */
    if(!isalpha(start)){
        throw invalidCharacterException(); //throw an invalid character exception
    }

    char target = start + offset;
    if(!isalpha(target) || (isupper(start) && islower(target)) || (islower(start) && isupper(target))){
        throw invalidRangeException();
    }

    return target; //returns target if no exceptions above thrown
}

