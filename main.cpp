/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




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

    numTheaters -= 1;
    return false;
}

bool MovieTheater::chargeCashForFoodAndSnacks(bool payingWithCash)
{
    return ! payingWithCash;
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
    
    return false;
}

void Guitar::tune(float currentCent)
{
    if(currentCent == .00f)
    {
        inTune = true;
    }
    else
    {
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
    
    return false;
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
    Example::main();
        
    std::cout << "good to go!" << std::endl;
    return 0;
}
