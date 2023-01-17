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

struct Person
{
	int age;
	int height;
	float hairLength;
	float GPA;
	unsigned int SATScore;
	int distanceTraveled;

    struct Limb
    {
        int stepSize();
        void stepForward();
    };

    Limb leftFoot, rightFoot;
	void run(int howFast, bool startWithLeftFoot);
};

void Person::Limb::stepForward()
{
    
}

int Person::Limb::stepSize()
{
    return 1;
}

void Person::run(int howFast, bool startWithLeftFoot)
{
	if(startWithLeftFoot == true)
	{
		leftFoot.stepForward(); 
		rightFoot.stepForward();
	}
	else
	{
		rightFoot.stepForward(); 
		leftFoot.stepForward();
	}
	
	distanceTraveled += (leftFoot.stepSize() + rightFoot.stepSize()) * howFast; 
}

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

// UDT 1

struct Cellphone
{
    int numCameraLens = 2;
    std::string manufacaturer = "Apple";
    int ram = 16;
    float screenSize = 6.2f;
    int storageAmount = 32;

    
    void makePhoneCall(std::string phoneNumber);
    void savePhotosAndVideos(int fileSize); 
    void connectToInternet(bool connectedToWifi);
};

void Cellphone::makePhoneCall(std::string phoneNumber)
{
    if(phoneNumber == "Unavailable")
    {
        std::cout << "I'm sorry the phone number you are trying to reach is unavailable" << std::endl;
    }
    else
    {
        std::cout << "Connecting to call" << std::endl;
    }
}

void Cellphone::savePhotosAndVideos(int fileSize)
{
    storageAmount -= fileSize;
}

void Cellphone::connectToInternet(bool connectedToWifi)
{
    if(connectedToWifi == false)
    {
        std::cout << "Please connect to a WiFi network." << std::endl;
    }
    else
    {
        std::cout << "Connected!" << std::endl;
    }
}


// UDT 2
struct MovieTheater
{
    int numTheaters = 13;
    double costSmallPopcorn = 8.9;
    float costOneTicket = 19.9f;
    int numImaxTheaters = 2;
    int numMoviesAvailable = 15;
    int seatsPerTheater = 60;
    double cashInRegister = 3000.39;
    
    

    void sellOutMovie(int seatsSold); 
    bool useProjector(bool projectorIsWorking);
    bool chargeCashForFoodAndSnacks(bool payingWithCash);
};

void MovieTheater::sellOutMovie(int seatsSold)
{
    if(seatsPerTheater == seatsSold)
    {
        std::cout << "This showing is sold out." << std::endl;
    }
    else
    {
        seatsPerTheater -= seatsSold + 1;
        std::cout << "There are tickets avaialble!" << std::endl;
    }
}

bool MovieTheater::useProjector(bool projectorIsWorking)
{
    if(projectorIsWorking == true)
    {
        return true;
    }
    else
    {
        numTheaters -= 1;
        return false;
    }
}

bool MovieTheater::chargeCashForFoodAndSnacks(bool payingWithCash)
{
    return payingWithCash ? false : true;
    
}

// UDT 3
struct Dog 
{
    int numLegs = 4;
    std::string name = "Bucky";
    int age = 4;
    int numEyes = 2;
    std::string breed = "Golden Retriever";
    int energyLevel = 25;

    void bark(bool isLoud);
    void wagTail(int howFast);
    void sitDown(bool wantsToSit);
};

void Dog::bark(bool isLoud)
{
    if(isLoud == true)
    {
        energyLevel += 25;
    }
}
void Dog::wagTail(int howFast)
{
    if(howFast == 50)
    {
        energyLevel += 50;
    }
}
void Dog::sitDown(bool wantsToSit)
{
    if(wantsToSit == true)
    {
        energyLevel -= 25;
    }
}

//UDT 4
struct Guitar
{
    int numStrings = 6;
    int numFrets = 22;
    float volumeLevel = 3.7f;
    std::string brand = "Gibson";
    std::string material = "Spruce Wood";
    bool inTune = false;

    struct Strings
    {
        float lowEStringGauge = .040f; 
        float dStringGauge = .010f;
        std::string brand = "Ernie Ball";
        std::string sku = "2229";
        std::string material ="Nickel";
        int currentPitchST = 0;
        
        void bend(std::string whichString, bool bendUp);
        void slide(std::string currentNote, std::string targetNote);
        bool snap();
    };

    bool playNote(std::string whichNote);
    void tune(float CurrentCent);
    bool makePercussiveNoise();
};

void Guitar::Strings::bend(std::string whichString, bool bendUp)
{
    if(whichString == "Low E")
    {
        bendUp = false;
    }
    if(whichString == "A")
    {
        currentPitchST += 2;
    }
}
void Guitar::Strings::slide(std::string currentNote, std::string targetNote)
{
    if(targetNote == "A")
    {
        if(currentNote == "G")
        {
            currentPitchST += 2;
        }
    }
}
bool Guitar::Strings::snap()
{
    return true;
}

bool Guitar::playNote(std::string whichNote)
{
    if(whichNote == "F")
    {
        std::cout << "Now playing " << whichNote << " ." << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}
void Guitar::tune(float currentCent)
{
    if(currentCent == .00f)
    {
        inTune = true;
    }
    else {
        inTune = false;
    }  
}
bool Guitar::makePercussiveNoise()
{
    std::cout << "tap tap tap" << std::endl;
    return true;
}


// UDT 5
struct Wings
{
    std::string shape = "Airfoil";
    int length = 130;
    int ratioLengthToWidth = 55;
    float tiltAngle = 20.f;
    float flapAngle = 30.f;
    float stablePosition;

    void generateLift(bool isFullSpeed);
    void stabilize();
    void adjustToTurbulance(int dragLevel);
}; 

void Wings::generateLift(bool isFullSpeed)
{
    if(isFullSpeed == true)
    {
        flapAngle += 20.f;
    }
}
void Wings::stabilize()
{
   if(tiltAngle > 40.f) 
   {
       stablePosition = tiltAngle - 40.f;
   }
}
void Wings::adjustToTurbulance(int dragLevel)
{
    if(dragLevel > 30)
    {
        tiltAngle -= 20.f;
        flapAngle -= 30.f;
    }
}


// UDT 6
struct Engines 
{
    int numEngines = 2;
    float powerOutput = 30.f;
    float fuelEfficiency = 10.f;
    float emissions = 20.f;
    int size = 20;
    int engineSpeed = 0;

    struct Turbines
    {
        int lowPressureLenth = 84; 
        int highPressureWidth = 93;
        std::string brand = "GE";
        std::string model = "CF3942";
        std::string material ="Titanium";
        int currentSpeed = 0;
        float currentPressure = 0;
        int thrustLevel = 0;

        void increaseThrustLevel(int targetLevel);
        void increaseSpeed(int targetSpeed);
        void increasePressure(int targetPressure);
    };

    bool engageThrust(Turbines thrust,bool turbinesEngaged);
    void increasePower(float amountOfIncrease);
    void controlSpeed();
};

void Engines::Turbines::increaseThrustLevel(int targetLevel)
{
    if(targetLevel == 20)
    {
        thrustLevel += 20;
    }
    else
    {
    }
}
void Engines::Turbines::increaseSpeed(int targetSpeed)
{
    if(targetSpeed == 20)
    {
        currentSpeed += 20;
    }
}
void Engines::Turbines::increasePressure(int targetPressure)
{
    if(targetPressure == 40)
    {
        currentPressure += 40;
    }
}

bool Engines::engageThrust(Turbines thrust, bool turbinesEngaged)
{
    if(turbinesEngaged == true)
    {
        int targetLevel = 20;
        thrust.increaseThrustLevel(targetLevel);
        return true;
    }
    else
    {
        return false;
    }
}
void Engines::increasePower(float amountOfIncrease)
{
    if(amountOfIncrease == 40.f)
    {
        powerOutput += 40.f;
    }
}
void Engines::controlSpeed()
{
    if(engineSpeed == 0)
    {
        engineSpeed += 10;
    }
}


// UDT 7
struct CargoSpace
{
    float volume = 64.f;
    int weight = 1300;
    int temperature = 75;
    int capacity = 400;
    float loadingTime = 45;

    void transport();
    void store(int amountOfCargo);
    void secure(bool isDoorEnclosed);
};

void CargoSpace::transport()
{
    std::cout << "Cargo is being transported." << std::endl;
}

void CargoSpace::store(int amountOfCargo)
{
    if(amountOfCargo <= capacity)
    {
    std::cout << amountOfCargo << " units of cargo stored." << std::endl;
    }
    else
    {
    std::cout << "Cargo exceeds maximum capacity." << std::endl;
    }
}

void CargoSpace::secure(bool isDoorEnclosed)
{
    if(isDoorEnclosed)
    {
    std::cout << "Cargo is secured." << std::endl;
    }
    else
    {
    std::cout << "Cargo is not secured. Please close the door." << std::endl;
    }
}

// UDT 8
struct Tail
{
    int length = 55;
    int width = 85;
    int elevatorAngle = 45;
    int stabilizerAngle = 45;
    int yawControlWidth = 30;

    void stabilize();
    void createLift();
    void controlSideToSide();
};

void Tail::stabilize()
{
    if(elevatorAngle != 0 || stabilizerAngle != 0)
    {
    elevatorAngle = 0;
    stabilizerAngle = 0;
    }
}
void Tail::createLift()
{
    if(elevatorAngle < 15)
    {
    elevatorAngle = 15;
    }
}
void Tail::controlSideToSide()
{
    if(yawControlWidth < 30)
    {
    yawControlWidth += 10;
    }
}

// UDT 9
struct Fuselage
{
    int length = 30;
    int width = 15;
    float height = 19.f;
    int capacity = 59;
    float drag = 32.2f;

    void encloseCabin();
    void supportWingsAndTail();
    void maintainInternalPressure();
};

void Fuselage::encloseCabin()
{
    std::cout << "Cabin enclosed." << std::endl;
}
void Fuselage::supportWingsAndTail()
{
    std::cout << "Supporting wings and tail." << std::endl;
}
void Fuselage::maintainInternalPressure()
{
    if(capacity >= 50)
    {
    std::cout << "Maintaining internal pressure." << std::endl;
    }
    else
    {
    std::cout << "Cannot maintain internal pressure. Increase capacity." << std::endl;
    }
}

// UDT 10
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

void Airplane::fly()
{
    std::cout << "Airplane taking off." << std::endl;
}
void Airplane::transportPassengers(int passengerAmount)
{
    if(passengerAmount <= fuselage.capacity)
    {
    std::cout << "Transporting " << passengerAmount << " passengers." << std::endl;
    }
    else
    {
    std::cout << "Cannot transport " << passengerAmount << " passengers. Maximum capacity is " << fuselage.capacity << "." << std::endl;
    }
}
void Airplane::dispatchToAirTraffic()
{
    std::cout << "Dispatching airplane to air traffic." << std::endl;
}

int main()
{
    std::cout << "good to go!" << std::endl;
}
