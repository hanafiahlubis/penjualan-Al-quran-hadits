#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define handle GetStdHandle(STD_OUTPUT_HANDLE)
#define outputHandle GetStdHandle(STD_OUTPUT_HANDLE)

void tulisan(int color);
void bisul(int text, int background);
void background(int color);
void gotoxy(int x, int y);
void bingkai_dalam(int x, int y, int tbisul, int bbisul, int panjang, int lebar);
void warning();
int kanan_kiri();
int bawah_atas();
void persegi_panjang(int p, int l, int x, int y, int c);
int garis(int a);
void binkai();
void asterik();
void cline(int p, int l, int x, int y, int c);
void login2();

////////////////// warna dan gotoxy/////////////////
void cline(int p, int l, int x, int y, int c)
{
    tulisan(c);
    for (int a = 0; a < l; a++)
    {
        for (int b = 0; b < p; b++)
        {
            gotoxy(x + b, y + a);
            printf("%c", 219);
        }
    }
}
// enum warna
// {
//     BLACK,       // hitam.0
//     DARK_BLUE,   // biru tua.1
//     DARK_GREEN,  // hijau tua.2
//     DARK_CYAN,   // biru terang / aqua.3
//     DARK_RED,    // merah tua.4
//     DARK_PURgotoxyE,// ungu tua.5
//     DARK_YELLOW, // kuning tua 6
//     DARK_WHITE,  // abu muda.7
//     GRAY,        // abu tua.8
//     BLUE,        // biru.9
//     GREEN,       // hijau.10
//     CYAN,        // aqua.11
//     RED,         // merah.12
//     PURE,      // ungu.13
//     YELLOW,      // kuning.14
//     WHITE        // putih.15
// };
void bisul(int text, int background)
{
    SetConsoleTextAttribute(handle, background * 16 + text);
}

#define outputHandle GetStdHandle(STD_OUTPUT_HANDLE)

#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_PURPLE 5
#define DARK_YELLOW 6
#define DARK_WHITE 7
#define GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PURPLE 13
#define YELLOW 14
#define WHITE 15

int text_color = FOREGROUND_INTENSITY;
int background_color = 0;

void daftar()
{
    background(0);
    tulisan(15);
    gotoxy(21, 3);
    printf("********       ********      ******    *********    *********    **********     \n");
    gotoxy(21, 4);
    printf("*********     ***     ***   ********  ***********  ***     ***  ****    ****    \n");
    gotoxy(21, 5);
    printf("**     ***    ***     ***  ***            ***      ***     ***  ***      ***    \n");
    gotoxy(21, 6);
    printf("**      ***   ***     ***  ***            ***      ***     ***  ****    ****    \n");
    gotoxy(21, 7);
    printf("**       ***  ***********  ********       ***      ***********  ************    \n");
    gotoxy(21, 8);
    printf("**      ***   ***********  *******        ***      ***********  ***      ***    \n");
    gotoxy(21, 9);
    printf("**     ***    ***     ***  ***            ***      ***     ***  ***       ***   \n");
    gotoxy(21, 10);
    printf("*********     ***     ***  **             ***      ***     ***  ***        ***  \n");
    gotoxy(21, 11);
    printf("********      **       **  **             ***      ***     ***  ***         *** \n");
}

void gotoxy(int x, int y)
{
    COORD position = {x, y};
    SetConsoleCursorPosition(outputHandle, position);
}

void tulisan(int color)
{
    SetConsoleTextAttribute(outputHandle, color | (background_color << 4));
    text_color = color;
}

void background(int color)
{
    SetConsoleTextAttribute(outputHandle, text_color | (color << 4));
    background_color = color;
}

void login2()
{
    background(0);
    tulisan(14);
    gotoxy(32, 2);
    printf("***        ***********  *********  ***  *****     ***");
    gotoxy(32, 3);
    printf("***        ***********  ***    **  ***  *** **    ***");
    gotoxy(32, 4);
    printf("***        ***     ***  ***        ***  ***  **   ***");
    gotoxy(32, 5);
    printf("***        ***     ***  ***  ****  ***  ***   **  ***");
    gotoxy(32, 6);
    printf("*********  ***********  ***    **  ***  ***    ** ***");
    gotoxy(32, 7);
    printf("*********  ***********  *********  ***  ***     *****");
}

void bingkai_dalam(int x, int y, int tbisul, int bbisul, int panjang, int lebar)
{ // panjang ke bawah, lebar ke samping
    for (int z = 0; z <= panjang; z++)
    {
        for (int v = 0; v <= lebar; v++)
        {
            if (z == 0 || v == 0 || v == 1 || z == panjang || v == lebar - 1 || v == lebar)
            {
                gotoxy(x + v, y + z);
                bisul(tbisul, 0);
                printf("%c", 219);
            }
            else
            {
                gotoxy(x + v, y + z);
                bisul(0, bbisul);
                printf(" ");
            }
        }
    }
}

void warning()
{
    gotoxy(35, 30);
    bisul(15, 0);
    printf("Note !!!");
    gotoxy(35, 31);
    bisul(15, 0);
    printf("Tekan %c / %c untuk memilih Lalu tekan enter!!", 24, 25);
    Sleep(500);
    gotoxy(35, 30);
    bisul(0, 7);
    printf("                     ");
    gotoxy(35, 31);
    bisul(0, 7);
    printf("                                                       ");
}
///////////////// untuk persrgi yang di dalam baigroun nya///////////////
int kanan_kiri()
{
    int a = 1;
    int x = 2;
    int pilihan;
    persegi_panjang(25, 3, x, 24, 11);
    do
    {
        pilihan = getch();
        if (pilihan == 77)
        {
            persegi_panjang(25, 3, x, 24, 5);
            if (a == 4)
            {
                x = 12;
                a = 1;
                persegi_panjang(25, 3, x, 24, 11);
            }
            else
            {
                x += 31;
                persegi_panjang(25, 3, x, 24, 11);
                a++;
            }
        }
        else if (pilihan == 75)
        {
            persegi_panjang(25, 3, x, 24, 5);
            if (a == 1)
            {
                x = 95;
                a = 4;
                persegi_panjang(25, 3, x, 24, 11);
            }
            else
            {
                x -= 31;
                persegi_panjang(25, 3, x, 24, 11);
                a--;
            }
        }
        else if (pilihan == 13)
        {
            persegi_panjang(25, 3, x, 24, 5);
            return a;
        }

    } while (1);
}

int bawah_atas()
{
    int b = 1;
    int pilihan;
    int y = 4;
    persegi_panjang(25, 3, 6, y, 11);
    do
    {
        pilihan = getch();
        if (pilihan == 80)
        {
            persegi_panjang(25, 3, 6, y, 8);
            if (b == 6)
            {
                y = 4;
                b = 1;
                persegi_panjang(25, 3, 6, y, 11);
            }
            else
            {
                y += 7;
                persegi_panjang(25, 3, 6, y, 11);
                b++;
            }
        }
        else if (pilihan == 72)
        {
            persegi_panjang(25, 3, 6, y, 8);
            if (b == 1)
            {
                y = 39;
                b = 6;
                persegi_panjang(25, 3, 6, y, 11);
            }
            else
            {
                y -= 7;
                persegi_panjang(25, 3, 6, y, 11);
                b--;
            }
        }
        else if (pilihan == 13 || pilihan == 27)
        {
            persegi_panjang(25, 3, 6, y, 8);
            if (pilihan == 27)
            {
                b = 100;
            }
            return b;
        }

    } while (1);
}

void persegi_panjang(int p, int l, int x, int y, int c)
{
    tulisan(c);
    for (int a = 0; a <= p + 1; a++)
    {

        gotoxy(x + a, y);
        printf("%c", 219);
        gotoxy(x + a, y + l + 1);
        printf("%c", 219);
    }
    for (int a = 0; a <= l + 1; a++)
    {
        gotoxy(x, y + a);
        printf("%c", 219);
        gotoxy(x + 1, y + a);
        printf("%c", 219);
        gotoxy(x + p + 3, y + a);
        printf("%c", 219);
        gotoxy(x + p + 2, y + a);
        printf("%c", 219);
    }
}

int garis(int a)
{
    for (int x = 0; x < a; x++)
    {
        printf("%c", 219);
    }
    return a;
}

void binkai()
{
    for (int x = 0; x <= 120; x++)
    {
        for (int y = 0; y <= 40; y++)
        {
            if (x == 0 || y == 0 || x == 120 || y == 40)
            {
                tulisan(12);
                gotoxy(0, y);
                printf("%c", 219);
                gotoxy(x, 0);
                printf("%c", 219);
                gotoxy(120, y);
                printf("%c", 219);
                gotoxy(x, 40);
                printf("%c", 219);
            }
            else
            {
                tulisan(8);
                gotoxy(x, y);
                printf("%c", 219);
            }
        }
    }
}

void asterik()
{

    for (int a = 1; a <= 15; a++)
    {
        tulisan(0 + a);
        gotoxy(6, 1);
        printf("*****************************");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(6, 2);
        printf("***            ***   *      *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(6, 3);
        printf("***   *******  ***   *      *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(6, 4);
        printf("***   *     *  ***   *      *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(6, 5);
        printf("***   *******  ***   *      *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(6, 6);
        printf("***            ***   *      *                                             *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(6, 7);
        printf("***      *     ***   *      *                                           *  *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(6, 8);
        printf("***    *   *   ***   ********                                          *   *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(6, 9);
        printf("***  *       * ***          *                                         *    *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(6, 10);
        printf("*****          **************                                       *******");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 11);
        printf("           ********************     /****/******************************");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 12);
        printf("           |      *   |   *    *   /    /          *            *      *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 13);
        printf("           |    /   * |    *    * /    /     ***   *     ===    *      *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 14);
        printf("           |   *     *|     *    *    /      ***   *     ===    *      *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 15);
        printf("           *    *     *      *       /             *            *      *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 16);
        printf("             *   *    *      /      /              *     *  *   *      *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 17);
        printf("               *  *         /      /           *   *    *    *   *     *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 18);
        printf("           *****   *       /      /          *  *  *   *      *   *    *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 19);
        printf("           |        *     /      /         *     * *  *        *   *   *");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(10, 20);
        printf("           |_________*___/______/*********        ****          ********");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(36, 21);
        printf("                                 ************************  *****");
        tulisan(0 + a);
        Sleep(5);
        gotoxy(36, 22);
        printf("                                 *                *     *  *   *");
        Sleep(5);
        gotoxy(36, 23);
        printf("                                 *      ***       *     ****   *");
        Sleep(5);
        gotoxy(36, 24);
        printf("                                 *      ***       *            *");
        Sleep(5);
        gotoxy(36, 25);
        printf("                                 *                *     ****   *");
        Sleep(5);
        gotoxy(36, 26);
        printf("                                 *       *        *     *  *   *");
        Sleep(5);
        gotoxy(36, 27);
        printf("                                 *      *   *     *     *  *   *");
        Sleep(5);
        gotoxy(36, 28);
        printf("                                 *******      ***********  *****");
        Sleep(5);
    }
}
