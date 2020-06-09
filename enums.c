#include <stdio.h>

int main() {
    // enums allow you to define custom data types and restrict their values to only those 
    // identified in their instantiation
    // all other instances of this enum must possess values that have been identified
    enum gender {male, female};
    // enums' defined possible values are assigned an integer value identifier that follows array indexing (0,1,2,...,n)
    // this identifier is what identifies which permissible enum value is assigned to a specific variable

    enum month {January, February, March, April, May, June, July, August, September, October, November, December};

    // in the month enum above, January is given an identifier value of 0
    // in the month enum above, February is given an identifier value of 1
    // ...
    // in the month enum above, December is given an identifier value of 11


    enum month thisMonth;
    
    thisMonth = June;

    // you can manually manipulate that assigned numeric value by explicitly defining the desired value
    // **if you do this, any values that follow the explicit definition will return to the default +1 incrementation
    // in their value assignments

    enum direction {up, down, left = 10, right = 10, in, out};

    // up is given an identifier of 0
    // down is given an identifier of 1
    // left is given an identifier of 10
    // right is given an identifier of 11

    enum direction Left, Right, In;
    Left = left;
    Right = right;
    In = in;

    // declaring multiple variables of a specific enum type is acceptable, and accomplished as a comma separated list
    enum gender myGender, yourGender;

    // if multiple variables are declared, they must later be defined
    // if the variable is an enum type, only the acceptable values for the enum can be assigned to the variable
    myGender = male;

    // include a new line at the end of a print statement
    printf("This is a print statement.\n");

    // chars represent a single character such as the letter a, the digit character 6, or a semicolon
    // chars are typically used with alphanumeric characters
    // char is different than character string or string data type
    // char or character is enclosed in single quoation marks
    // char variables can be letters, special characters - new lines, etc. - or numbers
    // their behavior changes when they are declared as char data types
    char myCharacter = '\n';
    char myOtherCharacter = 'j';
    
    // myGender is declared as an enum type of gender, which was defined above
    // enum gender myGender;

    // myGender is assigned a value, which happens to be one of the two possible values listed
    // myGender = male;

    printf("%c", myGender);
    printf("%c", myCharacter);
    printf("%c", myOtherCharacter);

    return 0;
}