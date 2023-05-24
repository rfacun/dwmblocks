//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/    /*Update Interval*/    /*Update Signal*/
    //{"", "pkgs",      1,      0},
    {"", "vol",         0,      1},
    {"", "disk",        3600,   0},
    {"", "memory",      5,      0},
    {"", "inet",        5,      0},
    {"", "datetime",    1,      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
