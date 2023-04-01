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
    std::string phoneNumber = "13924823728";
    int ram = 16;
    float screenSize = 6.2f;
    int storageAmount = 32;

    Cellphone();

    void makePhoneCall(int countryCode);
    void savePhotosAndVideos(int fileSize); 
    void connectToInternet(bool connectedToWifi);
};

Cellphone::Cellphone()
{
    std::cout << "Cellphone being constructed!" << std::endl;
}

void Cellphone::makePhoneCall(int countryCode)
{
    if(countryCode == 1)
    {
        std::cout << "Making a phone call from this telephone number:/n"<< phoneNumber << std::endl;
    }
    else if (countryCode == 53)
    {
        std::cout << "Sorry, unable to make the call." << std::endl;
    }
}

void Cellphone::savePhotosAndVideos(int fileSize)
{
    storageAmount -= fileSize;
    std::cout << "File saved!" << std::endl;
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
    int numTheaters = 2;
    double costSmallPopcorn = 8.9;
    float costOneTicket = 19.9f;
    int numMoviesAvailable = 2;
    int seatsInTheater = 60;
    double cashInRegister = 3000.39;

    MovieTheater();

    void sellOutMovie(int seatsSold); 
    bool useProjector(bool projectorIsWorking);
    bool chargeCashForFoodAndSnacks(bool payingWithCash);
};

MovieTheater::MovieTheater()
{
    std::cout << "MovieTheater being constructed!" << std::endl;
}

void MovieTheater::sellOutMovie(int seatsSold)
{
    if(seatsInTheater == seatsSold)
    {
        std::cout << "This showing is sold out." << std::endl;
    }
    else
    {
        seatsInTheater -= seatsSold + 1;
        std::cout << "There are " << seatsInTheater << " seats left for this showing." << std::endl;
    }
}

bool MovieTheater::useProjector(bool projectorIsWorking)
{
    if(projectorIsWorking == true)
    {
        return true;
    }
    numTheaters -= 1;
    std::cout << "There is/are " << numTheaters << " theater(s) available." << std::endl;
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

    Dog();

    void bark(bool isLoud);
    void wagTail(int howFast);
    void sitDown(bool wantsToSit);
};

Dog::Dog()
{
    std::cout << "Dog is being constructed!" << std::endl;
}

void Dog::bark(bool isLoud)
{
    if(isLoud == true)
    {
        energyLevel += 25;
        std::cout << "It's me! " << name << "! Woof! I'm trying to tell you my energy level is "<< energyLevel << std::endl;
    }
}
void Dog::wagTail(int howFast)
{
    if(howFast == 50)
    {
        energyLevel += 50;
        std::cout << "Woof! Squirell! My energy level is now: " << energyLevel << std::endl;
    }
}
void Dog::sitDown(bool wantsToSit)
{
    if(wantsToSit == true)
    {
        energyLevel -= 25;
        std::cout << "Sleepy... my energy level ... is ... " << energyLevel << std::endl;
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

        Strings();
        
        void bend(std::string whichString, bool bendUp);
        void slide(std::string currentNote, std::string targetNote);
        bool snap();
    };

    Guitar();

    bool playNote(std::string whichNote);
    void tune(float CurrentCent);
    bool makePercussiveNoise();
};

Guitar::Guitar()
{
    std::cout << "Guitar being constructed!" << std::endl;
}

Guitar::Strings::Strings()
{
    std::cout << "Strings being constructed!" << std::endl;
}



void Guitar::Strings::bend(std::string whichString, bool bendUp)
{
    if(whichString == "Low E")
    {
        bendUp = false;
    }
    if(whichString == "A")
    {
        currentPitchST += 2;
        std::cout << "Bending note up to: " << currentPitchST << std::endl;
    }
}
void Guitar::Strings::slide(std::string currentNote, std::string targetNote)
{
    if(targetNote == "A")
    {
        if(currentNote == "G")
        {
            currentPitchST += 2;
            std::cout << "Sliding up to: " << currentPitchST << std::endl;
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
        std::cout << "Current tuning is:" << currentCent << std::endl;
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

    Wings();

    void generateLift(bool isFullSpeed);
    void stabilize();
    void adjustToTurbulance(int dragLevel);
}; 

Wings::Wings()
{
    std::cout << "Wings being constructed!" << std::endl;
}

void Wings::generateLift(bool isFullSpeed)
{
    if(isFullSpeed == true)
    {
        flapAngle += 20.f;
        std::cout << "Generating lift with wing angle at: "<< flapAngle << std::endl;
    }
}
void Wings::stabilize()
{
   if(tiltAngle > 40.f) 
   {
       stablePosition = tiltAngle - 40.f;
       std::cout << "Stabilized position at:"<< stablePosition << std::endl;
   }
}
void Wings::adjustToTurbulance(int dragLevel)
{
    if(dragLevel > 30)
    {
        tiltAngle -= 20.f;
        flapAngle -= 30.f;
        std::cout << "Adjusted to turbulent conditions." << std::endl;
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

        Turbines();

        void increaseThrustLevel(int targetLevel);
        void increaseSpeed(int targetSpeed);
        void increasePressure(int targetPressure);
    };

    Engines();

    bool engageThrust(Turbines thrust,bool turbinesEngaged);
    void increasePower(float amountOfIncrease);
    void controlSpeed();
};

Engines::Engines()
{
    std::cout << "Engines being constructed!" << std::endl;
}

Engines::Turbines::Turbines()
{
    std::cout << "Turbines being constructed!" << std::endl;
}

void Engines::Turbines::increaseThrustLevel(int targetLevel)
{
    if(targetLevel == 20)
    {
        thrustLevel += 20;
        std::cout << "Thrust level increased to " << thrustLevel << std::endl;
    }
}
void Engines::Turbines::increaseSpeed(int targetSpeed)
{
    if(targetSpeed == 20)
    {
        currentSpeed += 20;
        std::cout << "Speed increased to " << currentSpeed << std::endl;
    }
}
void Engines::Turbines::increasePressure(int targetPressure)
{
    if(targetPressure == 40)
    {
        currentPressure += 40;
        std::cout << "Pressure increased to " << currentPressure << std::endl;
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
        std::cout << "Power output increased to " << powerOutput << std::endl;
    }
}
void Engines::controlSpeed()
{
    if(engineSpeed == 0)
    {
        engineSpeed += 10;
        std::cout << "Speed controlled to " << engineSpeed << std::endl;
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

    CargoSpace();

    void transport();
    void store(int amountOfCargo);
    void secure(bool isDoorEnclosed);
};

CargoSpace::CargoSpace()
{
    std::cout << "CargoSpace being constructed!" << std::endl;
}

void CargoSpace::transport()
{
    std::cout << "Cargo is being transported." << std::endl;
}

void CargoSpace::store(int amountOfCargo)
{
    if(amountOfCargo <= capacity) {
        std::cout << amountOfCargo << " units of cargo stored." << std::endl;
    }
    else {
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

    Tail();

    void stabilize();
    void createLift();
    void controlSideToSide();
};

Tail::Tail()
{
    std::cout << "Tail being constructed!" << std::endl;
}

void Tail::stabilize()
{
    if(elevatorAngle != 0 || stabilizerAngle != 0)
    {
        elevatorAngle = 0;
        stabilizerAngle = 0;
        std::cout << "Stabilizing tail!" << std::endl;
    }
}
void Tail::createLift()
{
    if(elevatorAngle < 15)
    {
        elevatorAngle = 15;
        std::cout << "Creating lift!" << std::endl;
    }
}
void Tail::controlSideToSide()
{
    if(yawControlWidth < 30)
    {
        yawControlWidth += 10;
        std::cout << "Controling yaw to width of: "<< yawControlWidth << std::endl;
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

    Fuselage();

    void encloseCabin();
    void supportWingsAndTail();
    void maintainInternalPressure();
};

Fuselage::Fuselage()
{
    std::cout << "Fuselage being constructed!" << std::endl;
}

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

    Airplane();

    void fly();
    void transportPassengers(int passengerAmount);
    void dispatchToAirTraffic();
};

Airplane::Airplane()
{
    std::cout << "Airplane being constructed!" << std::endl;
}

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

    Cellphone cell;
    cell.makePhoneCall(53);
    cell.savePhotosAndVideos(4);
    cell.connectToInternet(false);

    MovieTheater mt;
    mt.sellOutMovie(54);
    mt.useProjector(false);
    mt.chargeCashForFoodAndSnacks(false);

    Dog dog;
    dog.bark(true);
    dog.wagTail(50);
    dog.sitDown(true);

    Guitar gib;
    Guitar::Strings eball;
    gib.playNote("F");
    gib.tune(.00);
    gib.makePercussiveNoise();
    eball.bend("Low E", false);
    eball.slide("A", "G");
    eball.snap();

    Wings wings;
    wings.generateLift(true);
    wings.stabilize();
    wings.adjustToTurbulance(40);

    Engines engines;
    Engines::Turbines turbines;
    engines.engageThrust(turbines, true);
    engines.increasePower(40);
    engines.controlSpeed();
    turbines.increaseThrustLevel(20);
    turbines.increaseSpeed(20);
    turbines.increasePressure(40);

    CargoSpace cs;
    cs.transport();
    cs.store(350);
    cs.secure(true);

    Tail tail;
    tail.stabilize();
    tail.createLift();
    tail.controlSideToSide();

    Fuselage fuselage;
    fuselage.encloseCabin();
    fuselage.supportWingsAndTail();
    fuselage.maintainInternalPressure();

    Airplane boeing;
    boeing.fly();
    boeing.transportPassengers(30);
    boeing.dispatchToAirTraffic();

    std::cout << "Fuselage capacity: " << fuselage.capacity << std::endl;
    std::cout << "Storage capacity: " << cs.capacity << std::endl;
      
    std::cout << "good to go!" << std::endl;
    return 0;
}
