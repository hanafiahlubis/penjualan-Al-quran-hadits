#include "daftar-akun.c"
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

void menu_awal();
void transaksi();
int valAng(char a[]);
void mushab();
void panggil();
void bil();
void bil2();
void hadis();
void tambah_data();
void tambah_x();
void tambah_xx();
void tambah_harga();
void tambah_harga2();
void menu1();
void welkom();
void tampilan_menu();
void tampilan_menu2();
void upstok();
void upstok2();
void tanya();
void terimakasih2();
void tanya2();
void HAN();
void user_mem2();
void pass_mem2();
void mem2();
void info();
void berapa_banyak();
void berapa_banyak2();
void pembayaran();
void exita();
void login1();
// ####################################//////////////
int harga[6] = {1500, 1250, 11000, 95000, 87000, 65000};
int harga2[6] = {10000, 15000, 20000, 90000, 70000, 64200};
int stok[6] = {100, 59, 70, 60, 50, 50};
int stok2[6] = {90, 50, 70, 80, 60, 70};
char banyak3[100];
char mushaf[1000][100] = {"Al-Qur'an MAfAZA", "Al-Qur'an AT-THAYYIB", "Al-Qur'an Al-HAMID", "Al-Qur'an Al-HUFAZ", "Al-Qur'an Al-AMZAR", "Al-Qur'an ROBBANI"};
char hadist[6][100] = {"SHAHIH BUKKHARI", "ARBAIN AN-NAWAWI", "Bukhari Muslim", "MUKHTAR AL-HADITS", "Takrij Al-Hadith", "Ulumul Hadis"};
char pilih;
char upharga[100];
char upharga2[100];
char akses_pass1[100][100];
char akses_user1[100][100];
char updata3[100];
char updata4[100];
char struk[50][100];
char struk2[50][100];
char bayar[20];
char z[100][50];
int tmp = 0;
int tamp2 = 0;
int tamp = 0;
int banyak;
int banyak2;
int pilihhar;
int jml = 0;
int xx = 0;
int xxx = 0;
int total = 0;
int strukHarga[100];
int strukharga1[100];
int y[50];
////////////////////////////////////////////////////////////////////////////////
//
//
//
//                      void bertanyaan
//                      perbaiki alur nya
//                      jenis kelamin di daftar akun
//                      JGN LUPA CETAK STOK NYA STELAH DI TRANSAKSI KAN
//                      INFORMASI NYA BELUM DI BUAT

void HAN()
{

    gotoxy(38, 3);
    tulisan(14);
    background(8);
    printf("NO");
    gotoxy(51, 3);
    printf("NAMA");
    gotoxy(70, 3);
    printf("HARGA");
    gotoxy(81, 3);
    printf("STOK");
    gotoxy(43, 11);
    printf("KEMBALI");
    gotoxy(38, 11);
    printf("7");
    tulisan(15);
    background(8);
    for (int a = 0; a < 51; a++)
    {
        gotoxy(36 + a, 2);
        printf("%c", 219);
        gotoxy(36 + a, 4);
        printf("%c", 219);
        gotoxy(36 + a, 12);
        printf("%c", 219);
    }
    for (int b = 0; b < 1; b++)
    {
        for (int y = 0; y < 9; y++)
        {
            gotoxy(36, 3 + y);
            printf("%c", 219);
            gotoxy(41, 3 + y);
            printf("%c", 219);
            gotoxy(65, 3 + y);
            printf("%c", 219);
            gotoxy(79, 3 + y);
            printf("%c", 219);
            gotoxy(86, 3 + y);
            printf("%c", 219);
        }
    }
    background(8);
    tulisan(14);
}

void tampilan_menu2()
{
    HAN();
    tulisan(14);
    for (int a = 0; a < 6; a++)
    {
        gotoxy(38, 5 + a);
        printf("%d", a + 1);
        gotoxy(43, 5 + a);
        printf("%s", hadist[a]);
        gotoxy(68, 5 + a);
        printf("Rp %d", harga2[a]);
        gotoxy(81, 5 + a);
        printf("%d", stok2[a]);
    }
}
void menu1()
{
    gotoxy(30, 5);
    background(0);
    tulisan(1);
    printf("   ****      *****     *******   ****      ***  ***    ***  ", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(30, 6);
    tulisan(1);
    printf("  ***  **   **  ***   **        *** **     ***  ***    ***  ", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(30, 7);
    tulisan(1);
    printf("  ***   ** **   ***  *********  ***  **    ***  ***    ***  ", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(30, 8);
    tulisan(1);
    printf("  ***    **     ***  *********  ***   **   ***  ***    ***  ", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(30, 9);
    tulisan(1);
    printf("  ***           ***  ***        ***    **  ***  ***    ***  ", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(30, 10);
    tulisan(1);
    printf("  ***           ***   **        ***     ** ***  ***    ***  ", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(30, 11);
    tulisan(1);
    printf("  ***           ***    *******  ***      ****    ********   ", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
}

/////////////////////////////// kotak buat si pasworrd dan user namenya///////////////////////
void menu_awal()
{
    // pangling_depan();
    binkai();
    persegi_panjang(21, 3, 21, 18, 3);
    gotoxy(24, 20);
    printf("1. t r a k s a s i");
    persegi_panjang(22, 3, 73, 18, 3);
    gotoxy(50, 20);
    printf("2. i n f o  T o k o"); //////////////masih ragu yang ini//////////////
    persegi_panjang(21, 3, 47, 18, 3);
    gotoxy(81, 20);
    printf("3. Exit");
    persegi_panjang(21, 3, 47, 25, 3);
    gotoxy(50, 27);
    printf("silah kan pilih : ");
    do
    {
        fflush(stdin);
        gotoxy(68, 27);
        pilih = getche();
        if (pilih == '1')
        {
            transaksi();
        }
        else if (pilih == '2')
        {
            // info_toko();
        }
        else if (pilih == '3')
        {
            // exit();
        }
        else
        {
            gotoxy(68, 27);
            printf(" ");
            gotoxy(44, 32);
            printf("pilihan anda salah,coba lagi !!!");
            Sleep(4000);
            gotoxy(44, 32);
            printf("                                ");
        }
    } while (!(pilih == '1' || pilih == '2' || pilih == '3'));
}
// ////////////////////////////menu depannya////////////////////////

/////////////////////////// menu ke 2 informasi tentang toko///////////////
// void exit(){

void exita()
{
    binkai();
    gotoxy(36, 20);
    printf("Terima kasih telah menggunakan aplikasi ini !!!");
    Sleep(1500);
    gotoxy(36, 20);
    background(8);
    printf("                                                ");
    for (int a = 5; a >= 0; a--)
    {
        gotoxy(60, 20);
        tulisan(0);
        printf("%d", a);
        Sleep(1000);
    }
    exit(0);
}

/////////////////////////// untuk exitttttt  ///////////////////////////////

void transaksi()
{
    binkai();
    menu1();
    bingkai_dalam(25, 18, 15, 12, 4, 28);
    tulisan(14);
    background(12);
    gotoxy(28, 20);
    printf("1. B E L I  M U S H A B");
    bingkai_dalam(67, 18, 15, 12, 4, 28);
    tulisan(14);
    background(12);
    gotoxy(70, 20);
    printf("2. B E L I  H A D I T S");
    // gotoxy(2, 5);// chek stok masuk nya ke admin nya okehhh aliiii////
    // printf("3. chek stok\n");
    bingkai_dalam(25, 25, 15, 12, 4, 28);
    gotoxy(31, 27);
    background(12);
    tulisan(14);
    printf("3. K E M B A L I");
    bingkai_dalam(67, 25, 15, 12, 4, 28);
    gotoxy(76, 27);
    background(12);
    tulisan(14);
    printf("4. e x i t");
    bingkai_dalam(41, 32, 15, 12, 4, 37);
    gotoxy(44, 34);
    background(12);
    tulisan(14);
    printf("P I L I H  T R A N S A K S I : ");
    do
    {
        fflush(stdin);
        gotoxy(75, 34);
        pilih = getche();
        fflush(stdin);
        if (pilih == '1')
        {
            mushab();
        }
        else if (pilih == '2')
        {
            hadis();
        }
        else if (pilih == '3')
        {
            cetak1();
        }
        else if (pilih == '4')
        {
            exita();
        }
        else
        {

            for (int a = 0; a < 2; a++)
            {
                gotoxy(41, 38);
                bisul(0, 12);
                printf("Maaf pilihan anda salah coba lagi  !!!");
                Sleep(500);
                gotoxy(41, 38);
                background(8);
                printf("                                      ");
                Sleep(500);
            }
            gotoxy(75, 34);
            background(12);
            tulisan(15);
            printf(" ");
        }
    } while (!(pilih == '1' || pilih == '2' || pilih == '3' || pilih == '4'));
}

/////////////////////////yang belum siappp di bawah///////////////////////
void user_mem2()
{
    binkai();
    login1();
    gotoxy(48, 38);
    background(12);
    tulisan(0);
    printf("TEKAN ESC UNTUK KEMBALI");
    background(0);
    tulisan(14);
    gotoxy(43, 19);
    printf("USERNAME");
    gotoxy(43, 23);
    printf("PASSWORD");
    for (int a = 0; a < 45; a++)
    {
        for (int b = 0; b < 8; b++)
        {
            if (a == 0 || a == 44 || b == 0 || b == 8)
            {
                tulisan(12);
                gotoxy(54, b + 17);
                printf("%c", 219);
                gotoxy(a + 41, b + 17);
                printf("%c", 219);
                gotoxy(41 + a, 21);
                printf("%c", 219);
                gotoxy(a + 41, 25);
                printf("%c", 219);
            }
        }
    }
    int a = 0, x = 0;
    gotoxy(57, 19);
    user[a] = getch();
    while (user[a] != 13)
    {
        if (user[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(57 + a, 19);
            printf(" ");
        }
        else if (user[a] == 27)
        {
            cetak1();
        }
        else
        {
            printf("%c", user[a]);
            a++;
        }
        if (a > 18)
        {
            a = 18;
            gotoxy(75, 19);
            printf(" ");
        }
        gotoxy(57 + a, 19);
        user[a] = getch();
    }
    user[a] = 00;
    for (int i = 0; i < strlen(user); i++)
    {
        if (user[i] == ' ')
        {
            x++;
        }
    }
    if (x == 0 && strlen(user) != 0)
    {
        pass_mem2();
    }
    else if (x == strlen(user))
    {
        gotoxy(45, 28);
        background(9);
        tulisan(12);
        printf("Inputan tidak boleh kosong");
        Sleep(1000);
        gotoxy(45, 28);
        background(8);
        printf("                           ");
        gotoxy(57, 19);
        background(8);
        printf("                      ");
        user_mem2();
    }
    else if (x != 0)
    {
        gotoxy(47, 28);
        background(9);
        tulisan(12);
        printf("Tidak boleh ada spasi");
        Sleep(1000);
        gotoxy(47, 28);
        background(8);
        printf("                                  ");
        gotoxy(57, 19);
        background(8);
        printf("                             ");
        user_mem2();
    }
}
void pass_mem2()
{
    int a = 0, x = 0;
    gotoxy(57, 23);
    pass[a] = getch();
    while (pass[a] != 13)
    {
        if (pass[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(57 + a, 23);
            printf(" ");
        }
        else if (pass[a] == 27)
        {

            user_mem2();
        }
        else
        {
            printf("*");
            a++;
        }
        if (a > 18)
        {
            a = 18;
            gotoxy(75, 23);
            printf(" ");
        }
        gotoxy(57 + a, 23);
        pass[a] = getch();
    }
    pass[a] = 00;
    for (int i = 0; i < strlen(pass); i++)
    {
        if (pass[i] == ' ')
        {
            x++;
        }
    }
    if (x == 0 && strlen(pass) != 0)
    {
        mem2();
    }
    else if (x == strlen(pass))
    {
        gotoxy(45, 28);
        background(9);
        tulisan(12);
        printf("Inputan tidak boleh kosong");
        Sleep(1000);
        gotoxy(45, 28);
        background(8);
        printf("                           ");
        gotoxy(57, 23);
        background(8);
        printf("                                ");
        logpass();
    }
    else if (x != 0)
    {
        gotoxy(47, 28);
        background(9);
        tulisan(12);
        printf("Tidak boleh ada spasi");
        Sleep(1000);
        gotoxy(47, 28);
        background(8);
        printf("                         ");
        gotoxy(57, 23);
        background(8);
        printf("                             ");
        logpass();
    }
}

void mem2()
{
    char username[32], password[32];
    bool ditemukan = false;
    FILE *file = fopen("../file-txt/akun.csv", "r");
    while (fscanf(file, "%[^,],%[^\n]\n", username, password) != EOF)
    {
        if (strcmp(user, username) == 0)
        {
            ditemukan = true;
            break;
        }
    }
    fclose(file);
    if (ditemukan)
    {
        if (strcmp(pass, password) == 0) // untuk di banding kan
        {
            int b;
            for (int a = 1, b = 1; a <= 100; a++)
            {
                gotoxy(53, 30);
                background(8);
                tulisan(0);
                printf("Loading   %d ", a);
                Sleep(25);
                gotoxy(66, 30);
                background(8);
                tulisan(0);
                printf(" %c ", 37);
                if (a % 2 == 0)
                {
                    gotoxy(b + 32, 32);
                    tulisan(14);
                    printf("%c", 219);
                    Sleep(40);
                    b++;
                }
            }
            gotoxy(53, 30);
            printf("LOGIN BERHASIL ");
            Sleep(100);
        }
        else
        {
            gotoxy(45, 28);
            printf("PASSWORD INVALID. COBA LAGI!");
            Sleep(2300);
            gotoxy(45, 28);
            background(8);
            printf("                            ");
            gotoxy(57, 19);
            background(8);
            printf("                   ");
            gotoxy(57, 23);
            background(8);
            printf("                   ");
            user_mem2();
        }
    }
    else
    {
        gotoxy(45, 28);
        printf("AKUN TIDAK DITEMUKAN. COBA LAGI!");
        Sleep(2300);
        gotoxy(45, 28);
        background(8);
        printf("                                 ");
        gotoxy(57, 19);
        background(8);
        printf("                     ");
        gotoxy(57, 23);
        background(8);
        printf("                      ");
        user_mem2();
    }
}

void tanya()
{
    binkai();
    gotoxy(29, 20);
    tulisan(15);
    printf("APAKAH ANDA INGIN MEMBELI LAGI (Y/T)??    (T : UNTUK CETAK BIL)!!!");
    fflush(stdin);
    gotoxy(68, 20);
    pilih = getche();
    if (pilih == 'Y' || pilih == 'y')
    {
        cline(119, 39, 1, 1, 3);
        bingkai_dalam(47, 16, 12, 8, 4, 13);
        bingkai_dalam(66, 16, 12, 8, 4, 13);
        bingkai_dalam(56, 23, 12, 8, 4, 13);
        gotoxy(50, 18);
        printf("1.MUSHAF");
        gotoxy(69, 18);
        printf("2.HADIST");
        gotoxy(59, 25);
        printf("PILIH : ");
        do
        {
            fflush(stdin);
            gotoxy(66, 25);
            pilih = getche();
            if (pilih == '1')
            {
                mushab();
            }
            else if (pilih == '2')
            {
                hadis();
            }
            else
            {
                gotoxy(47, 32);
                printf("MAAF INPUTAN ANDA TIDAK ADA !!!!");
                Sleep(1000);
                gotoxy(47, 32);
                background(3);
                printf("                                 ");
                Sleep(500);
                gotoxy(66, 25);
                background(3);
                printf(" ");
            }
        } while (!(pilih == '1' || pilih == '2'));
    }
    else if (pilih == 't' || pilih == 'T')
    {
        tanya2();
    }
    else
    {
        gotoxy(68, 20);
        printf(" ");
        gotoxy(46, 23);
        printf("pilihan anda salah coba lagi !!!!");
        tanya();
    }
}
void tampilan_menu()
{
    HAN();
    background(8);
    tulisan(14);
    for (int a = 0; a < 6; a++)
    {
        gotoxy(38, 5 + a);
        printf("%d", a + 1);
        gotoxy(43, 5 + a);
        printf("%s", mushaf[a]);
        gotoxy(68, 5 + a);
        printf("Rp %d", harga[a]);
        gotoxy(81, 5 + a);
        printf("%d", stok[a]);
    }
}
void mushab()
{
    binkai();
    tampilan_menu();
    bingkai_dalam(16, 23, 15, 12, 4, 28);
    bingkai_dalam(76, 23, 15, 12, 4, 28);
    background(12);
    tulisan(15);
    gotoxy(19, 25);
    printf("Pilih MUSHAB : ");
    do
    {
        background(12);
        tulisan(14);
        fflush(stdin);
        gotoxy(34, 25);
        pilih = getche();
        if (pilih == '1')
        {
            jml = 1;
            berapa_banyak();
        }
        else if (pilih == '2')
        {
            jml = 2;
            berapa_banyak();
        }
        else if (pilih == '3')
        {
            jml = 3;
            berapa_banyak();
        }
        else if (pilih == '4')
        {
            jml = 4;
            berapa_banyak();
        }
        else if (pilih == '5')
        {
            jml = 5;
            berapa_banyak();
        }
        else if (pilih == '6')
        {
            jml = 6;
            berapa_banyak();
        }
        else if (pilih == '7')
        {
            transaksi();
        }
        else
        {
            gotoxy(17, 28);
            printf("maaf tidak tersedia menu !!!");
            Sleep(1000);
            gotoxy(17, 28);
            background(8);
            printf("                            ");
            gotoxy(34, 25);
            background(12);
            printf(" ");
        }
    } while (!(pilih == '1' || pilih == '2' || pilih == '3' || pilih == '4' || pilih == '5' || pilih == '6' || pilih == '7'));
}
void berapa_banyak()
{
    int a = 0, x = 0;
    bingkai_dalam(76, 23, 15, 12, 4, 28);
    gotoxy(79, 25);
    background(0);
    tulisan(14);
    printf("Masukkan Jumlah : ");
    gotoxy(48, 38);
    background(12);
    tulisan(0);
    printf("TEKAN ESC UNTUK KEMBALI");
    gotoxy(97, 25);
    banyak3[a] = getch();
    while (banyak3[a] != 13)
    {
        if (banyak3[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(97 + a, 25);
            printf(" ");
        }
        else if (banyak3[a] == 27)
        {
            mushab();
        }
        else if (banyak3[a] >= '0' && banyak3[a] <= '9')
        {
            printf("%c", banyak3[a]);
            a++;
        }
        if (a > 3)
        {
            a = 3;
            gotoxy(100, 25);
            printf(" ");
        }
        gotoxy(97 + a, 25);
        banyak3[a] = getch();
    }
    banyak3[a] = '\0';
    if (valAng(banyak3) == 0 && strlen(banyak3) < 6 && strlen(banyak3) != 0 && banyak3[0] != '0')
    {
        if (jml == 1)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak();
            }
            else if (atoi(banyak3) > stok[0])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                tulisan(14);
                printf("                                      ");
                mushab();
            }
            else
            {
                y[tmp] = harga[0];
                strcpy(z[tmp], banyak3);
                stok[0] -= atoi(banyak3);
                strcpy(struk[tmp], mushaf[0]);
                strukHarga[tmp] += harga[0] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 2)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak();
            }
            else if (atoi(banyak3) > stok[1])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan pilih yang lain!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                          ");
                mushab();
            }
            else
            {
                y[tmp] = harga[1];
                strcpy(z[tmp], banyak3);
                stok[1] -= atoi(banyak3);
                strcpy(struk[tmp], mushaf[1]);
                strukHarga[tmp] += harga[1] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 3)
        {

            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak();
            }
            else if (atoi(banyak3) > stok[2])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                mushab();
            }
            else
            {
                y[tmp] = harga[2];
                strcpy(z[tmp], banyak3);
                stok[2] -= atoi(banyak3);
                strcpy(struk[tmp], mushaf[2]);
                strukHarga[tmp] += harga[2] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 4)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak();
            }
            else if (atoi(banyak3) > stok[3])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                mushab();
            }
            else
            {
                y[tmp] = harga[3];
                strcpy(z[tmp], banyak3);
                stok[3] -= atoi(banyak3);
                strcpy(struk[tmp], mushaf[3]);
                strukHarga[tmp] += harga[3] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 5)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak();
            }
            else if (atoi(banyak3) > stok[4])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                mushab();
            }
            else
            {
                y[tmp] = harga[4];
                strcpy(z[tmp], banyak3);
                stok[4] -= atoi(banyak3);
                strcpy(struk[tmp], mushaf[4]);
                strukHarga[tmp] += harga[4] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 6)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak();
            }
            else if (atoi(banyak3) > stok[5])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                mushab();
            }
            else
            {
                y[tmp] = harga[5];
                strcpy(z[tmp], banyak3);
                stok[5] -= atoi(banyak3);
                strcpy(struk[tmp], mushaf[5]);
                strukHarga[tmp] += harga[5] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
    }
    else
    {
        gotoxy(54, 33);
        printf("Inputan tidak valid!!");
        Sleep(1000);
        gotoxy(54, 33);
        background(8);
        printf("                     ");
        berapa_banyak();
    }
}
void berapa_banyak2()
{
    int a = 0;
    bingkai_dalam(76, 23, 15, 12, 4, 28);
    gotoxy(79, 25);
    background(0);
    tulisan(14);
    printf("Masukkan Jumlah : ");
    gotoxy(48, 38);
    background(12);
    tulisan(0);
    printf("TEKAN ESC UNTUK KEMBALI");
    gotoxy(97, 25);
    banyak3[a] = getch();
    while (banyak3[a] != 13)
    {
        if (banyak3[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(97 + a, 25);
            printf(" ");
        }
        else if (banyak3[a] == 27)
        {

            gotoxy(48, 38);
            background(8);
            tulisan(0);
            printf("                        ");
            hadis();
        }
        else if (banyak3[a] >= '0' && banyak3[a] <= '9')
        {
            printf("%c", banyak3[a]);
            a++;
        }
        if (a > 3)
        {
            a = 3;
            gotoxy(100, 25);
            printf(" ");
        }
        gotoxy(97 + a, 25);
        banyak3[a] = getch();
    }
    banyak3[a] = '\0';
    if (valAng(banyak3) == 0 && strlen(banyak3) < 6 && strlen(banyak3) != 0 && banyak3[0] != '0')
    {
        if (jml == 1)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak2();
            }
            else if (atoi(banyak3) > stok2[0])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                hadis();
            }
            else
            {

                y[tmp] = harga2[0];
                strcpy(z[tmp], banyak3);
                stok2[0] -= atoi(banyak3);
                strcpy(struk[tmp], hadist[0]);
                strukHarga[tmp] += harga2[0] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 2)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak2();
            }
            else if (atoi(banyak3) > stok2[1])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                hadis();
            }
            else
            {

                y[tmp] = harga2[1];
                strcpy(z[tmp], banyak3);
                stok2[1] -= atoi(banyak3);
                strcpy(struk[tmp], hadist[1]);
                strukHarga[tmp] += harga2[1] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 3)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak2();
            }
            else if (atoi(banyak3) > stok2[2])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                hadis();
            }
            else
            {

                y[tmp] = harga2[2];
                strcpy(z[tmp], banyak3);
                stok2[2] -= atoi(banyak3);
                strcpy(struk[tmp], hadist[2]);
                strukHarga[tmp] += harga2[2] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 4)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak2();
            }
            else if (atoi(banyak3) > stok2[3])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                hadis();
            }
            else
            {

                y[tmp] = harga2[3];
                strcpy(z[tmp], banyak3);
                stok2[3] -= atoi(banyak3);
                strcpy(struk[tmp], hadist[3]);
                strukHarga[tmp] += harga2[3] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 5)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak2();
            }
            else if (atoi(banyak3) > stok2[4])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                hadis();
            }
            else
            {

                y[tmp] = harga2[4];
                strcpy(z[tmp], banyak3);
                stok2[4] -= atoi(banyak3);
                strcpy(struk[tmp], hadist[4]);
                strukHarga[tmp] += harga2[4] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
        else if (jml == 6)
        {
            if (atoi(banyak3) < 1)
            {
                gotoxy(54, 33);
                printf("Input jumlah dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                berapa_banyak2();
            }
            else if (atoi(banyak3) > stok2[5])
            {
                gotoxy(54, 33);
                printf("Stok tidak cukup.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                                      ");
                hadis();
            }
            else
            {

                y[tmp] = harga2[5];
                strcpy(z[tmp], banyak3);
                stok2[5] -= atoi(banyak3);
                strcpy(struk[tmp], hadist[5]);
                strukHarga[tmp] += harga2[5] * atoi(banyak3);
                tmp++;
                tanya();
            }
        }
    }
    else
    {
        gotoxy(54, 33);
        printf("Inputan tidak valid!!");
        Sleep(1000);
        gotoxy(54, 33);
        background(8);
        printf("                     ");
        berapa_banyak();
    }
}
void hadis()
{
    binkai();
    tampilan_menu2();
    fflush(stdin);
    gotoxy(2, 20);
    bingkai_dalam(16, 23, 15, 12, 4, 28);
    gotoxy(19, 25);
    background(12);
    tulisan(15);
    printf("Pilih HADIS : ");
    do
    {
        fflush(stdin);
        gotoxy(33, 25);
        pilih = getche();
        if (pilih == '1')
        {
            jml = 1;
            berapa_banyak2();
        }
        else if (pilih == '2')
        {
            jml = 2;
            berapa_banyak2();
        }
        else if (pilih == '3')
        {
            jml = 3;
            berapa_banyak2();
        }
        else if (pilih == '4')
        {
            jml = 4;
            berapa_banyak2();
        }
        else if (pilih == '5')
        {
            jml = 5;
            berapa_banyak2();
        }
        else if (pilih == '6')
        {
            jml = 6;
            berapa_banyak2();
        }
        else if (pilih == '7')
        {
            bil();
        }
        else
        {
            gotoxy(17, 28);
            printf("maaf tidak tersedia menu !!!");
            Sleep(1000);
            gotoxy(17, 28);
            background(8);
            printf("                            ");
            gotoxy(33, 25);
            background(12);
            printf(" ");
        }
    } while (!(pilih == '1' || pilih == '2' || pilih == '3' || pilih == '4' || pilih == '5' || pilih == '6' || pilih == '7'));
}
void tanya2()
{
    binkai();
    gotoxy(37, 20);
    tulisan(14);
    printf("APAKAH ANDA MEMILIKI KARTU MEMBER (Y/T)??? ");
    do
    {
        fflush(stdin);
        gotoxy(80, 20);
        background(12);
        tulisan(14);
        pilih = getche();
        if (pilih == 'Y' || pilih == 'y')
        {
            user_mem2();
            bil2();
        }
        else if (pilih == 'T' || pilih == 't')
        {
            bil();
        }
        else
        {
            gotoxy(48, 22);
            printf("Inputan tidak ada !!!");
            Sleep(1000);
            gotoxy(48, 22);
            background(8);
            printf("                     ");
            gotoxy(80, 20);
            background(12);
            printf(" ");
        }
    } while (!(pilih == 'Y' || pilih == 'y' || pilih == 'T' || pilih == 't'));
}
FILE *pem;
void bil2()
{
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    char hari[][7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jum'at", "Sabtu"};
    char bulan[][10] = {"Januari", "Febuari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    binkai();
    cline(50, 35, 35, 3, 15);
    gotoxy(35, 5);
    tulisan(12);

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 6);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 7);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 35);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 33);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 34);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(38, 9);
    tulisan(15);
    printf("! S T R U K  T O K O  A L I  S Y A R I A H !");
    gotoxy(36, 10);
    background(15);
    printf("################################################");
    gotoxy(36, 11);
    tulisan(12);
    printf("waktu");
    gotoxy(36, 12);
    pem = fopen("../file-txt/pembukuwaan.txt", "a");
    printf("%02d:%02d\n", waktu.tm_hour, waktu.tm_min);
    gotoxy(62, 11);
    tulisan(12);
    printf("%s, %d %s %d", hari[waktu.tm_wday], waktu.tm_mday, bulan[waktu.tm_mon], 1900 + waktu.tm_year);
    fprintf(pem, "\n%02d:%02d\t", waktu.tm_hour, waktu.tm_min);
    fprintf(pem, "%s, %d %s %d\n", hari[waktu.tm_wday], waktu.tm_mday, bulan[waktu.tm_mon], 1900 + waktu.tm_year);
    fclose(pem);
    tulisan(12);

    for (int x = 0; x < tmp; x++)
    {
        total += strukHarga[x];
        int asuh = strukHarga[x];
        gotoxy(36, x + 13);
        // printf("%d. %s,Rp %d x %s = Rp %d\n", x + 1, struk[x], y[x], z[x], strukHarga[x]);
        printf("%d. %s,Rp %d x %s = Rp %d\n", x + 1, struk[x], y[x], z[x], asuh);
    }
    gotoxy(39, 27);
    total -= 2 * (total / 100);
    printf("POTONGAN       : 2%%");
    gotoxy(39, 28);
    printf("Total          : Rp %d", total);
    Sleep(1500);

    // gotoxy(39, 32);
    // printf("Total2 = %d", total);
    // getch();
    pem = fopen("../file-txt/pembukuwaan.txt", "a");
    for (int x = 0; x < tmp; x++)
    {
        fprintf(pem, "%d. %s,Rp %d x %s = Rp %d\n", x + 1, struk[x], y[x], z[x], strukHarga[x]);
    }
    // fprintf(pem,"POTONGAN HARGA : Rp %d",potongan);

    fprintf(pem, "\nTotal          : Rp %d", total);
    fclose(pem);

    // int www = atoi(banyak3 - banyak3);
    strcpy(banyak3, "");

    pembayaran();
    tmp = 0;
    total = 0;
    cetak1();
}
void bil()
{
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    char hari[][7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jum'at", "Sabtu"};
    char bulan[][10] = {"Januari", "Febuari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    binkai();
    cline(50, 35, 35, 3, 15);
    gotoxy(35, 5);
    tulisan(12);

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 6);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 7);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 35);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 33);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 34);
    tulisan(12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 35);
    tulisan(12);
    printf("**************************************************", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 33);
    tulisan(12);
    printf("**************************************************", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(35, 34);
    tulisan(12);
    printf("**************************************************", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(38, 9);
    tulisan(15);
    printf("! S T R U K  T O K O  A L I  S Y A R I A H !");
    gotoxy(36, 10);
    background(15);
    printf("################################################");
    gotoxy(36, 11);
    tulisan(12);
    printf("waktu");
    gotoxy(36, 12);
    printf("%02d:%02d\n", waktu.tm_hour, waktu.tm_min);
    gotoxy(62, 11);
    tulisan(12);
    printf("%s, %d %s %d", hari[waktu.tm_wday], waktu.tm_mday, bulan[waktu.tm_mon], 1900 + waktu.tm_year);

    for (int x = 0; x < tmp; x++)
    {
        total += strukHarga[x];
        int oo = strukHarga[x];
        gotoxy(36, x + 13);

        tulisan(12);
        // printf("%d. %s,Rp %d x %s = Rp %d\n", x + 1, struk[x], y[x], z[x], strukHarga[x]);
        printf("%d. %s,Rp %d x %s = Rp %d\n", x + 1, struk[x], y[x], z[x], oo);
        strukHarga[x] = 0;
    }
    gotoxy(39, 27);
    printf("Total          : Rp %d", total);
    Sleep(1500);
    pem = fopen("../file-txt/pembukuwaan.txt", "a");
    fprintf(pem, "\n%02d:%02d\t", waktu.tm_hour, waktu.tm_min);
    fprintf(pem, "%s, %d %s %d\n", hari[waktu.tm_wday], waktu.tm_mday, bulan[waktu.tm_mon], 1900 + waktu.tm_year);

    for (int x = 0; x < tmp; x++)
    {
        fprintf(pem, "%d. %s,Rp %d x %s = Rp %d\n", x + 1, struk[x], y[x], z[x], strukHarga[x]);
    }
    fprintf(pem, "\nTotal          : Rp %d", total);
    fclose(pem);
    pembayaran();
    tmp = 0;
    total = 0;
    cetak1();
}
void pembayaran()
{
    int a = 0, b = 0;
    background(15);
    tulisan(12);
    gotoxy(39, 29);
    printf("MASUKAN UANG   : Rp ");
    gotoxy(59, 29);
    bayar[a] = getch();
    while (bayar[a] != 13)
    {
        if (bayar[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(59 + a, 29);
            printf(" ");
        }
        else if (bayar[a] >= '0' && bayar[a] <= '9')
        {
            printf("%c", bayar[a]);
            a++;
        }
        if (a >= 10)
        {
            a = 10;
            gotoxy(69, 29);
            printf(" ");
        }
        gotoxy(59 + a, 29);
        bayar[a] = getch();
    }
    bayar[a] = '\0';

    if (strlen(bayar) == 0)
    {
        gotoxy(50, 30);
        printf("Inputan tidak boleh kosong!");
        Sleep(1000);
        gotoxy(50, 30);
        background(15);
        printf("                           ");
        gotoxy(59, 29);
        background(15);
        printf("            ");
        pembayaran();
    }
    else if (valAng(bayar) == 0 && strlen(bayar) != 0 && bayar[0] != '0')
    {
        b = atoi(bayar);
        if (b > total)
        {
            gotoxy(39, 30);
            printf("Kembalian      : Rp %d", b - total);
            Sleep(1500);
            tmp = 0;
            total = 0;
            b = 0;
            terimakasih2();
        }
        else if (b == total)
        {
            gotoxy(39, 30);
            printf("Uang anda Pas!");
            Sleep(1000);
            gotoxy(39, 30);
            background(15);
            printf("              ");
            Sleep(1000);
            tmp = 0;
            total = 0;
            b = 0;
            terimakasih2();
        }
        else if (b < total)
        {
            gotoxy(39, 30);
            printf("Uang Anda kurang. Input uang kembali!");
            Sleep(1200);
            gotoxy(39, 30);
            background(15);
            printf("                                     ");
            gotoxy(59, 29);
            background(15);
            printf("            ");
            pembayaran();
        }
    }
    else
    {
        gotoxy(50, 15);
        printf("Invalid. Silahkan input ulang!");
        Sleep(1200);
        gotoxy(50, 15);
        printf("                              ");
        gotoxy(59, 29);
        printf("            ");
        pembayaran();
    }
}
void terimakasih2()
{
    binkai();
    gotoxy(40, 20);
    printf("Terimakasih telah belanja di TOKO ALI SYARIAH !!!!");
    Sleep(1000);
    cetak1();
}
/////////////////////////////////////////////////////
/////////////////////////////// untuk menambah harga dan stok nya ////////////////////////////////////////////////////
FILE *BUKA2;
void tambah_data()
{
    binkai();
    bingkai_dalam(5, 13, 0, 15, 4, 27);
    bingkai_dalam(47, 5, 0, 15, 4, 27);
    bingkai_dalam(47, 13, 0, 15, 4, 27);
    bingkai_dalam(88, 13, 0, 15, 4, 27);
    bingkai_dalam(47, 21, 0, 15, 4, 27);
    bingkai_dalam(47, 29, 0, 15, 4, 27);
    background(0);
    tulisan(14);
    gotoxy(50, 7);
    printf("1. GANTI HARGA MUSHAB");
    gotoxy(8, 15); // 50,15
    printf("2. GANTI HARGA HADITS");
    gotoxy(50, 15); // 91
    printf("3. TAMBAH STOK MUSHAB");
    gotoxy(91, 15); // 50,23
    printf("4. TAMBAH STOK HADITS");
    gotoxy(53, 23);
    printf("5. DAFTAR BARANG");
    gotoxy(54, 31);
    printf("P I L I H : ");
    background(0);
    gotoxy(47, 39);
    background(8);
    tulisan(14);
    printf("TEKAN x untuk kembali !!!");
    do
    {
        fflush(stdin);
        gotoxy(66, 31);
        background(0);
        tulisan(14);
        pilih = getche();
        Sleep(1000);
        fflush(stdin);
        if (pilih == '1')
        {
            tambah_harga();
        }
        else if (pilih == '2')
        {
            tambah_harga2();
        }
        else if (pilih == '3')
        {
            upstok();
        }
        else if (pilih == '4')
        {
            upstok2();
        }
        else if (pilih == '5')
        {
            panggil();
        }
        else if (pilih == 'x')
        {
            cetak1();
        }
        else
        {
            gotoxy(66, 31);
            printf(" ");
            Sleep(200);
            // tambah_data();
        }
    } while (!(pilih == '1' || pilih == '2' || pilih == '3' || pilih == '4' || pilih == '5'));
}
void panggil()
{
    binkai();
    bingkai_dalam(47, 16, 12, 8, 4, 13);
    bingkai_dalam(66, 16, 12, 8, 4, 13);
    bingkai_dalam(56, 23, 12, 8, 4, 13);
    gotoxy(50, 18);
    printf("1.MUSHAF");
    gotoxy(69, 18);
    printf("2.HADIST");
    gotoxy(59, 25);
    printf("PILIH : ");
    do
    {
        fflush(stdin);
        gotoxy(66, 25);
        pilih = getche();
        if (pilih == '1')
        {
            binkai();
            tampilan_menu();
            gotoxy(44, 38);
            printf("tekan apah saja untuk kembali");
            getch();
            tambah_data();
        }
        else if (pilih == '2')
        {
            binkai();
            tampilan_menu2();
            gotoxy(44, 38);
            printf("tekan apah saja untuk kembali");
            getch();
            tambah_data();
        }
        else
        {
            gotoxy(47, 32);
            printf("MAAF INPUTAN ANDA TIDAK ADA !!!!");
            Sleep(1000);
            gotoxy(47, 32);
            background(3);
            printf("                                 ");
            Sleep(500);
            gotoxy(66, 25);
            background(3);
            printf(" ");
        }
    } while (!(pilih == '1' || pilih == '2'));
}
void tambah_x()
{
    BUKA2 = fopen("../file-txt/upharga.txt", "a");
    bingkai_dalam(42, 28, 0, 15, 4, 32);
    int a = 0;
    background(8);
    gotoxy(45, 30);
    tulisan(14);
    background(0);
    printf("Masukkan  harga : ");
    gotoxy(48, 38);
    background(12);
    tulisan(0);
    printf("TEKAN ESC UNTUK KEMBALI");
    gotoxy(63, 30);
    background(0);
    tulisan(14);
    upharga[a] = getch();
    while (upharga[a] != 13)
    {
        if (upharga[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(63 + a, 30);
            printf(" ");
        }
        else if (upharga[a] == 27)
        {
            gotoxy(48, 38);
            background(8);
            tulisan(8);
            printf("                         ");

            tambah_harga();
        }
        else if (upharga[a] >= '0' && upharga[a] <= '9')
        {

            tulisan(14);
            printf("%c", upharga[a]);
            a++;
        }
        if (a > 8)
        {
            a = 8;
            gotoxy(71, 30);
            printf(" ");
        }
        gotoxy(63 + a, 30);
        upharga[a] = getch();
    }
    upharga[a] = '\0';
    if (valAng(upharga) == 0 && strlen(upharga) < 8 && strlen(upharga) != 0 && upharga[0] != '0')
    {
        if (xx == 1)
        {
            if (atoi(upharga) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_harga();
            }
            else
            {
                harga[0] = atoi(upharga);
                gotoxy(71, 5);
                background(8);
                printf("       ");
                gotoxy(71, 5);
                background(8);
                printf("%d", harga[0]);
                Sleep(1000);
                fprintf(BUKA2, "\n%s = %d", mushaf[0], harga[0]);
                fclose(BUKA2);
                tambah_data();
            }
        }
        else if (xx == 2)
        {
            if (atoi(upharga) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_harga();
            }
            else
            {
                harga[1] = atoi(upharga);
                gotoxy(71, 6);
                background(8);
                printf("       ");
                gotoxy(71, 6);
                background(8);
                printf("%d", harga[1]);
                Sleep(1000);
                fprintf(BUKA2, "\n%s = %d", mushaf[1], harga[1]);
                fclose(BUKA2);
                tambah_data();
            }
        }
        else if (xx == 3)
        {
            if (atoi(upharga) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                getch();
                tambah_harga();
            }
            else
            {
                harga[2] = atoi(upharga);
                gotoxy(71, 7);
                background(8);
                printf("        ");
                gotoxy(71, 7);
                background(8);
                printf("%d", harga[2]);
                Sleep(1000);
                fprintf(BUKA2, "\n%s = %d", mushaf[2], harga[2]);
                fclose(BUKA2);
                tambah_data();
            }
        }
        else if (xx == 4)
        {
            if (atoi(upharga) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_harga();
            }
            else
            {
                harga[3] = atoi(upharga);
                gotoxy(71, 8);
                printf("        ");
                gotoxy(71, 8);
                background(8);
                printf("%d", harga[3]);
                Sleep(1000);
                fprintf(BUKA2, "\n%s = %d", mushaf[3], harga[3]);
                fclose(BUKA2);
                tambah_data();
            }
        }
        else if (xx == 5)
        {
            if (atoi(upharga) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_data();
            }
            else
            {
                harga[4] = atoi(upharga);
                gotoxy(71, 9);
                background(8);
                printf("        ");
                gotoxy(71, 9);
                background(8);
                printf("%d", harga[4]);
                Sleep(1000);
                fprintf(BUKA2, "\n%s = %d", mushaf[4], harga[4]);
                fclose(BUKA2);
                tambah_data();
            }
        }
        else if (xx == 6)
        {
            if (atoi(upharga) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_data();
            }
            else
            {
                harga[5] = atoi(upharga);
                gotoxy(71, 10);
                background(8);
                printf("       ");
                gotoxy(71, 10);
                tulisan(14);
                background(8);
                printf("%d", harga[5]);
                Sleep(1000);
                fprintf(BUKA2, "\n%s = %d", mushaf[5], harga[5]);
                fclose(BUKA2);
                tambah_data();
            }
        }
    }
    else
    {
        gotoxy(45, 34);
        background(0);
        printf("inputan invalit!!!");
        Sleep(1000);
        gotoxy(45, 34);
        background(8);
        printf("                  ");
        background(8);
        tambah_x();
    }
}
void tambah_harga()
{

    binkai();
    tampilan_menu();
    bingkai_dalam(19, 21, 0, 15, 4, 25);
    gotoxy(23, 23);
    tulisan(14);
    background(0);
    printf("PILIH MUSHAB : ");
    do
    {
        gotoxy(38, 23);
        tulisan(14);
        background(0);
        fflush(stdin);
        pilih = getche();
        if (pilih == '1')
        {
            xx = 1;
            tambah_x();
        }
        else if (pilih == '2')
        {
            xx = 2;
            tambah_x();
        }
        else if (pilih == '3')
        {
            xx = 3;
            tambah_x();
        }
        else if (pilih == '4')
        {
            xx = 4;
            tambah_x();
        }
        else if (pilih == '5')
        {
            xx = 5;
            tambah_x();
        }
        else if (pilih == '6')
        {
            xx = 6;
            tambah_x();
        }
        else if (pilih == '7')
        {
            tambah_data();
        }
        else
        {
            gotoxy(23, 27);
            background(0);
            tulisan(9);
            printf("Inputan invalit!!!");
            Sleep(1000);
            gotoxy(23, 27);
            background(0);
            printf("                  ");
            Sleep(200);
            gotoxy(23, 27);
            background(0);
            tulisan(9);
            printf("Inputan invalit!!!");
            Sleep(1000);
            gotoxy(23, 27);
            background(8);
            printf("                  ");
            Sleep(200);
            gotoxy(38, 23);
            background(0);
            printf(" ");
        }
    } while (!(pilih == '1' || pilih == '2' || pilih == '3' || pilih == '4' || pilih == '5' || pilih == '6' || pilih == '7'));
}
void tambah_xx()
{
    BUKA2 = fopen("../file-txt/upharga.txt", "a");
    bingkai_dalam(42, 28, 0, 15, 4, 32);
    int p = 0;
    background(0);
    gotoxy(45, 30);
    tulisan(14);
    printf("Masukan harga : ");
    gotoxy(48, 38);
    background(12);
    tulisan(0);
    printf("TEKAN ESC UNTUK KEMBALI");

    gotoxy(61, 30);
    background(0);
    tulisan(14);
    upharga2[p] = getch();
    while (upharga2[p] != 13)
    {
        if (upharga2[p] == 8)
        {
            p--;
            if (p < 0)
            {
                p = 0;
            }
            gotoxy(61 + p, 30);
            printf(" ");
        }
        else if (upharga2[p] == 27)
        {
            gotoxy(48, 38);
            background(8);
            tulisan(0);
            printf("                        ");

            tambah_data();
        }
        else if (upharga2[p] >= '0' && upharga2[p] <= '9')
        {
            printf("%c", upharga2[p]);
            p++;
        }
        if (p > 8)
        {
            p = 8;
            gotoxy(69, 30);
            printf(" ");
        }
        gotoxy(61 + p, 30);
        upharga2[p] = getch();
    }
    upharga2[p] = '\0';
    if (valAng(upharga2) == 0 && strlen(upharga2) < 8 && strlen(upharga2) != 0 && upharga2[0] != '0')
    {
        if (xxx == 1)
        {
            if (atoi(upharga2) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_data();
            }
            else
            {
                harga2[0] = atoi(upharga2);
                gotoxy(71, 5);
                background(8);
                printf("       ");
                gotoxy(71, 5);
                background(8);
                printf("%d", harga2[0]);
                Sleep(1000);
                fprintf(BUKA2, "\n%s = %d", hadist[0], harga2[0]);
                fclose(BUKA2);
                tambah_data();
            }
        }
        else if (xxx == 2)
        {
            if (atoi(upharga2) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_data();
            }
            else
            {
                harga2[1] = atoi(upharga2);
                gotoxy(71, 6);
                background(8);
                printf("       ");
                gotoxy(71, 6);
                background(8);
                printf("%d", harga2[1]);
                fprintf(BUKA2, "\n%s = %d", hadist[1], harga2[1]);
                fclose(BUKA2);
                tambah_data();
            }
        }
        else if (xxx == 3)
        {
            if (atoi(upharga2) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_data();
            }
            else
            {
                harga2[2] = atoi(upharga2);
                gotoxy(71, 7);
                background(8);
                printf("       ");
                gotoxy(71, 7);
                background(8);
                printf("%d", harga2[2]);
                fprintf(BUKA2, "\n%s = %d", hadist[2], harga2[2]);
                fclose(BUKA2);
                tambah_data();
                // updateLagi();
            }
        }
        else if (xxx == 4)
        {
            if (atoi(upharga2) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_data();
            }
            else
            {
                harga2[3] = atoi(upharga2);
                gotoxy(71, 8);
                background(8);
                printf("       ");
                gotoxy(71, 8);
                background(8);
                printf("%d", harga2[3]);
                fprintf(BUKA2, "\n%s = %d", hadist[3], harga2[3]);
                fclose(BUKA2);
                tambah_data();
            }
        }
        else if (xxx == 5)
        {
            if (atoi(upharga2) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_data();
            }
            else
            {
                harga2[4] = atoi(upharga2);
                gotoxy(71, 9);
                background(8);
                printf("       ");
                gotoxy(71, 9);
                background(0);
                printf("%d", harga2[4]);
                fprintf(BUKA2, "\n%s = %d", hadist[4], harga2[4]);
                fclose(BUKA2);
                tambah_data();
            }
        }
        else if (xxx == 6)
        {
            if (atoi(upharga2) < 1)
            {
                printf("Input harga dengan benar!");
                Sleep(1000);
                printf("                          ");
                tambah_data();
            }
            else
            {
                harga2[5] = atoi(upharga2);
                gotoxy(71, 10);
                background(8);
                printf("       ");
                gotoxy(71, 10);
                background(8);
                printf("%d", harga2[5]);
                fprintf(BUKA2, "\n%s = %d", hadist[5], harga2[5]);
                fclose(BUKA2);
                tambah_data();
            }
        }
    }
    else
    {
        gotoxy(45, 34);
        background(0);
        printf("inputan invalit!!!");
        Sleep(1000);
        gotoxy(45, 34);
        background(8);
        printf("                  ");
        background(0);
        tambah_x();
    }
}
FILE *BUKA;
void tambah_harga2()
{
    binkai();
    tampilan_menu2();
    bingkai_dalam(19, 21, 0, 15, 4, 25);
    gotoxy(23, 23);
    tulisan(14);
    background(0);
    printf("PILIH  HADIS : ");
    do
    {
        gotoxy(38, 23);
        tulisan(14);
        fflush(stdin);
        pilih = getche();
        if (pilih == '1')
        {
            xxx = 1;
            tambah_xx();
        }
        else if (pilih == '2')
        {
            xxx = 2;
            tambah_xx();
        }
        else if (pilih == '3')
        {
            xxx = 3;
            tambah_xx();
        }
        else if (pilih == '4')
        {
            xxx = 4;
            tambah_xx();
        }
        else if (pilih == '5')
        {
            xxx = 5;
            tambah_xx();
        }
        else if (pilih == '6')
        {
            xxx = 6;
            tambah_xx();
        }
        else if (pilih == '7')
        {
            tambah_data();
        }
        else
        {
            gotoxy(23, 27);
            tulisan(9);
            printf("Inputan invalit!!!");
            Sleep(1000);
            gotoxy(23, 27);
            background(0);
            printf("                  ");
            Sleep(200);
            gotoxy(23, 27);
            background(0);
            tulisan(9);
            printf("Inputan invalit!!!");
            Sleep(1000);
            gotoxy(23, 27);
            background(8);
            printf("                  ");
            Sleep(200);
            gotoxy(38, 23);
            background(0);
            printf(" ");
            tulisan(14);
        }
    } while (!(pilih == '1' || pilih == '2' || pilih == '3' || pilih == '4' || pilih == '5' || pilih == '6'));
}
void upstok_x()
{

    BUKA = fopen("../file-txt/updatek.txt", "a");
    int x = 0, y = 0;
    bingkai_dalam(42, 28, 0, 15, 4, 32);
    gotoxy(45, 30);
    background(0);
    tulisan(14);
    printf("Masukkan Jumlah : ");
    int a = 0;
    gotoxy(48, 38);
    background(12);
    tulisan(0);
    printf("TEKAN ESC UNTUK KEMBALI");
    gotoxy(63, 30);
    background(0);
    tulisan(14);
    updata3[a] = getch();
    while (updata3[a] != 13)
    {
        if (updata3[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(63 + a, 30);
            printf(" ");
        }
        else if (updata3[a] == 27)
        {
            gotoxy(48, 38);
            background(8);
            tulisan(8);
            printf("                                 ");

            tambah_harga2();
        }
        else
        {
            printf("%c", updata3[a]);
            a++;
        }
        if (a > 4)
        {
            a = 4;
            gotoxy(67, 30);
            printf(" ");
        }
        gotoxy(63 + a, 30);
        updata3[a] = getch();
    }
    updata3[a] = '\0';
    if (valAng(updata3) == 0 && strlen(updata3) < 5 && strlen(updata3) != 0 && updata3[0] != '0')
    {
        if (xx == 1)
        {
            if (atoi(updata3) < 1)
            {
                gotoxy(54, 33);
                printf("Input data dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                background(0);
                upstok_x();
            }
            else if (atoi(updata3) + stok[0] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                background(8);
                gotoxy(41, 34);
                background(8);
                printf("                                         ");
                background(0);
                upstok_x();
            }
            else
            {
                stok[0] += atoi(updata3);
                gotoxy(80 + x, 5 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 5 + y);
                background(8);
                printf("%d", stok[0]);
                fprintf(BUKA, "\n%s = %d", mushaf[0], stok[0]);
                fclose(BUKA);
                tambah_data();
            }
        }
        else if (xx == 2)
        {
            if (atoi(updata3) < 1)
            {
                gotoxy(41, 34);
                printf("Input data dengan benar!");
                Sleep(1000);
                background(8);
                gotoxy(41, 34);
                printf("                          ");
                background(0);
                fprintf(BUKA, "%d", stok[0]);
                upstok_x();
            }
            else if (atoi(updata3) + stok[1] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                background(8);
                gotoxy(41, 34);
                printf("                                         ");
                background(0);
                fprintf(BUKA, "%d", stok[0]);
                upstok_x();
            }
            else
            {
                stok[1] += atoi(updata3);
                gotoxy(80 + x, 6 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 6 + y);
                background(8);
                printf("%d", stok[1]);
                fprintf(BUKA, "\n%s = %d", mushaf[1], stok[1]);
                fclose(BUKA);
                tambah_data();
            }
        }
        else if (xx == 3)
        {
            if (atoi(updata3) < 1)
            {
                gotoxy(41, 34);
                ;
                printf("MAAF INPUTAN ANDA SALAH !");
                Sleep(1000);
                background(8);
                gotoxy(41, 34);
                printf("                         ");
                background(0);
                upstok_x();
            }
            else if (atoi(updata3) + stok[2] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                background(8);
                gotoxy(41, 34);
                printf("                                         ");
                background(0);
                upstok_x();
            }
            else
            {
                stok[2] += atoi(updata3);
                gotoxy(80 + x, 7 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 7 + y);
                background(8);
                printf("%d", stok[2]);
                fprintf(BUKA, "\n%s = %d", mushaf[2], stok[2]);
                fclose(BUKA);
                tambah_data();
            }
        }
        else if (xx == 4)
        {
            if (atoi(updata3) < 1)
            {
                gotoxy(41, 34);
                printf("Input data dengan benar!");
                Sleep(1000);
                background(8);
                gotoxy(41, 34);
                printf("                          ");
                background(0);
                upstok_x();
            }
            else if (atoi(updata3) + stok[3] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                                         ");
                background(0);
                upstok_x();
            }
            else
            {
                stok[3] += atoi(updata3);
                gotoxy(80 + x, 8 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 8 + y);
                background(8);
                fprintf(BUKA, "\n%s = %d", mushaf[3], stok[3]);
                fclose(BUKA);
                printf("%d", stok[3]);
                tambah_data();
            }
        }
        else if (xx == 5)
        {
            if (atoi(updata3) < 1)
            {
                gotoxy(41, 34);
                printf("Input data dengan benar!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                          ");
                background(0);
                upstok_x();
            }
            else if (atoi(updata3) + stok[4] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                                         ");
                background(0);
                upstok_x();
            }
            else
            {
                stok[4] += atoi(updata3);
                gotoxy(80 + x, 9 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 9 + y);
                background(8);
                fprintf(BUKA, "\n%s = %d", mushaf[4], stok[4]);
                fclose(BUKA);
                printf("%d", stok[4]);
                tambah_data();
            }
        }
        else if (xx == 6)
        {
            if (atoi(updata3) < 1)
            {
                gotoxy(41, 34);
                printf("Input data dengan benar!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                          ");
                background(0);
                upstok_x();
            }
            else if (atoi(updata3) + stok[5] > 300)
            {
                gotoxy(41, 34);
                printf("Stok terlalu banyak. Silahkan input ulang!!!!");
                Sleep(1000);
                background(8);
                gotoxy(41, 34);
                printf("                                              ");
                background(0);
                upstok_x();
            }
            else
            {
                stok[5] += atoi(updata3);
                gotoxy(80 + x, 10 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 10 + y);
                background(8);
                printf("%d", stok[5]);
                fprintf(BUKA, "\n%s = %d", mushaf[5], stok[5]);
                fclose(BUKA);
                tambah_data();
            }
        }
    }
    else
    {
        gotoxy(55, 34);
        printf("INPUTAN SALAH !!!");
        Sleep(250);
        gotoxy(55, 34);
        background(8);
        printf("                 ");
        Sleep(250);
        background(0);
        tulisan(14);
        upstok_x();
    }
}
void upstok()
{
    binkai();
    tampilan_menu();
    bingkai_dalam(19, 21, 0, 15, 4, 25);
    gotoxy(23, 23);
    background(0);
    tulisan(14);
    printf("PILIH : ");
    do
    {
        fflush(stdin);
        gotoxy(31, 23);
        pilih = getche();
        if (pilih == '1')
        {
            xx = 1;
            upstok_x();
        }
        else if (pilih == '2')
        {
            xx = 2;
            upstok_x();
        }
        else if (pilih == '3')
        {
            xx = 3;
            upstok_x();
        }
        else if (pilih == '4')
        {
            xx = 4;
            upstok_x();
        }
        else if (pilih == '5')
        {
            xx = 5;
            upstok_x();
        }
        else if (pilih == '6')
        {
            xx = 6;
            upstok_x();
        }
        else if (pilih == '7')
        {
            tambah_data();
        }
        else
        {
            gotoxy(18, 27);
            printf("MAAF PILIHAN ANDA TIDAK ADA !!!");
            Sleep(500);
            background(8);
            gotoxy(18, 27);
            printf("                               ");
            Sleep(700);
            background(0);
            gotoxy(31, 23);
            background(0);
            printf(" ");
        }
    } while (!(pilih == '1' || pilih == '2' || pilih == '3' || pilih == '4' || pilih == '5' || pilih == '6'));
}
void upstok_xx()
{
    BUKA = fopen("../file-txt/updatek.txt", "a");
    int x = 0, y = 0;
    bingkai_dalam(42, 28, 0, 15, 4, 32);
    gotoxy(45, 30);
    background(0);
    tulisan(14);
    printf("Masukkan Jumlah : ");
    gotoxy(48, 38);
    background(12);
    tulisan(0);
    printf("TEKAN ESC UNTUK KEMBALI");
    int a = 0;
    gotoxy(63, 30);
    background(0);
    tulisan(14);
    updata4[a] = getch();
    while (updata4[a] != 13)
    {
        if (updata4[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(63 + a, 30);
            printf(" ");
        }
        else if (updata4[a] == 27)
        {
            gotoxy(48, 38);
            background(8);
            tulisan(8);
            printf("                            ");

            tambah_data();
        }
        else if (updata4[a] >= '0' && updata4[a] <= '9')
        {
            printf("%c", updata4[a]);
            a++;
        }
        if (a > 4)
        {
            a = 4;
            gotoxy(67, 30);
            printf(" ");
        }
        gotoxy(63 + a, 30);
        updata4[a] = getch();
    }
    updata4[a] = '\0';
    if (valAng(updata4) == 0 && strlen(updata4) < 5 && strlen(updata4) != 0 && updata4[0] != '0')
    {
        if (xxx == 1)
        {
            if (atoi(updata4) < 1)
            {
                gotoxy(54, 33);
                printf("Input data dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                printf("                          ");
                upstok_xx();
            }
            else if (atoi(updata4) + stok2[0] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                                         ");
                background(0);
                upstok_xx();
            }
            else
            {
                stok2[0] += atoi(updata4);
                gotoxy(81 + x, 5 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 5 + y);
                background(8);
                printf("%d", stok2[0]);
                Sleep(1000);
                fprintf(BUKA, "\n%s = %d", hadist[0], stok2[0]);
                fclose(BUKA);
                tambah_data();
            }
        }
        else if (xxx == 2)
        {
            if (atoi(updata4) < 1)
            {
                gotoxy(54, 33);
                printf("Input data dengan benar!");
                Sleep(1000);
                background(8);
                gotoxy(54, 33);
                printf("                          ");
                upstok_xx();
            }
            else if (atoi(updata4) + stok2[1] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                                         ");
                background(0);
                upstok_xx();
            }
            else
            {
                stok2[1] += atoi(updata4);
                gotoxy(81 + x, 6 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 6 + y);
                background(8);
                printf("%d", stok2[1]);
                Sleep(1000);
                fprintf(BUKA, "\n%s = %d", hadist[1], stok2[1]);
                fclose(BUKA);

                tambah_data();
            }
        }
        else if (xxx == 3)
        {
            if (atoi(updata4) < 1)
            {
                gotoxy(54, 33);
                printf("MAAF INPUTAN ANDA SALAH !");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                         ");
                upstok_xx();
            }
            else if (atoi(updata4) + stok2[2] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                                         ");
                background(0);
                upstok_xx();
            }
            else
            {
                stok2[2] += atoi(updata4);
                gotoxy(81 + x, 7 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 7 + y);
                background(8);
                printf("%d", stok2[2]);
                Sleep(1000);
                fprintf(BUKA, "\n%s = %d", hadist[2], stok2[2]);
                fclose(BUKA);
                tambah_data();
            }
        }
        else if (xxx == 4)
        {
            if (atoi(updata4) < 1)
            {
                gotoxy(54, 33);
                printf("Input data dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                upstok_xx();
            }
            else if (atoi(updata4) + stok2[3] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                                         ");
                background(0);
                upstok_xx();
            }
            else
            {
                stok2[3] += atoi(updata4);
                gotoxy(81 + x, 8 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 8 + y);
                background(8);
                printf("%d", stok2[3]);
                Sleep(1000);
                fprintf(BUKA, "\n%s = %d", hadist[3], stok2[3]);
                fclose(BUKA);
                tambah_data();
            }
        }
        else if (xxx == 5)
        {
            if (atoi(updata4) < 1)
            {
                gotoxy(54, 33);
                printf("Input data dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                upstok_xx();
            }
            else if (atoi(updata4) + stok2[4] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                                         ");
                background(0);
                upstok_xx();
            }
            else
            {
                stok2[4] += atoi(updata4);
                gotoxy(81 + x, 9 + y);
                background(8);
                printf("    ");
                gotoxy(81 + x, 9);
                background(8);
                background(0);
                printf("%d", stok2[4]);
                Sleep(1000);
                fprintf(BUKA, "\n%s = %d", hadist[4], stok2[4]);
                fclose(BUKA);
                tambah_data();
            }
        }
        else if (xxx == 6)
        {
            if (atoi(updata4) < 1)
            {
                gotoxy(54, 33);
                printf("Input data dengan benar!");
                Sleep(1000);
                gotoxy(54, 33);
                background(8);
                printf("                          ");
                upstok_xx();
            }
            else if (atoi(updata4) + stok2[5] > 300)
            {
                gotoxy(41, 34);
                printf("Stok melebihi batas.Silahkan input ulang!");
                Sleep(1000);
                gotoxy(41, 34);
                background(8);
                printf("                                         ");
                background(0);
                upstok_xx();
            }
            else
            {
                stok2[5] += atoi(updata4);
                gotoxy(81 + x, 10 + y);
                background(0);
                printf("    ");
                gotoxy(81 + x, 10 + y);
                background(8);
                printf("%d", stok2[5]);
                Sleep(1000);
                fprintf(BUKA, "\n%s = %d", hadist[5], stok2[5]);
                fclose(BUKA);
                tambah_data();
            }
        }
    }
    else
    {
        gotoxy(55, 34);
        printf("INPUTAN SALAH !!!");
        Sleep(250);
        gotoxy(55, 34);
        background(8);
        printf("                 ");
        Sleep(250);
        background(0);
        tulisan(14);
        upstok_x();
    }
}
void upstok2()
{
    binkai();
    tampilan_menu2();
    bingkai_dalam(19, 21, 0, 15, 4, 25);
    gotoxy(23, 23);
    background(0);
    tulisan(14);
    printf("PILIH : ");
    do
    {
        fflush(stdin);
        gotoxy(31, 23);
        tulisan(14);
        pilih = getche();
        if (pilih == '1')
        {
            xxx = 1;
            upstok_xx();
        }
        else if (pilih == '2')
        {
            xxx = 2;
            upstok_xx();
        }
        else if (pilih == '3')
        {
            xxx = 3;
            upstok_xx();
        }
        else if (pilih == '4')
        {
            xxx = 4;
            upstok_xx();
        }
        else if (pilih == '5')
        {
            xxx = 5;
            upstok_xx();
        }
        else if (pilih == '6')
        {
            xxx = 6;
            upstok_xx();
        }
        else if (pilih == '7')
        {
            tambah_data();
        }
        else
        {
            gotoxy(18, 27);
            printf("MAAF PILIHAN ANDA TIDAK ADA !!!");
            Sleep(500);
            background(8);
            gotoxy(18, 27);
            printf("                               ");
            Sleep(700);
            background(0);
            gotoxy(31, 23);
            background(0);
            printf(" ");
        }
    } while (!(pilih == '1' || pilih == '2' || pilih == '3' || pilih == '4' || pilih == '5' || pilih == '6' || pilih == '7'));
}

// buat admin untuk masuk ke satu ////////////////////
/////////////////////////cetak strukknya //////////////////////////

void cetak1()
{
    binkai();
    welkom();
    int x, tempat = 1;
    tulisan(14);
    bingkai_dalam(4, 21, 0, 10, 4, 16);
    gotoxy(7, 23);
    // tulisan(14);
    bisul(14, 0);
    printf("LOGIN ADMIN");
    bingkai_dalam(23, 21, 15, 9, 4, 16);
    gotoxy(26, 23);
    printf("DAFTAR AKUN");
    bingkai_dalam(42, 21, 15, 9, 4, 16);
    gotoxy(46, 23);
    printf("COBA AKUN");
    bingkai_dalam(61, 21, 15, 9, 4, 16);
    gotoxy(65, 23);
    printf("TRANSAKSI");
    bingkai_dalam(80, 21, 15, 9, 4, 16);
    gotoxy(84, 23);
    printf("INFO TOKO");
    bingkai_dalam(100, 21, 15, 9, 4, 16);
    gotoxy(106, 23);
    printf("EXIT");
    while (x != 13) //&&x!=27 //      keluar==27    &&   13= buat enter      //
    {
        gotoxy(110, 31);
        x = getche();
        if (x == 77) //      80 ==    bawah
        {
            gotoxy(110, 31);
            background(8);
            printf(" ");
            background(0);
            if (tempat == 1)
            {
                tempat = 2;
                bingkai_dalam(4, 21, 15, 9, 4, 16);
                gotoxy(7, 23);
                tulisan(14);
                printf("LOGIN ADMIN");
                bingkai_dalam(23, 21, 0, 10, 4, 16);
                gotoxy(26, 23);
                tulisan(14);
                printf("DAFTAR AKUN");
            }
            else if (tempat == 2)
            {
                tempat = 3;
                bingkai_dalam(23, 21, 15, 9, 4, 16);
                gotoxy(26, 23);
                tulisan(14);
                printf("DAFTAR AKUN");
                bingkai_dalam(42, 21, 0, 10, 4, 16);
                gotoxy(46, 23);
                tulisan(14);
                printf("COBA AKUN");
            }
            else if (tempat == 3)
            {
                tempat = 4;
                bingkai_dalam(42, 21, 15, 9, 4, 16);
                gotoxy(46, 23);
                tulisan(14);
                printf("COBA AKUN");
                bingkai_dalam(61, 21, 0, 10, 4, 16);
                gotoxy(65, 23);
                tulisan(14);
                printf("TRANSAKSI");
            }
            else if (tempat == 4)
            {
                tempat = 5;
                bingkai_dalam(61, 21, 15, 9, 4, 16);
                gotoxy(65, 23);
                tulisan(14);
                printf("TRANSAKSI");
                bingkai_dalam(80, 21, 0, 10, 4, 16);
                gotoxy(84, 23);
                tulisan(14);
                printf("INFO TOKO");
            }
            else if (tempat == 5)
            {
                tempat = 6;
                bingkai_dalam(80, 21, 15, 9, 4, 16);
                gotoxy(84, 23);
                tulisan(14);
                printf("INFO TOKO");
                bingkai_dalam(100, 21, 0, 10, 4, 16);
                gotoxy(106, 23);
                tulisan(14);
                printf("EXIT");
            }
            else if (tempat == 6)
            {
                tempat = 1;
                bingkai_dalam(100, 21, 15, 9, 4, 16);
                gotoxy(106, 23);
                tulisan(14);
                printf("EXIT");
                bingkai_dalam(4, 21, 0, 10, 4, 16);
                gotoxy(7, 23);
                tulisan(14);
                printf("LOGIN ADMIN");
            }
        }
        else if (x == 75)
        {
            tulisan(12);
            gotoxy(110, 31);
            background(8);
            printf(" ");
            background(0);
            if (tempat == 1)
            {
                tempat = 6;
                bingkai_dalam(4, 21, 15, 9, 4, 16);
                gotoxy(7, 23);
                tulisan(14);
                printf("LOGIN ADMIN");
                bingkai_dalam(100, 21, 0, 10, 4, 16);
                gotoxy(106, 23);
                tulisan(14);
                printf("EXIT");
            }
            else if (tempat == 2)
            {
                tempat = 1;
                bingkai_dalam(23, 21, 15, 9, 4, 16);
                gotoxy(26, 23);
                tulisan(14);
                printf("DAFTAR AKUN");
                bingkai_dalam(4, 21, 0, 10, 4, 16);
                gotoxy(7, 23);
                tulisan(14);
                printf("LOGIN ADMIN");
            }
            else if (tempat == 3)
            {
                tempat = 2;
                bingkai_dalam(42, 21, 15, 9, 4, 16);
                gotoxy(46, 23);
                tulisan(14);
                printf("COBA AKUN");
                bingkai_dalam(23, 21, 0, 10, 4, 16);
                gotoxy(26, 23);
                tulisan(14);
                printf("DAFTAR AKUN");
            }
            else if (tempat == 4)
            {
                tempat = 3;
                bingkai_dalam(42, 21, 0, 10, 4, 16);
                gotoxy(46, 23);
                tulisan(14);
                printf("COBA AKUN");
                bingkai_dalam(61, 21, 15, 9, 4, 16);
                gotoxy(65, 23);
                tulisan(14);
                printf("TRANSAKSI");
            }
            else if (tempat == 5)
            {
                tempat = 4;
                bingkai_dalam(61, 21, 0, 10, 4, 16);
                gotoxy(65, 23);
                tulisan(14);
                printf("TRANSAKSI");
                bingkai_dalam(80, 21, 15, 9, 4, 16);
                gotoxy(84, 23);
                tulisan(14);
                printf("INFO TOKO");
            }
            else if (tempat == 6)
            {
                tempat = 5;
                bingkai_dalam(80, 21, 0, 10, 4, 16);
                gotoxy(84, 23);
                tulisan(14);
                printf("INFO TOKO");
                bingkai_dalam(100, 21, 15, 9, 4, 16);
                gotoxy(106, 23);
                tulisan(14);
                printf("EXIT");
            }
        }
        else if (x != 13 && x != 27 && x != 80 && x != 72 && x != 224)
        {
            background(8);
            gotoxy(110, 31); // tulisan(12);
            printf(" ");
            background(8);
        }
        else
        {
            gotoxy(110, 31);
            background(8); // tulisan(12);
            printf(" ");
            background(0);
        }
    }
    if (tempat == 1)
    {
        ali();
        tambah_data();
    }
    else if (tempat == 2)
    {
        daftar_();
    }
    else if (tempat == 3)
    {
        user_mem2();
        sudah();
        cetak1();
    }
    else if (tempat == 4)
    {
        transaksi();
    }
    else if (tempat == 5)
    {
        info();
    }
    else if (tempat == 6)
    {
        exita();
    }
}
void info()
{
    binkai();
    cline(54, 25, 33, 3, 2);
    char ali1[1000];
    FILE *Ali;
    Ali = fopen("../file-txt/info.txt", "r");
    int a = 0;
    while (fgets(ali1, 225, Ali))
    {
        gotoxy(35, 5 + a);
        background(2);
        tulisan(0);
        printf("%s", ali1);
        a++;
    }
    fclose(Ali);
    gotoxy(26, 38);
    printf("~~~~~~~~~~~~~~~~~~~ Tekan ESC saja untuk kembali ~~~~~~~~~~~~~~~~~~~");
    char pilih = getch();
    (pilih == 27) ? cetak1() : info();
}
void cetak(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '*')
        {
            printf("%c", 219);
        }
        else
        {
            printf(" ");
        }
    }
}
FILE *data;
void login1()
{
    background(12);
    tulisan(14);
    gotoxy(33, 2);
    cetak("***        ***********  *********  ***  *****     ***");
    gotoxy(33, 3);
    cetak("***        ***********  ***    **  ***  *** **    ***");
    gotoxy(33, 4);
    cetak("***        ***     ***  ***        ***  ***  **   ***");
    gotoxy(33, 5);
    cetak("***        ***     ***  ***  ****  ***  ***   **  ***");
    gotoxy(33, 6);
    cetak("*********  ***********  ***    **  ***  ***    ** ***");
    gotoxy(33, 7);
    cetak("*********  ***********  *********  ***  ***     *****");
    background(0);
    tulisan(14);
}
void welkom()
{
    background(8);
    for (int a = 0; a < 15; a += 2)
    {
        tulisan(a + 0);
        gotoxy(11, 2);
        cetak("***        ***     *******  ***           ***********    **********      ***       ***      ******* \n");
        Sleep(5);
        gotoxy(11, 3);
        cetak("***        ***    ********  ***          ************   ************    *****     *****    *******  \n");
        Sleep(5);
        gotoxy(11, 4);
        cetak("***        ***   ***        ***         ***            **************  ***  **   **  ***  ***       \n");
        Sleep(5);
        gotoxy(11, 5);
        cetak("***        ***   ***        ***         ***            ****      ****  ***   ** **   ***  ***       \n");
        Sleep(5);
        gotoxy(11, 6);
        cetak("***        ***   *********  ***         ***            ****      ****  ***     **    ***  ********* \n");
        Sleep(5);
        gotoxy(11, 7);
        cetak("***   **   ***   *********  ***         ***            ****      ****  ***           ***  ********* \n");
        Sleep(5);
        gotoxy(11, 8);
        cetak("*** **  ** ***   ***        ***         ***            **************  ***           ***  ***       \n");
        Sleep(5);
        gotoxy(11, 9);
        cetak(" ****    ****     ********   *********   ************   ************   ***           ***   *******  \n");
        Sleep(5);
        gotoxy(11, 10);
        cetak("  **      **       *******    ********    ***********    **********    ***           ***    *******\n");
        Sleep(5);
        tulisan(a + 1);
    }
    tulisan(10);
    gotoxy(11, 2);
    cetak("***        ***     *******  ***           ***********    **********      ***       ***      ******* \n");
    Sleep(5);
    gotoxy(11, 3);
    cetak("***        ***    ********  ***          ************   ************    *****     *****    *******  \n");
    Sleep(5);
    gotoxy(11, 4);
    cetak("***        ***   ***        ***         ***            **************  ***  **   **  ***  ***       \n");
    Sleep(5);
    gotoxy(11, 5);
    cetak("***        ***   ***        ***         ***            ****      ****  ***   ** **   ***  ***       \n");
    Sleep(5);
    gotoxy(11, 6);
    cetak("***        ***   *********  ***         ***            ****      ****  ***     **    ***  ********* \n");
    Sleep(5);
    gotoxy(11, 7);
    cetak("***   **   ***   *********  ***         ***            ****      ****  ***           ***  ********* \n");
    Sleep(5);
    gotoxy(11, 8);
    cetak("*** **  ** ***   ***        ***         ***            **************  ***           ***  ***       \n");
    Sleep(5);
    gotoxy(11, 9);
    cetak(" ****    ****     ********   *********   ************   ************   ***           ***   *******  \n");
    Sleep(5);
    gotoxy(11, 10);
    cetak("  **      **       *******    ********    ***********    **********    ***           ***    *******\n");
    Sleep(5);
}
void main()
{
    //    asterik();
    cetak1();
}
