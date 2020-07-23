#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 bool
 float
 double 
 void
 char

 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int a = 1;
    int z = 26;
    int y = 25;

    bool isAbletonBest = true;
    bool isTrue = false;
    bool isFalse = true;

    float pi = 3.14f;
    float e = 2.718f;
    float phi = 1.618f;

    double one = 1.234;
    double two = 5.678;
    double three = 5.34827;

    char random = 'A';
    char notRandom = 'B';
    char superRandom = 'C';

    
    
    ignoreUnused(number, a, z, y, isAbletonBest, isTrue, isFalse, pi, e, phi, one, two, three, random, notRandom, superRandom); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int carRentalCost(int tripLength, float gasCost, bool isRentalStoreOpen = true)
{
   ignoreUnused(tripLength, isRentalStoreOpen, gasCost);

   return {};
}
/*
 2)
 */

bool areYouEating(bool eating, char location)
{
   ignoreUnused(eating, location);

   return {};
}
/*
 3)
 */

char bestLetter(int favoriteNumber, char cantBeChosen = 'x')
{
   ignoreUnused(favoriteNumber, cantBeChosen);

   return {};
}
/*
/
 4)
 */

bool audacityBestDaw(bool answer = true)
{
   ignoreUnused(answer);

   return {};
}

/*
 5)
 */

float currentTime(char location2, float time = 12.23f)
{
   ignoreUnused(location2, time);

   return {};
}

/*
 6)
 */

bool isPi3(bool areYouEngineer, bool response)
{
   ignoreUnused(areYouEngineer, response);
  
   return {};

}
/*
 7)
 */

void resetBackend(bool clearDatabase, double dataBaseSize = 100.124)
{
   ignoreUnused(clearDatabase, dataBaseSize);
  
}
/*
 8)
 */

double heighEstimate(float babyHeight, char chromosome = 'Y')
{
   ignoreUnused(babyHeight, chromosome);
  
   return {};

}
/*
 9)
 */

double weightEstimate(float babyWeight, bool goodDiet = false, float currentWeight = 135.0f)
{
   ignoreUnused(babyWeight, goodDiet, currentWeight);
  
   return {};

}

/*
 10)
 */

char randomLetter(bool pray2RNG = false, int randomNumber = 10)
{
   ignoreUnused(pray2RNG, randomNumber);
  
   return {};

}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto rentalCost = carRentalCost(2, 5.0f);
    //2)
    auto amIEating = areYouEating(false, 'c');
    //3)
    auto theBestLetter = bestLetter(10);
    //4)
    auto bestDaw = audacityBestDaw();
    //5)
    auto time = currentTime('c');
    //6)
    auto pi = isPi3(true, true);
    //7)
    resetBackend(true);
    //8)
    auto height = heighEstimate(1.2f);
    //9)
    auto weight = weightEstimate(23.5f);
    //10)
    auto letter = randomLetter();
    
    ignoreUnused(carRented, rentalCost, amIEating, theBestLetter, bestDaw, time, pi, height, weight, letter);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
