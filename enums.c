#include <stdio.h>

int main() {
    // enums allow you to define custom data types and restrict their values to only those 
    // identified in their instantiation
    // all other instances of this enum must possess values that have been identified
    enum gender {male, female};

    // include a new line at the end of a print statement
    printf("This is a print statement.\n");

    // char or character is enclosed in single quoation marks
    char myCharacter = '\n';
    char myOtherCharacter = 'j';
    
    // myGender is declared as an enum type of gender, which was defined above
    enum gender myGender;

    // myGender is assigned a value, which happens to be one of the two possible values listed
    myGender = male;

    printf("%c", myGender);
    printf("%c", myCharacter);
    printf("%c", myOtherCharacter);

    return 0;
}