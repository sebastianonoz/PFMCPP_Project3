#include <iostream>
#include <string>

/*
Project 3 - Part 1a-e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Purpose: The entire purpose of Project 3 is to get you 
writing real C++ code that compiles and runs and to reinforce the syntax habits 
that C++ requires.  
What you create in this project will be used as the basis of 
Project 5.

************************
Part1 purpose:  Learn to write User-Defined Types (UDTs)

You are going to write 10 UDTs in Project3.  
Part1 will be broken up into 5 sub-parts, all on the same branch.
    Part 1a (3 steps): you will learn to think about an object in terms of 
    its sub-parts (sub-objects).
    
    Part 1b (3 steps): you will write 4 un-related UDTs in plain English.
    
    Part 1c (5 steps): you will write 1 UDT in plain English that will be 
    made from 5 related sub-objects.
    
    Part 1d (8 steps): you will write plain-English UDTs for the 5 
    sub-objects that form the UDT defined in Part 1c.
    
    Part 1e (19 steps): you will convert those 10 plain-English UDTs into code 
    that compiles and executes.
*/
/*
*********************************************************************************
************************************ PART 1A ************************************
*********************************************************************************
*/

/*
=================
Setup - Assignment:
=================
Create a branch named 'Part1' from the 'master' branch, just like you did in Project 1 and Project 2
*/

/*
=================
Part 1a - Step 1: Lesson 
=================
When we are trying to get a computer to perform work for us, we must define attributes and actions that we want done. 
When there is a lot of work to be done, it is easiest to break that job into smaller parts.
A good example of this is a car. 
A car does a lot of work and uses smaller parts that have specific, focused jobs to get all of that work done.  
- we need the engine to provide the power to drive the wheels. 
- We need the brakes to provide resistance to slow the wheels down. 
- We need an electrical system to power the lights. 
- We need the lights to alert the people around us what we plan on doing and to illuminate the path ahead of us.

Remember this concept of breaking work/objects down into smaller parts while you complete the rest of this project.
It is a simple concept but it is the foundation that all software design is built upon.
*/

/*
=================
Part 1a - Step 2: Assignment
=================
    - Look at the picture of the car interior (Part1a pic.jpg).  
    - The picture in the list of files on the left in Replit.
    - take note of the different sub-objects that you see in the interior.
    
    Several sub-objects are listed below that can be found in this car's interior.

    - you're going to name several things that you'll find on each 
    sub-object. (nouns)
    - you're going to name several things that each sub-object can do. (verbs)
    - A few blanks are filled in for you already.

    Fill in the remaining blanks below which describe this car interior in terms of sub-objects.

Main Object: Car Interior
        Name 4 nouns you'll find on the [Sub Object]
            1) Paddle shifters
            2) Cruise control controls
            3) Audio controls
            4) Voice command controls
        Name 2 actions that the [Sub Object] can do:
            1) Adjust cruise control settings
            2) Control audio and navigation functions using steering wheel buttons.
            
    Sub Object: Instrument Cluster
        Name 4 nouns you'll find on the [Sub Object]
            1) Speedometer
            2) Fuel gauge
            3) Odometer
            4) Tachometer
        Name 3 actions that the [Sub Object] can do:
            1) Display vehicle speed
            2) Indicate amount of remaining fuel
            3) Display total distance traveled by vehicle.
    
    Sub Object: Environment Controls
        Name 3 nouns you'll find on the [Sub Object]
            1) Temperature control
            2) Air conditioning/heating unit
            3) Ventilation system
        Name 3 actions that the [Sub Object] can do:
            1) Adjust the temperature
            2) Control the airflow
            3) Change the ventilation settings

    Sub Object: Infotainment System
        Name 3 nouns you'll find on the [Sub Object]
            1) Touchscreen display
            2) Speakers
            3) Audio/video input
        Name 3 actions that the [Sub Object] can do:
            1) Play music/videos
            2) Connect to Bluetooth devices
            3) Navigate through menus  
        Name 3 actions that the [Sub Object] can do:
            1) Access internet and social media
            2) Use voice commands to control system
            3) Display navigation and traffic information.

   Sub Object: Seat
        Name 3 nouns you'll find on the [Sub Object]
            1) Upholstery
            2) Reclining mechanism
            3) Headrest
        Name 2 actions that the [Sub Object] can do:
            1) Adjust the reclining angle
            2) Adjust the headrest position. 
*/

/*
=================
Part 1a - Step 3: Commit!
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
*********************************************************************************
************************************ PART 1B ************************************
*********************************************************************************
*/
/*
=================
Part 1b - Step 1: Lesson
=================
Now you have some basic understanding of how to think of an object 
in terms of its sub-objects.

Next you will write 4 un-related UDTs in plain English:
example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has 
    eco-friendly cleaning supplies" as one of the properties.
    
    Writing 'has a ___' checks whether or not your object ** has the 
    ability to do something ** or ** has a particular thing **.
    Instead, I wrote "number of vacuum cleaners" and "number of 
    eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you 
    can use 'std::string' to represent strings of text in this project.
 */

/*
=================
Part 1b - Step 2: Assignment
=================
    - Fill in the 4 UDTs below with a random UDT in plain English.
    - These 4 UDTs do not need to be related.
        a) For each plain-English UDT, write out 5 traits or 
        properties and 3 things it can do.
        b) remember: these properties will eventually become
        primitives.
        c) pick properties that can eventually be represented with 
        'int float double bool char std::string'.


*/

/*
=================
Part 1b - Step 3: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/
/*
*********************************************************************************
************************************ PART 1C ************************************
*********************************************************************************
*/
 /*
=================
Part 1c - Step 1: Lesson
=================
You have just finished practicing writing out a UDT that has 
5 properties and can perform 3 actions.  

Now you will write 1 more UDT in plain English. 

This UDT will be different than the previous 4 you wrote: It will 
use other UDTs to describe its 5 properties, as opposed to using C++ 
primitives to describe the 5 properties.

You will define these 5 other 'property' UDTs in Part 1d.

Example:
    UDT: Cell Phone

    A Cell Phone is built using the following 5 UDTs:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or 
    "has a cpu" as one of the properties of the CellPhone.
    
    Writing 'has a ___' checks whether or not your object ** has the 
    ability to do something ** or ** has a particular thing **.
    Instead, I wrote "Display" or "CPU".  These are specific 
    objects. 
    
    In C++ terms, this means to I want you to AVOID USING 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types or custom UDT.

    When you choose your 5 smaller parts, remember that each of 
    these 5 Sub Objects will need to be defined with 5 primitive 
    properties and 3 actions EACH.
*/

/*
===================
Part 1c - Step 2: Assignment
===================
    - write the name of the primitive type you'll be using after each property in UDTs 1-4 you created in Part 1b:
    - pick properties that can be represented with 'int float double bool char std::string'.
    
example: 
    Display:
        Number of Pixels (int)
        Amount of Power consumed (milliwatt-hours) (float)
        Brightness (double)
        area in cm2 (int)
        brand (std::string)
*/

/*
=================
Part 1c - Step 3: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
=================
Part 1c - Step 4: Assignment
=================
2) Fill in the 10th UDT below.
Define an object that is made of 5 sub-objects.
    These 5 sub-objects will not be defined using Primitives, but instead will be their own UDTs 
    you'll define these 5 sub-objects in Part 1d.


 */

 /*
=================
Part 1c - Step 5: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
 */

/*
*********************************************************************************
************************************ PART 1D ************************************
*********************************************************************************
*/
/*
=================
Part 1d - Step 1: Lesson
=================
You now know how to define a UDT that is composed of other UDT.
Now you will learn how to break down those sub-object UDTs into 
their 5 properties and 3 actions.

The goal of Part 1d is to get you to think about breaking down an 
object into smaller and smaller objects, until the smallest object 
is made up of only C++ primitives and std::string. 

Revisiting the previous example: Cell Phone

A Cell Phone is made up of the following 5 properties/sub-objects 
and 3 actions:
    Display
    Memory
    CPU
    Radio
    Applications
3 actions:
    make a call
    send a text
    run an application.

These 5 properties can be broken down into their own sub-objects (UDTs). 

If we break down the first property 'Display' into its 5 properties 
we get:
    brightness
    amount of power consumed.
    pixels
    width in cm
    height in cm

the Display's brightness can be represented with a Primitive, 
such as a double. 

The amount of power consumed can also be represented with a 
Primitive, such as a float or integer (i.e. 250mW)

The 'pixels' property must be represented with an array of Pixel 
instances, as the screen has more than 1 row of pixels.
    Arrays have not been discussed and can't be used in this 
    project.
    Instead, we can use an Integer primitive to store the 
    Number of Pixels:

Display:
    Number of Pixels
    Amount of Power consumed (milliwatt-hours)
    Brightness
    width in cm
    height in cm

As you can see, the 'Display' UDT has been broken down to the 
point of being able to describe it with C++ primitives. 
*/

/*
===================
Part 1d - Step 2: Assignment
===================
-  Fill in #5 - #9 below with plain-English UDTs for the 5 properties you created for UDT #10. 

example: 
    If #10's first property was 'Engine', then `Thing 5)` will be `Engine`. 
    You will need to provide 5 properties and 3 member functions of that Engine object in plain English.
    Remember to pick properties that can be represented with 'int float double bool char std::string'.


 */

/*
=================
Part 1d - Step 3: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
================
Part 1d - Step 4: Assignment
================
    - write the name of the primitive type you'll be using after each property for UDTs 5 - 9.
    - You already did this for UDTs 1-4 in Part 1c.
    - Pick properties that can be represented with 'int float double bool char std::string'
    
example: 
    Display:
        Number of Pixels (int)
        Amount of Power consumed (milliwatt-hours) (float)
        Brightness (double)
        width in cm (int)
        height in cm (int)
*/

/*
=================
Part 1d - Step 5: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
===================
Part 1d - Step 6: assignment
===================
You've just defined 10 UDTs!
4 of them are unrelated (UDTs 1-4).
5 of them form the sub-objects that make up the 10th UDT. 

MOVE THEM to the space below this block comment and put them in numerical order 
(1 - 10).
    DO NOT COPY. 
    CUT AND PASTE. 
    I do not want to see 2 copies of your Plain-English UDTs.  
    I only want to see the 10 UDTs written BELOW this block comment, in numerical order (1 - 10).
    simply CUT and PASTE them in the space provided below:

Thing 1) Cellphone
5 properties: 
    1) Number of camera lens (int)
    2) Manufacturer (std::string)
    3) Ram (int)
    4) Screen size (float)
    5) Amount of storage (int)
3 things it can do:
    1) Make phone calls
    2) Take photos and videos
    3) Access the internet and apps.

Thing 2) Movie Theater
5 properties: 
    1) Number of theaters (int)
    2) Cost of small popcorn (double)
    3) Cost of one ticket (double)
    4) Number of IMAX theaters (int)
    5) Number of movies available (int)
3 things it can do:
    1) Sell movie tickets
    2) Play movies
    3) Sell food and snacks

Thing 3) Dog
5 properties:
    1) Number of legs (int)
    2) Name (std::string)
    3) Age (int)
    4) Number of eyes (int)
    5) Breed (std::string)
3 things it can do:
    1) Bark
    2) Wag tail
    3) Perform a trick

Thing 4) Guitar
5 properties:
    1) Number of strings (int)
    2) Number of frets (int)
    3) Volume level (float)
    4) Brand (std::string)
    5) Material (std::string)
3 things it can do:
    1) Play individual notes
    2) Be tuned to different tunings
    3) Strum notes
Thing 5) Wings
5 properties:
    1) Wing shape (std::string)
    2) Wing length (int)
    3) Ratio of wings length to width (int)
    4) Angle of wing tilt (float)
    5) Flap angle (float)
3 things it can do:
    1) Generate lift
    2) Provide stability
    3) Adjust to various conditions and scenarios

Thing 6) Engines
5 properties:
    1) Number of engines (int)
    2) Power output (float)
    3) Fuel efficiency (float)
    4) Emissions (float)
    5) Size (int)
3 things it can do:
    1) Provide thrust
    2) Generate elecricity
    3) Control speed and altitude

Thing 7) Cargo space
5 properties:
    1) Volume (float)
    2) Weight (int)
    3) Temperature (int)
    4) Capacity (int)
    5) Loading time (float)
3 things it can do:
    1) Transport
    2) Store
    3) Secure

Thing 8) Tail
5 properties:
    1) Tail length (int)
    2) Tail width (int)
    3) Elevator angle (float)
    4) Stabilizer angle (float)
    5) Yaw control width (int)
3 things it can do:
    1) Create stability
    2) Create lift
    3) Control side to side movement

Thing 9) Fuselage
5 properties:
    1) Length of fuselage (int)
    2) Width of fuselage (int)
    3) Height of fuselage (float)
    4) Capacity of fuselage (int)
    5) Drag from fuselage (float)
3 things it can do:
    1) Enclose passenger cabin and cargo
    2) Support wings and tail
    3) Maintain internal pressure

Thing 10) Airplane
5 properties: 
    1) Wings
    2) Engines
    3) Cargo space
    4) Tail
    5) Fuselage
3 things it can do:
    1) Fly
    2) Transport passengers and cargo
    3) Communicate with air traffic control
*/




/*
=================
Part 1d - Step 7: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
=================
Part 1d - Step 8: Request a review
=================
After you have MOVED/CUT-AND-PASTED your 10 UDTs, send me a DM with your pull request link.
I will review the pseudo-code that you have written.
If approved, you'll start on Part 1e
*/

/*
*********************************************************************************
************************************ PART 1E ************************************
*********************************************************************************

NOTE: do not write namespace <SomeName> { } around your code like I have done here.
I'm only doing it to prevent compiler errors.  
ignore these lines and focus on the example code inside of the namespace  <SomeName> { }
*/

namespace Part1E_Instructions
{
/*
=================
Part 1e - Step 1: Assignment and Example Info
=================
NOTE: I recommend compiling after each step before committing and making sure it compiles without errors or warnings before moving on to writing the next UDT. 

Goal: Convert your 10 Plain-English UDTs into code.

Task: define an empty struct below your plain-English UDT.
- Do this for all 10 UDTs
*/
namespace Part1E_Step1
{
/*

my plain-English UDT: 

Thing 1): Car Wash   
    5 properties:
        1) number of vacuum cleaners
        2) number of eco-friendly cleaning supplies
        3) stores the amount of water used per week.
        4) stores amount of profit made per week
        5) number of cars serviced per day
    3 things it can do:
        1) wash and wax car
        2) charge customer
        3) detail the car interior
 */
struct CarWash  //This is the empty struct, below my plain-English UDT.  
{
                //notice that no code is written inside the curly braces.
};
/*
Thing 1) Cellphone
5 properties: 
    1) Number of camera lens (int)
    2) Manufacturer (std::string)
    3) Ram (int)
    4) Screen size (float)
    5) Amount of storage (int)

3 things it can do:
    1) Make phone calls
    2) Take photos and videos
    3) Access the internet and apps.
*/

struct cellphone
{

};


/*
Thing 2) Movie Theater
5 properties: 
    1) Number of theaters (int)
    2) Cost of small popcorn (double)
    3) Cost of one ticket (double)
    4) Number of IMAX theaters (int)
    5) Number of movies available (int)
3 things it can do:
    1) Sell movie tickets
    2) Play movies
    3) Sell food and snacks
*/

struct MovieTheater
{

};

/*
Thing 3) Dog
5 properties:
    1) Number of legs (int)
    2) Name (std::string)
    3) Age (int)
    4) Number of eyes (int)
    5) Breed (std::string)
3 things it can do:
    1) Bark
    2) Wag tail
    3) Perform a trick
*/

struct dog 
{

};

/*
Thing 4) Guitar
5 properties:
    1) Number of strings (int)
    2) Number of frets (int)
    3) Volume level (float)
    4) Brand (std::string)
    5) Material (std::string)
3 things it can do:
    1) Play individual notes
    2) Be tuned to different tunings
    3) Strum notes
*/

struct guitar
{

};

/*
Thing 5) Wings
5 properties:
    1) Wing shape (std::string)
    2) Wing length (int)
    3) Ratio of wings length to width (int)
    4) Angle of wing tilt (float)
    5) Flap angle (float)
3 things it can do:
    1) Generate lift
    2) Provide stability
    3) Adjust to various conditions and scenarios
*/

struct wings
{

};

/*
Thing 6) Engines
5 properties:
    1) Number of engines (int)
    2) Power output (float)
    3) Fuel efficiency (float)
    4) Emissions (float)
    5) Size (int)
3 things it can do:
    1) Provide thrust
    2) Generate elecricity
    3) Control speed and altitude
*/

struct engines {

};
/*
Thing 7) Cargo space
5 properties:
    1) Volume (float)
    2) Weight (int)
    3) Temperature (int)
    4) Capacity (int)
    5) Loading time (float)
3 things it can do:
    1) Transport
    2) Store
    3) Secure
*/

struct CargoSpace
{

};
/*
Thing 8) Tail
5 properties:
    1) Tail length (int)
    2) Tail width (int)
    3) Elevator angle (float)
    4) Stabilizer angle (float)
    5) Yaw control width (int)
3 things it can do:
    1) Create stability
    2) Create lift
    3) Control side to side movement
*/

struct tail
{

};

/*
Thing 9) Fuselage
5 properties:
    1) Length of fuselage (int)
    2) Width of fuselage (int)
    3) Height of fuselage (float)
    4) Capacity of fuselage (int)
    5) Drag from fuselage (float)
3 things it can do:
    1) Enclose passenger cabin and cargo
    2) Support wings and tail
    3) Maintain internal pressure
*/

struct fuselage
{

};

/*
Thing 10) Airplane
5 properties: 
    1) Wings
    2) Engines
    3) Cargo space
    4) Tail
    5) Fuselage
3 things it can do:
    1) Fly
    2) Transport passengers and cargo
    3) Communicate with air traffic control
*/

struct airplane
{

};

/*
Notice that the struct name 'CarWash' conforms with the Course Coding Standard, described in the Readme.MD
*/

/*
=================
Part 1e - Step 2: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/

} //end namespace Part1E_Step1

namespace Part1E_Step3
{
/*
=================
Part 1e - Step 3: Assignment
=================
    - Below your plain-English UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    */

struct CarWash 
{
    //5 properties:
    //    - number of vacuum cleaners
    //    - number of eco-friendly cleaning supplies
    //    - stores the amount of water used per week.
    //    - stores amount of profit made per week
    //    - number of cars serviced per day
    //3 things it can do:
    //    - wash and wax car
    //    - charge customer
    //    - detail the car interior
};

struct cellphone
{
    /*
    5 properties: 
        1) Number of camera lens (int)
        2) Manufacturer (std::string)
        3) Ram (int)
        4) Screen size (float)
        5) Amount of storage (int)
    
    3 things it can do:
        1) Make phone calls
        2) Take photos and videos
        3) Access the internet and apps.
    */
};

struct MovieTheater
{
    /*
    5 properties: 
        1) Number of theaters (int)
        2) Cost of small popcorn (double)
        3) Cost of one ticket (double)
        4) Number of IMAX theaters (int)
        5) Number of movies available (int)
    3 things it can do:
        1) Sell movie tickets
        2) Play movies
        3) Sell food and snacks
    */    
};

struct dog 
{
    /*
    5 properties:
        1) Number of legs (int)
        2) Name (std::string)
        3) Age (int)
        4) Number of eyes (int)
        5) Breed (std::string)
    3 things it can do:
        1) Bark
        2) Wag tail
        3) Perform a trick
    */
};

struct guitar
{
    /*
    5 properties:
        1) Number of strings (int)
        2) Number of frets (int)
        3) Volume level (float)
        4) Brand (std::string)
        5) Material (std::string)
    3 things it can do:
        1) Play individual notes
        2) Be tuned to different tunings
        3) Strum notes
*/
};

struct wings
{
    /*
    5 properties:
        1) Wing shape (std::string)
        2) Wing length (int)
        3) Ratio of wings length to width (int)
        4) Angle of wing tilt (float)
        5) Flap angle (float)
    3 things it can do:
        1) Generate lift
        2) Provide stability
        3) Adjust to various conditions and scenarios
    */
}; 

struct engines 
{
    /*
    5 properties:
        1) Number of engines (int)
        2) Power output (float)
        3) Fuel efficiency (float)
        4) Emissions (float)
        5) Size (int)
    3 things it can do:
        1) Provide thrust
        2) Generate elecricity
        3) Control speed and altitude
*/
};

struct CargoSpace
{
    /*
    5 properties:
        1) Volume (float)
        2) Weight (int)
        3) Temperature (int)
        4) Capacity (int)
        5) Loading time (float)
    3 things it can do:
        1) Transport
        2) Store
        3) Secure
    */

};

struct tail
{
    /*
    5 properties:
        1) Tail length (int)
        2) Tail width (int)
        3) Elevator angle (float)
        4) Stabilizer angle (float)
        5) Yaw control width (int)
    3 things it can do:
        1) Create stability
        2) Create lift
        3) Control side to side movement
    */
};

struct fuselage
{
    /*
    5 properties:
        1) Length of fuselage (int)
        2) Width of fuselage (int)
        3) Height of fuselage (float)
        4) Capacity of fuselage (int)
        5) Drag from fuselage (float)
    3 things it can do:
        1) Enclose passenger cabin and cargo
        2) Support wings and tail
        3) Maintain internal pressure
    */

};

struct airplane
{
    /*
    5 properties: 
        1) Wings
        2) Engines
        3) Cargo space
        4) Tail
        5) Fuselage
    3 things it can do:
        1) Fly
        2) Transport passengers and cargo
        3) Communicate with air traffic control
    */
};

/*
=================
Part 1e - Step 4: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
}  //end namespace Part1E_Step3
  
namespace Part1E_Step5
{
/*
=================
Part 1e - Step 5: Assignment
=================
    - declare your member variables using camelCase versions of the plain-english properties
    - give the member variables relevant data types and reasonable default values
    - Do this for all 10 UDTs
 */
struct CarWash 
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;     
    //3 things it can do:
    //    - wash and wax car
    //    - charge customer
    //    - detail the car interior
};
/*

=================
Part 1e - Step 6: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
}  //end namespace Part1E_Step5

namespace Part1E_Step7
{
/*
=================
Part 1e - Step 7: Assignment
=================
  - declare your member functions underneath each plain-English comment in your struct's body.
  - add function parameters where it makes sense to have them.
  - if your functions return something other than 'void', add a comment explaining what is being returned.  see the example code below.
  */
struct CarWash 
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;     
    
    //3 things it can do:
    //wash and wax car
    void washAndWaxCar(); 
    
    //charge customer       //NOTE: function parameter is relevant to the work that the function performs
    float chargeCustomer(float discountPercentage); //returns the total amount charged.
    
    //detail the car interior
    void detailInterior();
};
/*
=================
Part 1e - Step 8: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} //end namespace Part1E_Step7

namespace Part1E_Step19
{
/*
=================
Part 1e - Step 9: Assignment
=================
5) Declare/define a nested class inside 2 of the 9 user-defined types.  
    - Do not declare/define a nested class in UDT #10
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are in addition to the 10 UDTs you are defining in this project.
    - this nested class MUST be related to the class it is nested inside
*/
struct CarWash 
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;     
    
    //this is the nested UDT:
    struct Car                  //Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //5 member variables with relevant data types.  the names are relevant to the UDT's purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        // 3 member functions.  
        // they take multiple parameters. some parameters have default values.
        // the parameter names are related to the work the function will perform.
        // all function and variable names conform to the course coding standard, described in the Readme.MD file
        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); //3) returns the number of miles traveled
    }; //this is the end of the nested class

    //3 things it can do:
    //wash and wax car
    void washAndWaxCar(); 
    
    //charge customer       //NOTE: function parameter is relevant to the work that the function performs
    float chargeCustomer(float discountPercentage); //returns the total amount charged.
    
    //detail the car interior
    void detailInterior();
};
/*
=================
Part 1e - Step 10: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} // end namespace Part1E_Step9

namespace Part1E_Step11
{
/*
=================
Part 1e - Step 11: Assignment
=================
4) make the function parameter lists for your UDTs' member functions use some of your User-Defined Types.  
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - You can use the nested classes you just created.  see the example code below
    - You can also declare instances of these nested classes as member variables, but the intended usage must make sense and must compile without errors.  see the note below the example code. 

Remember: in C++ you cannot use something before it is declared. 
The compiler parses the files from top to bottom.
This means you can only use a UDT AFTER you have written the closing curly brace for it };

Keep this in mind when you define the function parameter lists to use some of your User-Defined Types.
*/
struct CarWash 
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;     
    
    struct Car                   
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); 
    };

    //wash and wax car
    void washAndWaxCar(Car car); //a member function whose parameter is a UDT. 
    //Notice that `Car car` is written AFTER `struct Car { ... };

    //charge customer
    float chargeCustomer(float discountPercentage); 
    //detail interior
    void detailInterior(Car car);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced; //Notice that this is written AFTER `struct Car { ... };

    /*
    A Note regarding functions that use UDTs in their parameter list:
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed to that function will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};
/*
=================
Part 1e - Step 12: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} //end namespace Part1E_Step11

namespace Part1E_Step13
{
/*
=================
Part 1e - Step 13: Assignment
================= 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
    - see the example below, which uses the 10th UDT example from Part 1C
    note: the example UDTs 5-9 below are empty, solely for the purpose of keeping the example easy to understand
 */


struct Display  //UDT 5
{ 
    /* empty just to make the example easy to follow */ 
};
struct Memory       { }; //UDT 6
struct CPU          { }; //UDT 7
struct Radio        { }; //UDT 8
struct Applications { }; //UDT 9

//UDT 10, from Part 1c example
struct CellPhone
{   
    Display display;            //a member variabledeclaration of an instance of UDT 5
    Memory memory;              //a member variabledeclaration of an instance of UDT 6
    CPU cpu;                    //a member variabledeclaration of an instance of UDT 7
    Radio radio;                //a member variabledeclaration of an instance of UDT 8
    Applications applications;  //a member variabledeclaration of an instance of UDT 9

    bool makeACall(std::string number); //returns true if the call connected
    bool sendAText(std::string number, std::string messageToSend); //returns true if the text was sent
    int runApplication(std::string applicationName); //returns how much memory (bytes) the application asked for
};
 /*
=================
Part 1e - Step 14: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} // end namespace Part1E_Step13
 /*
 =================
Part 1e - Step 15: Assignment
=================
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
=================
Part 1e - Step 16: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/

/*
=================
Part 1e - Step 17: Move your finished UDTs
=================
MOVE your 10 UDTs to the blank space below step 19 by cutting/pasting
Re-run your project to make sure everything compiles without errors or warnings.
Fix anything that needs fixing

You should see "good to go" in the program output
*/

/*
=================
Part 1e - Step 18: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/

/*
=================
Part 1e - Step 19: Request a review
=================
*/
} //end namespace Part1E_Instructions

/*
paste your code below
*/









int main()
{
    std::cout << "good to go!" << std::endl;
}
