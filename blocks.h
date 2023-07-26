//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /* icon command         update-interval update-signal */
    {"",    "torrs",        5,              0},
    {"",    "light",        0,              4},
    {"",    "vol",          0,              1},
    {"",    "disk",         5,              0},
    {"",    "mem",          5,              0},
    {"",    "inet",         5,              0},
    {"",    "tyme",         5,              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
