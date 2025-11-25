#include <ncursesw/ncurses.h>
using namespace std;
int main()
{
    initscr(); // Start ncurses mode
    cbreak();  // Disable line buffering
    noecho();  // Don't echo user input
    start_color();
    keypad(stdscr, TRUE); // Enable function keys and arrow keys
    curs_set(0);          // Hide the cursor
    int black = 1;
    int white = 2;
    int red = 3;
    int green = 4;
    int blue = 5;
    init_pair(1, COLOR_BLACK, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_WHITE);
    init_pair(3, COLOR_RED, COLOR_RED);
    init_pair(4, COLOR_GREEN, COLOR_GREEN);
    init_pair(5, COLOR_BLUE, COLOR_BLUE);
\
    

    int Screen[5][5] = {{red, green, blue, black, white}, {red, green, blue, black, white}, {red, green, blue, black, white}, {red, green, blue, black, white}, {red, green, blue, black, white}};
    for (int y = 0; y < 5; ++y)
    {
        for (int x = 0; x < 5; ++x)
        {
            attron(COLOR_PAIR(Screen[y][x]));
            addstr("  ");
            attroff(COLOR_PAIR(Screen[y][x]));
        }
        addstr("\n");
    }
    printw("Allows custom colors?\n");
    printw("My terminal supports %d colors.\n", COLORS);

    
    getch();
}