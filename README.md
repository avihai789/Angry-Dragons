Angry Dragons 

Program Description: 
This program is a game called Angry Dragons, which is based on the game Angry Birds but includes a Game of Thrones twist. The goal of the game is to
kill all of the guards that you encounter in each level, in order to take over a city. In order to win, you have to conquer all of the cities on the map. when you 
start each level, you begin with a certain amount of dragons at your disposal. In order to kill the guards, you have to launch the dragons at them using the 
slingshot on the left of the screen. Once you kill all the guards, you will conquer that city and be allowed to move on to the next level. 

Files:
b2GlDraw.cpp - Holds b2GlDraw class, constructors, operators, member functions and variables
Board.cpp - Holds Board class, constructors, operators, member functions and variables
Dragons.cpp - Holds Dragons class, constructors, operators, member functions and variables
Drogon.cpp - Holds Drogon class, constructors, operators, member functions and variables
GameController.cpp - Holds GameController class, constructors, operators, member functions and variables
GameObject.cpp - Holds GameObject class, constructors, operators, member functions and variables
Graphics.cpp - Holds Graphics class, constructors, operators, member functions and variables
Guards.cpp - Holds Guards class, constructors, operators, member functions and variables
Ice.cpp - Holds Ice class, constructors, operators, member functions and variables
LevelManager.cpp - Holds LevelManager class, constructors, operators, member functions and variables
Menu.cpp - Holds Menu class, constructors, operators, member functions and variables
MyContactListener.cpp - Holds MyContactListener class, constructors, operators, member functions and variables 
NonMoveable.cpp - Holds NonMoveable class, constructors, operators, member functions and variables
Rhaegal.cpp - Holds Rhaegal class, constructors, operators, member functions and variables
Rock.cpp - Holds Rock class, constructors, operators, member functions and variables
Viserion.cpp - Holds Viserion class, constructors, operators, member functions and variables
Wall.cpp -  Holds Wall class, constructors, operators, member functions and variables
Wood.cpp - Holds Wood class, constructors, operators, member functions and variables
main.cpp - Main
b2GlDraw.h - Holds b2GlDraw function prototypes
Board.h - Holds Board function prototypes
Dragons.h - Holds Dragons function prototypes
Drogon.h - Holds Drogon function prototypes
GameController.h - Holds GameController function prototypes
GameObject.h - Holds GameObject function prototypes
Graphics.h - Holds Graphics function prototypes
Guards.h - Holds Guards function prototypes
Ice.h - Holds Ice function prototypes
LevelManager.h - Holds LevelManager function prototypes 
Menu.h - Holds Menu function prototypes
MyContactListener.h - Holds MyContactListener function prototypes 
NonMoveable.h - Holds NonMoveable function prototypes
Rhaegal.h - Holds Rhaegal function prototypes
Rock.h - Holds Rock function prototypes
Viserion.h - Holds Viserion function prototypes
Wall.h - Holds Wall function prototypes
Wood.h - Holds Wood function prototypes


Data Structures:
GameController - A vector of unique pointers of Dragons
Board - a vector of unique pointers of NonMoveable
We also have a linked list of all the bodies in world (Box2D)


Comments:
works best on 1920x1080 resolution

Libraries Used: 
SFML
Box2D
