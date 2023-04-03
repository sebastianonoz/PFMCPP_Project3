/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to EACH of your types. 
 
 2) inside these new member functions, use while() and for() loops to do something interesting 
         a) example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
    Your code should produce a lot of console output now.

 5) Remember to use pre-increment/decrement in your loops. 
 You can learn why post-increment/decrement is not ideal here:
 https://en.cppreference.com/w/cpp/language/operator_incdec 
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //1), 2c) 
    {
        Bar bar(startingVal);                //2a)
        while( bar.num < threshold )         //2a) 
        { 
            ++bar.num;                    //2a), 5)
            std::cout << "  increasing bar.num: " << bar.num << std::endl; //4)
            if( bar.num >= threshold )       //2b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //3) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //4) 
    return 0;
}
}

//call Example::main() in main()




// UDT 1

struct Cellphone
{
    int numCameraLens = 2;
    std::string manufacaturer = "Apple";
    std::string phoneNumber;
    int ram = 16;
    float screenSize = 6.2f;
    int storageAmount;
    int screenBrightness;

    Cellphone();

    void makePhoneCall(int countryCode);
    void savePhotosAndVideos(int fileSize); 
    void connectToInternet(bool connectedToWifi);
    void changeScreenBrightness(int targetValue);
};

Cellphone::Cellphone() :
phoneNumber("13927393820"),
storageAmount(64),
screenBrightness(45)
{
    std::cout << "Cellphone being constructed!" << std::endl;
}

void Cellphone::makePhoneCall(int countryCode)
{
    if(countryCode == 1)
    {
        std::cout << "Making a phone call from this telephone number:\n"<< phoneNumber << std::endl;
    }
    else if (countryCode == 53)
    {
        std::cout << "Sorry, unable to make the call from this telephone number:\n"<< phoneNumber  << std::endl;
    }
}

void Cellphone::savePhotosAndVideos(int fileSize)
{
    storageAmount -= fileSize;
    std::cout << "File saved! Storage capacity:\n" << storageAmount  << std::endl;
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

void Cellphone::changeScreenBrightness(int targetValue)
{
    while (screenBrightness < targetValue) 
    {
        ++screenBrightness;
        std::cout << "Increasing screen size to: " << screenBrightness << std::endl;
    }
}


// UDT 2
struct MovieTheater
{
    int numTheaters;
    double costSmallPopcorn = 8.9;
    float costOneTicket = 19.9f;
    int numMoviesAvailable = 2;
    int ticketsAvailable;
    int seatsInTheater;
    double cashInRegister = 3000.39;

    MovieTheater();

    void sellOutMovie(int seatsSold); 
    bool useProjector(bool projectorIsWorking);
    bool chargeCashForFoodAndSnacks(bool payingWithCash);
    void printTickets(int howMany);
};

MovieTheater::MovieTheater() :
numTheaters(2),
ticketsAvailable(60),
seatsInTheater(60)
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
    numTheaters -= 1; FIXME
    std::cout << "There is/are " << numTheaters << " theater(s) available." << std::endl;
    return false;
}

bool MovieTheater::chargeCashForFoodAndSnacks(bool payingWithCash)
{
    return ! payingWithCash;
}

void MovieTheater::printTickets(int howMany)
{
    for (int i = 0; i < howMany; ++i)
    {
        --ticketsAvailable;
        std::cout << "Printing ticket #" << i + 1 << ". Tickets avaialble: " << ticketsAvailable << std::endl;
        
    }
}

// UDT 3
struct Dog 
{
    int energyLevel;
    int numLegs = 4;
    std::string name;
    int age = 4;
    int numEyes = 2;  
    
    
    std::string breed = "Golden Retriever";
    

    Dog();

    void bark(bool isLoud);
    void wagTail(int howFast);
    void sitDown(bool wantsToSit);
    void jump(int howHigh);
};

Dog::Dog() :
energyLevel(100),
name("Sam")
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
        energyLevel -= energyLevel;
        std::cout << "Sleepy... my energy level ... is ... " << energyLevel << std::endl;
    }
}

void Dog::jump( int howHigh ) 
{
    int energyCost = howHigh;
    for(int i = 0; i < howHigh; ++i)
    {
        energyLevel -= energyCost;
        std::cout << name << " is at " << i << " meter(s), and its energy level is now " << energyLevel << std::endl;
    }
}

//UDT 4
struct Guitar
{
    int numStrings = 6;
    int numFrets = 22;
    int volumeLevel = 40;
    std::string brand = "Gibson";
    std::string material = "Spruce Wood";
    bool inTune;

    struct Strings
    {
        float lowEStringGauge = .040f; 
        float dStringGauge = .010f;
        std::string brand = "Ernie Ball";
        std::string sku = "2229";
        std::string material ="Nickel";
        int currentPitchST;

        Strings();
        
        void bend(std::string whichString, bool bendUp);
        void slide(std::string currentNote, std::string targetNote);
        bool snap();
    };

    Guitar();

    bool playNote(std::string whichNote);
    void tune(float CurrentCent);
    bool makePercussiveNoise();
    void increaseVolume(int targetVolume);
    
};

Guitar::Guitar() :
inTune(false)
{
    std::cout << "Guitar being constructed!" << std::endl;
}

Guitar::Strings::Strings() :
currentPitchST(2)
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
        currentCent = 0;
        std::cout << "Current tuning is: " << currentCent << std::endl;
    }  
}
bool Guitar::makePercussiveNoise()
{
    std::cout << "tap tap tap" << std::endl;
    return true;
}

void Guitar::increaseVolume(int targetVolume)
{
    while (volumeLevel < targetVolume)
    {
        ++volumeLevel;
        std::cout << "Increasing volume to " << volumeLevel << std::endl; 
        if (volumeLevel == targetVolume)
        {
            std::cout << "At desired volume" << std::endl;
        }    
    }
}

// UDT 5
struct Wings
{
    std::string shape = "Airfoil";
    int length = 130;
    int ratioLengthToWidth = 55;
    float tiltAngle; float flapAngle; float stablePosition;

    Wings();

    void generateLift(bool isFullSpeed);
    void stabilize();
    void adjustToTurbulance(int dragLevel);
    void shiftMechanics(int howMuch);
}; 

Wings::Wings() :
tiltAngle{80.f},
flapAngle{50.f}
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
       std::cout << "Stabilized position at: "<< stablePosition << std::endl;
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

void Wings::shiftMechanics(int howMuch)
{
    for (int i = 0; i < howMuch; ++i)
    {
        tiltAngle += 1; FIXME
        flapAngle += 1; FIXME
        stablePosition -= 1; FIXME
        std::cout << "Tilt angle: " << tiltAngle << ", Flap angle: " << flapAngle << ", Stable position: " << stablePosition << std::endl;
    }
    
}


// UDT 6
struct Engines 
{
    int numEngines = 2;
    float powerOutput;
    float fuelEfficiency = 10.f;
    float emissions = 20.f;
    int size = 20;
    int engineSpeed = 0;

    struct Turbines
    {
        int lowPressureLenth = 84; 
        int highPressureWidth = 93;
        int fuelReleased = 0;
        std::string brand = "GE";
        std::string model = "CF3942";
        std::string material ="Titanium";
        int currentSpeed;
        int thrustLevel;
        float currentPressure;

        Turbines();

        void increaseThrustLevel(int targetLevel);
        void increaseSpeed(int targetSpeed);
        void increasePressure(int targetPressure);
        void releaseFuel(int amount);
    };

    Engines();

    bool engageThrust(Turbines thrust,bool turbinesEngaged);
    void increasePower(float amountOfIncrease);
    void controlSpeed();
};

Engines::Engines() :
powerOutput{.30f}
{
    std::cout << "Engines being constructed!" << std::endl;
}

Engines::Turbines::Turbines() :
currentSpeed(0),
thrustLevel(0),
currentPressure{.00f}

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

void Engines::Turbines::releaseFuel(int amount)
{
    while (fuelReleased < amount)
    {
        fuelReleased += 2;
        std::cout << "Releasing fuel... " << fuelReleased << " liters released so far." << std::endl;
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
    int capacity;
    float loadingTime = 45;

    CargoSpace();

    void transport();
    void store(int amountOfCargo);
    void secure(bool isDoorEnclosed);
    void loadCargo(int amount);
};

CargoSpace::CargoSpace() :
capacity(650)
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
        capacity -= amountOfCargo;
        std::cout << capacity << " spaces left in cargo" << std::endl;
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

void CargoSpace::loadCargo(int cargoSize)
{
    for (int i = 0; i < cargoSize; ++i)
    {
        --capacity;
        std::cout << "Loading box #" << i+1 << " Capacity: " << capacity << std::endl;
    }
}


// UDT 8
struct Tail
{
    int length; int width; int elevatorAngle; int stabilizerAngle; int yawControlWidth;

    Tail();

    void stabilize();
    void createLift();
    void controlSideToSide();
    void moveFlaps(int amount);
};

Tail::Tail() :
    length(5),
    width(2),
    elevatorAngle(45),
    stabilizerAngle(45),
    yawControlWidth(20)
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

void Tail::moveFlaps(int amount)
{
    int flapArea = length * width;
    for (int i = 0; i < amount; ++i)
    {
        flapArea *= 2;
        std::cout << "Moving flaps to " << flapArea << std::endl;
    }
    
}

// UDT 9
struct Fuselage
{
    int length; int width; int capacity;
    float height = 19.f;
    float drag = 32.2f;

    Fuselage();

    void encloseCabin();
    void supportWingsAndTail();
    void maintainInternalPressure();
    void receivePassengers(int passengerCount);
};

Fuselage::Fuselage() :
length(40),
width(60),
capacity(10)
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
        std::cout << "Maintaining internal pressure at a capacity of: "<< capacity << std::endl;
    }
    else
    {
        std::cout << "Cannot maintain internal pressure. Increase capacity." << std::endl;
    }
}

void Fuselage::receivePassengers(int passengerCount)
{
    int availableCap = capacity;
    for (int i = 0; i < passengerCount; ++i)
    {
        if (availableCap > 0)
        {
            --availableCap;
            std::cout << "Passenger " << i + 1 << " has boarded. " << availableCap <<" more passengers can fit." << std::endl;
        }
        else
        {
            std::cout << "Fuselage is at full capacity. Cannot board any more passengers." << std::endl;
        }
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
    cell.changeScreenBrightness(50);

    MovieTheater mt;
    mt.sellOutMovie(54);
    mt.useProjector(false);
    mt.chargeCashForFoodAndSnacks(false);
    mt.printTickets(3);

    Dog dog;
    dog.bark(true);
    dog.wagTail(50);
    dog.sitDown(true);
    dog.jump(4);

    Guitar gib;
    Guitar::Strings eball;
    gib.playNote("F");
    gib.tune(.04f);
    gib.makePercussiveNoise();
    gib.increaseVolume(50);
    eball.bend("Low E", false);
    eball.slide("A", "G");
    eball.snap();

    Wings wings;
    wings.generateLift(true);
    wings.stabilize();
    wings.adjustToTurbulance(40);
    wings.shiftMechanics(5);

    Engines engines;
    Engines::Turbines turbines;
    engines.engageThrust(turbines, true);
    engines.increasePower(40);
    engines.controlSpeed();
    turbines.increaseThrustLevel(20);
    turbines.increaseSpeed(20);
    turbines.increasePressure(40);
    turbines.releaseFuel(10);

    CargoSpace cs;
    cs.transport();
    cs.store(350);
    cs.secure(true);
    cs.loadCargo(5);

    Tail tail;
    tail.stabilize();
    tail.createLift();
    tail.controlSideToSide();
    tail.moveFlaps(5);

    Fuselage fuselage;
    fuselage.encloseCabin();
    fuselage.supportWingsAndTail();
    fuselage.maintainInternalPressure();
    fuselage.receivePassengers(10);

    Airplane boeing;
    boeing.fly();
    boeing.transportPassengers(30);
    boeing.dispatchToAirTraffic();

    std::cout << "Fuselage capacity: " << fuselage.capacity << std::endl;
    std::cout << "Storage capacity: " << cs.capacity << std::endl;
      
    std::cout << "good to go!" << std::endl;
    return 0;
}
