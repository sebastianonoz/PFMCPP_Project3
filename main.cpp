/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) do this for each class in this project: 
    initialize some of your member variables either in-class or in the Constructor member initializer list.
    Show me that you understand how to use these language features.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable that IS NOT initialized in-class
    float b { 2.f }; //a member variable that IS initialized in-class
    UDT() : a(0) { } // 'constructor-initializer-list' initializing the member that wasn't initialized in-class.
    void printAandB()  //the member function
    {
        std::cout << "UDT::printAandB() a:" << a << " b: " << b << std::endl;  //2) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printAandB(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()


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
