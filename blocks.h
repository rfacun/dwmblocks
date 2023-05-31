//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/             /*Update Interval*/     /*Update Signal*/
    {"",        "$STATUSBAR/kb",        0,                      2},
    {"",        "$STATUSBAR/vol",       0,                      1},
    {"",        "$STATUSBAR/disk",      3600,                   0},
    {"",        "$STATUSBAR/mem",       5,                      0},
    {"",        "$STATUSBAR/inet",      5,                      0},
    {"",        "$STATUSBAR/tyme",      1,                      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
