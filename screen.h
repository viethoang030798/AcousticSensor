//include the function prototype for screen manipulation
enum COLOR{BLACK=30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
#define UNICODE
#define BAR "\u2590"  //unicode

//function prototype
void setFGcolor(int fg);
void resetColors(void);
void gotoXY(int row,int col);
void displayBar(double rms, int col);
void clearScreen(void);
