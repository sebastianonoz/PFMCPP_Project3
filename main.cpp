 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
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
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 If your code produces -Wconversion warnings, do NOT use static_cast<> to solve the warnings.  
 Casting has not been covered yet.
 Change your code so that no warnings are produced WITHOUT using casting.
 This usually means you have to use identical types for all variables used in an expression that is producing that conversion warning.
 */


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

struct Cellphone
{
// 5 properties: 
    // 1) Number of camera lens (int)
    int numCameraLens = 2;
    //     2) Manufacturer (std::string)
    std::string manufacaturer = "Apple";
    //     3) Ram (int)
    int ram = 16;
    //     4) Screen size (float)
    float screenSize = 6.2f;
    //     5) Amount of storage (int)
    int storageAmount = 32;
    
    // 3 things it can do:
    //     1) Make phone calls
    void makePhoneCall(std::string phoneNumber);
    //     2) Take photos and videos
    void takePhotoAndVideo(); 
    //     3) Conenct to the internet
    void connectToInternet(std::string wifiConnection);
};

struct MovieTheater
{
    // 5 properties: 
    //     1) Number of theaters (int)
    int numTheaters = 13;
    //     2) Cost of small popcorn (double)
    double costSmallPopcorn = 8.9;
    //     3) Cost of one ticket (double)
    double costOneTicket = 19.9;
    //     4) Number of IMAX theaters (int)
    int numImaxTheaters = 2;
    //     5) Number of movies available (int)
    int numMoviesAvailable = 15;
    // 3 things it can do:
    //     1) Sell movie tickets
    void sellMovieTicket(); 
    //     2) Play movies
    void playMovie();
    //     3) Sell food and snacks
    float sellFoodAndSnacks (std::string itemPurchased, float fullChargeAmount); // returns items purchasing and amount charged.
};

struct Dog 
{
    // 5 properties:
    //     1) Number of legs (int)
    int numLegs = 4;
    //     2) Name (std::string)
    std::string name = "Bucky";
    //     3) Age (int)
    int age = 4;
    //     4) Number of eyes (int)
    int numEyes = 2;
    //     5) Breed (std::string)
    std::string breed = "Golden Retriever";
    // 3 things it can do:
    //     1) Bark
    void bark();
    //     2) Wag tail
    void wagTail(std::string leftOrRight);
    //     3) Perform a trick
    void peformTrick (std::string trickType);
};

struct Guitar
{

    // 5 properties:
    //     1) Number of strings (int)
    int numStrings = 6;
    //     2) Number of frets (int)
    int numFrets = 22;
    //     3) Volume level (float)
    float volumeLevel = 3.7f;
    //     4) Brand (std::string)
    std::string brand = "Gibson";
    //     5) Material (std::string)
    std::string material = "Spruce Wood";

    struct Strings
    {
        float lowEStringGauge = .040f; 

        float dStringGauge = .010f;
        std::string brand = "Ernie Ball";
        std::string sku = "2229";
        std::string material ="Nickel";
        
        void bend(std::string whichString);
        void slide(std::string targetNote);
        void snap(std::string whichString);
    
    };
    // 3 things it can do:
    //     1) Play individual notes
    void playNote(Strings strings, std::string whichNote);
    //     2) Be tuned to different tunings
    void tune(Strings strings,std::string whichString);
    //     3) Strum notes
    void strumNotes (Strings strings, std::string whichChord);
};

struct Wings
{
    // 5 properties:
    //     1) Wing shape (std::string)
    std::string shape = "Airfoil";
    //     2) Wing length (int)
    int length = 130;
    //     3) Ratio of wings length to width (int)
    int ratioLengthToWidth = 55;
    //     4) Angle of wing tilt (float)
    float tiltAngle = 20.f;
    //     5) Flap angle (float)
    float flapAngle = 30.f;
    // 3 things it can do:
    //     1) Generate lift
    void generateLift();
    //     2) Provide stability
    void stabilize();
    //     3) Adjust to various conditions and scenarios
    void adjustToTurbulance();
}; 

struct Engines 
{
//     5 properties:
//         1) Number of engines (int)
    int numEngines = 2;
//         2) Power output (float)
    float powerOutput = 30.f;
//         3) Fuel efficiency (float)
    float fuelEfficiency = 10.f;
//         4) Emissions (float)
    float emissions = 20.f;
//         5) Size (int)
    int size = 20;

    struct Turbines
    {
        int lowPressureLenth = 84; 
        int highPressureWidth = 93;
        std::string brand = "GE";
        std::string model = "CF3942";
        std::string material ="Titanium";

        void thrust(std::string whichTurbine);
        void efficiency(std::string targetSpeed);
        void noiseLevel(std::string whichTurbine);
    };


//     3 things it can do:
//         1) Provide thrust
    void engageThrust(Turbines turbines);
//         2) Generate elecricity
    void increasePower(Turbines turbines, int amountOfIncrease);
//         3) Control speed and altitude
    void controlSpeedAndAltitude(Turbines turbines, int amountOfChange);

    Turbines engaged;
};

struct CargoSpace
{
    // 5 properties:
    //     1) Volume (float)
    float volume = 64.f;
    //     2) Weight (int)
    int weight = 1300;
    //     3) Temperature (int)
    int temperature = 75;
    //     4) Capacity (int)
    int capacity = 400;
    //     5) Loading time (float)
    float loadingTime = 45;
    // 3 things it can do:
    //     1) Transport
    void transport();
    //     2) Store
    void store();
    //     3) Secure
    void secure();
};

struct Tail
{
    // 5 properties:
    //     1) Tail length (int)
    int length = 55;
    //     2) Tail width (int)
    int width = 85;
    //     3) Elevator angle (float)
    float elevatorAngle = 45.f;
    //     4) Stabilizer angle (float)
    float stabilizerAngle = 45.f;
    //     5) Yaw control width (int)
    int yawControlWidth = 30;
    // 3 things it can do:
    //     1) Create stability
    void stabilize();
    //     2) Create lift
    void createLift();
    //     3) Control side to side movement
    void controlSideToSide();
};

struct Fuselage
{
    // 5 properties:
    //     1) Length of fuselage (int)
    int length = 30;
    //     2) Width of fuselage (int)
    int width = 15;
    //     3) Height of fuselage (float)
    float height = 19.f;
    //     4) Capacity of fuselage (int)
    int capacity = 59;
    //     5) Drag from fuselage (float)
    float drag = 32.2f;
    // 3 things it can do:
    //     1) Enclose passenger cabin and cargo
    void encloseCabin();
    //     2) Support wings and tail
    void supportWingsAndTail();
    //     3) Maintain internal pressure
    void maintainInternalPressure();
};

struct Airplane
{
    Wings wings;  
    Engines engines;
    CargoSpace cargoSpace;
    Tail tail;
    Fuselage fuselage;

    void fly();
    void transportPassengers(int passengerAmount);
    void dispatchToAirTraffic();
};

int main()
{
    std::cout << "good to go!" << std::endl;
}
