#include <iostream>
#include <cassert>
#include <string>


bool is_Palindrome(std::string testedString) {
    //first we check if there are spaces and delete them.
    bool hasSpaces = testedString.find(' ') != std::string::npos;
    if (hasSpaces) {
        //has spaces
        std::size_t posiitonOfSpace;
        while (hasSpaces) {
            if (testedString.find(' ') != std::string::npos) {
                posiitonOfSpace = testedString.find(' ');
                int stringPos = posiitonOfSpace;
                testedString.erase(stringPos, 1);
            }
            else {
                bool hasSpaces = false;
                break;
                //stop
            }
        }
    }
    else {
        //no spaces found was an else branch for testing, as i wanted to originally have this be a function but I kept getting a range error
    }
    //then we check to see if the string is more then 1 character
    int lengthOfString = (testedString.length());
    if (lengthOfString <= 0) {
        std::cerr << "The string inputted is 0 characters long, and thusly we cannot determine if a palindrome is here" << std::endl;
        return false;
    }
    // This was to check if the string is even or odd or length, but was uneeded
        
    //bool isEven = true;
    //if (lengthOfString % 2 == 0) {
    //    isEven = true;
    //}
    //else {
    //    isEven = false;
    //}
    //check is the string is 1 long, and returns true
    if (lengthOfString == 1) {
        return true;
    }
    int loopBounds = (lengthOfString / 2);
    for (int i = 0; i <= loopBounds; i++) {
        if (tolower(testedString.at(i)) == tolower(testedString.at((lengthOfString - 1) - i))) {
            /*
            testing code i used to tweak my code so it worked and I could see what it was looking at
            char a = tolower(testedString.at(i));
            char b = tolower(testedString.at((lengthOfString - 1) - i));
            std::cout << a << " ?= " << b << std::endl;
            */
        }
        else {
            return false;
        }
    }
    return true;

        //all the code down here is no longer needed but I left it here cause it exists
    
        
    //if (isEven) {
    //    for (int i = 0; i <= loopBounds; i++) {
    //        if (tolower(testedString.at(i)) == tolower(testedString.at((lengthOfString - 1) - i))) {
    //            /*
    //            testing code i used to tweak my code so it worked and I could see what it was looking at
    //            char a = tolower(testedString.at(i));
    //            char b = tolower(testedString.at((lengthOfString - 1) - i));
    //            std::cout << a << " ?= " << b << std::endl;
    //            */
    //        }
    //        else {
    //            return false;
    //        }
    //    }
    //    return true;
    //}
    ////for when the length is odd
    //if (isEven == false) {
    //    for (int i = 0; i <= loopBounds; i++) {
    //        if (tolower(testedString.at(i)) == tolower(testedString.at((lengthOfString - 1) - i))) {
    //            /*
    //            testing code i used to tweak my code so it worked and I could see what it was looking at
    //            char a = tolower(testedString.at(i));
    //            char b = tolower(testedString.at((lengthOfString - 1) - i));
    //            std::cout << a << " ?= " << b << std::endl;
    //            */
    //        }
    //        else {
    //            return false;
    //        }
    //    }
    //    return true;
    //}

    std::cerr << "ERROR! REACHED END OF FUNCTION";
    return false;
}
