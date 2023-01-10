#include "inysa.c"
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include<stdbool.h>
struct daftar
{
    int tampungan;
    char nama[100];
    char umur[100];
    char alamat1[100];
    char nomor[100];
    char idd[100];
    char sandi[100];
    char kota1[100];
    char tamp[100][100];
};
struct daftar bis;
// untuk tampungan membuka si notpet
FILE *data;
FILE *Ali;
FILE *BAIK;
FILE *buruk;
FILE *SUKA;
// untuk di ingat bahwasanya void dan si panggilan si pointer tidak boleh sama
void logpass();
int id(char a[]);
int valAl(char a[]);
void isiNama();
void login();
void jk1();
int val_umur(char[]);
void isi_id();
char akses_user[100];
void alamat();
// void isiAlamat();
void daftar_();
int val_nom(char a[]);
int valHur(char a[]);
void umur1();
void kota();
void pas();
int valAng(char a[]);
int valnama(char[]);
void seni();
void isinomor();
void ali();
void loguser();
void sudah();
char a[1000];
char tampungan[100];
char user[25];
char pass[25];
char akses_pas[100];
char pilih;
char jk[100][100] = {"LAKI-LAKI", "PEREMPUAN"};
///////////////////////////////////////////admin//////////////////////////////////////////
void seni()
{
    gotoxy(22, 17);
    background(3);
    cline(110, 20, 10, 10, 3);
    gotoxy(50, 22);
    tulisan(0);
    printf("AKUN BERHASIL DI DAFTAR. !!!");
    Sleep(1000);
    gotoxy(50, 22);
    printf("AKUN BERHASIL DI DAFTAR.. !!!");
    Sleep(1000);
    gotoxy(50, 22);
    printf("AKUN BERHASIL DI DAFTAR... !!!");
    Sleep(1000);
    gotoxy(50, 22);
    printf("AKUN BERHASIL DI DAFTAR.... !!!");
    Sleep(1000);
    gotoxy(50, 22);
    printf("                                 ");
    Sleep(1000);
    cetak1();
}
void loguser()
{
    char pilih;
    login2();
    gotoxy(43, 19);
    printf("USER NAME");
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
            background(8);
            printf(" ");
        }
        else if (user[0] == 27)
        {
            cetak1();
        }
        else
        {
            printf("%c", user[a]);
            a++;
        }
        if (a > 8)
        {
            a = 8;
            gotoxy(65, 19);
            background(8);
            printf(" ");
        }
        gotoxy(57 + a, 19);
        background(0);
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
        logpass();
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
        printf("                          ");
        gotoxy(57, 22);
        background(8);
        printf("                  ");
        loguser();
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
        printf("                                 ");
        gotoxy(57, 22);
        background(8);
        printf("                   ");
        loguser();
    }
}
void logpass()
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
            background(8);
            printf(" ");
        }
        else if (pass[0] == 27)
        {
            cetak1();
        }
        else
        {
            printf("*");
            a++;
        }

        if (a > 8)
        {
            a = 8;
            gotoxy(65, 23);
            background(8);
            printf(" ");
        }
        gotoxy(57 + a, 23);
        background(0);
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
        login();
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
        printf("                          ");
        gotoxy(57, 23);
        background(8);
        printf("                   ");
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
        printf("                    ");
        gotoxy(57, 23);
        background(8);
        printf("                   ");
        logpass();
    }
}
void login()
{
    Ali = fopen("adminpas.txt", "r");
    fscanf(Ali, "%s", akses_pas); // untuk menambung yang ada di dalam si notpet
    fclose(Ali);
    data = fopen("adminid.txt", "r"); // untuk membuka file
    fscanf(data, "%s", &akses_user);  // untuk menambung yang ada di dalam si notpet
    fclose(data);                     // untuk menutup file
    if ((strcmp(user, akses_user) == 0) && (strcmp(pass, akses_pas) == 0)) // untuk di banding kan
    {
        int b;
        for (int a = 1, b = 1; a <= 100; a++)
        {
            gotoxy(53, 30);
            printf("Loading   %d %", a);
            Sleep(25);
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
    else if (strcmp(user, akses_user) == 0)
    {
        gotoxy(45, 28);
        printf("PASSWORD INVALID. COBA LAGI!");
        Sleep(2300);
        gotoxy(45, 28);
        background(8);
        tulisan(14);
        printf("                            ");
        gotoxy(57, 19);
        background(8);
        tulisan(14);
        printf("                     ");
        gotoxy(57, 23);
        background(8);
        tulisan(14);
        printf("                        ");
        loguser();
    }
    else if (strcmp(pass, akses_pas) == 0)
    {
        gotoxy(45, 28);
        printf("USERNAME INVALID. COBA LAGI!");
        Sleep(2300);
        gotoxy(45, 28);
        printf("                            ");
        gotoxy(57, 23);
        background(8);
        tulisan(14);
        printf("                          ");
        gotoxy(57, 19);
        background(8);
        tulisan(14);
        printf("                       ");
        loguser();
    }
    else
    {
        gotoxy(40, 28);
        printf("PASSWORD DAN USERNAME INVALID. COBA LAGI!");
        Sleep(2300);
        gotoxy(40, 28);
        background(8);
        tulisan(14);
        printf("                                         ");
        gotoxy(57, 23);
        background(8);
        tulisan(14);
        printf("                     ");
        gotoxy(57, 19);
        background(8);
        tulisan(14);
        printf("                      ");
        loguser();
    }
}
void ali()
{
    binkai();
    loguser();
}
///////////////////////////////////////////////////////////////////////////////////////////
void sudah()
{
    gotoxy(37, 38);
    printf("~~~~~~~~~~~percobaaan akun berhasil~~~~~~~~~~~");
    Sleep(1300);
}
/////////////////////////////////// buat daftar akun //////////////////////////////////////
void daftar_()
{
    binkai();
    cline(95, 15, 16, 13, 0);
    daftar();
    gotoxy(22, 17);
    tulisan(14);
    printf("NAMA     : "); // validasi nama
    gotoxy(22, 18);
    printf("UMUR     : "); // validasi alamat
    gotoxy(22, 19);
    printf("JK       : ");
    gotoxy(22, 20);
    printf("ALAMAT   : ");
    gotoxy(60, 20);
    printf("KOTA : ");
    gotoxy(22, 21);
    printf("NOMOR HP : "); // validasi nomor
    gotoxy(22, 22);
    printf("USER     : "); // akun
    gotoxy(22, 23);
    printf("PASSWORD : "); // pasword
    gotoxy(48, 38);
    background(12);
    tulisan(0);
    printf("TEKAN ESC UNTUK KEMBALI");
    isiNama();
}
FILE *bio;
void isiNama()
{
    int a = 0, x = 0;
    gotoxy(33, 17);
    tulisan(14);
    printf("Huruf A-Z");
    Sleep(1500);
    gotoxy(33, 17);
    background(0);
    tulisan(14);
    printf("         ");
    Sleep(250);
    gotoxy(33, 17);
    bis.nama[a] = getch();
    while (bis.nama[a] != 13)
    {
        if (bis.nama[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(33 + a, 17);
            printf(" ");
        }
        else if (bis.nama[a] == 27)
        {
            cetak1();
        }
        else if (bis.nama[0] != '\'') // if (  bis.nama[a] >= 'A' && bis.nama[a] <= 'Z' || bis.nama[a] == 39 || bis.nama[a] == 45 || bis.nama[a] == ' ' && bis.nama[a + 1] != ' '||)
        {
            printf("%c", bis.nama[a]);
            a++;
        }
        if (a > 31)
        {
            a = 31;
            gotoxy(64, 17);
            printf(" ");
        }
        gotoxy(33 + a, 17);
        bis.nama[a] = getch();
    }
    bis.nama[a] = '\0';
    for (int i = 0; i < strlen(bis.nama); i++)
    {
        if (bis.nama[i] == ' ')
        {
            x++;
        }
    }
    if (valnama(bis.nama) == 0 && strlen(bis.nama) <= 31 && strlen(bis.nama) != 0)
    {
        bio = fopen("BIO.txt", "a");
        fprintf(bio, "\nNAMA MEM : %s\n", bis.nama);
        fclose(bio);
        umur1();
    }
    else if (strlen(bis.nama) > 30)
    {
        gotoxy(33, 17);
        printf("                                   ");
        Sleep(500);
        gotoxy(33, 17);
        printf("Maksimal 30 digit!!");
        Sleep(1000);
        gotoxy(33, 17);
        printf("                      ");
        isiNama();
    }
    else if (x == strlen(bis.nama))
    {
        gotoxy(33, 17);
        printf("                                 ");
        gotoxy(33, 17);
        printf("Inputan tidak boleh kosong!");
        Sleep(1000);
        gotoxy(33, 17);
        printf("                           ");
        isiNama();
    }
    else
    {
        gotoxy(33, 17);
        printf("                              ");
        gotoxy(33, 17);
        printf("Inputan tidak valid");
        Sleep(1000);
        gotoxy(33, 17);
        printf("                       ");
        isiNama();
    }
}

void umur1()
{
    gotoxy(33, 18);
    printf("17 - 58 TAHUN !!!!");
    Sleep(2000);
    gotoxy(33, 18);
    printf("                    ");
    int ulang = 0;
    do
    {
        ulang = 0;
        int a = 0, x = 0;
        gotoxy(33, 18);
        bis.umur[a] = getch();
        while (bis.umur[a] != 13)
        {
            if (bis.umur[a] == 8)
            {
                a--;
                if (a < 0)
                {
                    a = 0;
                }
                gotoxy(33 + a, 18);
                printf(" ");
            }
            else if (bis.umur[a] == 27)
            {
                cetak1();
            }
            else if (bis.umur[a] >= '0' && bis.umur[a] <= '9')
            {
                printf("%c", bis.umur[a]);
                a++;
            }
            if (a > 3)
            {
                a = 3;
                gotoxy(36, 18);
                printf(" ");
            }
            gotoxy(33 + a, 18);
            bis.umur[a] = getch();
        }
        bis.umur[a] = '\0';
        if ((val_umur(bis.umur) == 0 && strlen(bis.umur) <= 2 && strlen(bis.umur) != 0))
        {

            bis.tampungan = atoi(bis.umur);
            if (bis.tampungan > 58)
            {
                gotoxy(33, 18);
                printf("   ");
                gotoxy(33, 18);
                printf("MAX 58 TAHUN");
                Sleep(500);
                gotoxy(33, 18);
                printf("            ");
                ulang = 1;
            }
            else if (bis.tampungan < 17)
            {
                gotoxy(33, 18);
                printf("   ");
                gotoxy(33, 18);
                printf("MIN 17 TAHUN");
                Sleep(500);
                gotoxy(33, 18);
                printf("            ");
                ulang = 1;
            }
            else
            {
                bio = fopen("BIO.txt", "a");
                fprintf(bio, "\nUMUR : %d\n", bis.tampungan);
                fclose(bio);
                ulang = 0;
                jk1();
            }
        }
        else
        {
            gotoxy(33, 18);
            printf("   ");
            gotoxy(33, 18);
            printf("INPUTAN INVALIT");
            Sleep(500);
            gotoxy(33, 18);
            printf("                ");
            ulang = 1;
        }
    } while (ulang == 1);
}

void jk1()
{
    fflush(stdin);
    gotoxy(33, 19);
    tulisan(14);
    printf("P/L");
    Sleep(2000);
    gotoxy(33, 19);
    printf("    ");
    gotoxy(33, 19);
    pilih = getche();
    if (pilih == 'L' || pilih == 'l')
    {
        strcpy(tampungan, jk[0]);
        gotoxy(33, 19);
        printf("%s", tampungan);
        bio = fopen("BIO.txt", "a");
        fprintf(bio, "\njenis kelamin : %s\n", tampungan);
        fclose(bio);
        alamat();
    }
    else if (pilih == 'P' || pilih == 'p')
    {
        strcpy(tampungan, jk[1]);
        gotoxy(33, 19);
        printf("%s", tampungan);
        fprintf(bio, "\n%s\n", tampungan);
        fclose(bio);
        alamat();
    }
    else if (pilih == 27)
    {
        cetak1();
    }
    else
    {
        gotoxy(33, 19);
        printf("INPUTAN ANDA SALAH,COBA LAGI!!!");
        Sleep(1000);
        gotoxy(33, 19);
        printf("                               ");
        jk1();
    }
}

void alamat()
{
    int a = 0, x = 0;
    gotoxy(33, 20);
    bis.alamat1[a] = getch();
    while (bis.alamat1[a] != 13)
    {
        if (bis.alamat1[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(33 + a, 20);
            printf(" ");
        }
        else if (bis.alamat1[a] == 27)
        {
            cetak1();
        }
        else
        {
            printf("%c", bis.alamat1[a]);
            a++;
        }
        // else //if (bis.alamat1[a] >= 'a' && bis.alamat1[a] <= 'z' || bis.alamat1[a] >= 'A' && bis.alamat1[a] <= 'Z' || bis.alamat1[a] == 39 || bis.alamat1[a] == 45 || bis.alamat1[a] == ' ' && bis.alamat1[a + 1] != ' ') {    printf("%c", bis.alamat1[a]);   a++; }
        if (a > 21)
        {
            a = 21;
            gotoxy(54, 20);
            printf(" ");
        }
        gotoxy(33 + a, 20);
        bis.alamat1[a] = getch();
    }
    bis.alamat1[a] = '\0';
    for (int i = 0; i < strlen(bis.alamat1); i++)
    {
        if (bis.alamat1[i] == ' ')
        {
            x++;
        }
    }
    if (valAl(bis.alamat1) == 0 && strlen(bis.alamat1) <= 20 && strlen(bis.alamat1) != 0)
    {
        bio = fopen("BIO.txt", "a");
        fprintf(bio, "\nalamat : %s\n", bis.alamat1);
        fclose(bio);
        kota();
    }
    else if (strlen(bis.alamat1) > 20)
    {
        gotoxy(33, 20);
        printf("                       ");
        gotoxy(33, 20);
        printf("Maksimal 19 digit!!!");
        Sleep(1000);
        gotoxy(33, 20);
        printf("                      ");
        alamat();
    }
    else if (x == strlen(bis.alamat1))
    {
        gotoxy(33, 20);
        printf("                         ");
        gotoxy(33, 20);
        printf("Inputan tidak boleh kosong!");
        Sleep(1000);
        gotoxy(33, 20);
        printf("                           ");
        alamat();
    }
    else
    {
        gotoxy(33, 20);
        printf("                       ");
        gotoxy(33, 20);
        printf("Inputan tidak valid");
        Sleep(1000);
        gotoxy(33, 20);
        printf("                       ");
        alamat();
    }
}

void kota()
{
    int a = 0, x = 0;
    gotoxy(67, 20);
    printf("HURUF A-Z");
    gotoxy(67, 20);
    printf("          ");
    gotoxy(67, 20);
    bis.kota1[a] = getch();
    while (bis.kota1[a] != 13)
    {
        if (bis.kota1[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(67 + a, 20);
            printf(" ");
        }
        else if (bis.kota1[0] == 27)
        {
            cetak1();
        }
        else if (bis.kota1[a] >= 'A' && bis.kota1[a] <= 'Z' || bis.kota1[a] >= 'A' && bis.kota1[a] <= 'Z' || bis.kota1[a] == 39 || bis.kota1[a] == 45 || bis.kota1[a] == ' ' && bis.kota1[a + 1] != ' ')
        {
            printf("%c", bis.kota1[a]);
            a++;
        }
        if (a > 25)
        {
            a = 25;
            gotoxy(92, 20);
            printf(" ");
        }
        gotoxy(67 + a, 20);
        bis.kota1[a] = getch();
    }
    bis.kota1[a] = '\0';
    for (int i = 0; i < strlen(bis.kota1); i++)
    {
        if (bis.kota1[i] == ' ')
        {
            x++;
        }
    }
    if (valHur(bis.kota1) == 0 && strlen(bis.kota1) <= 22 && strlen(bis.kota1) != 0)
    {

        bio = fopen("BIO.txt", "a");
        fprintf(bio, "\nkota      : %s\n", bis.kota1);
        fclose(bio);
        isinomor();
    }
    else if (strlen(bis.kota1) > 22)
    {
        gotoxy(67, 20);
        printf("                                   ");
        gotoxy(67, 20);
        printf("Maksimal 22 digit!!");
        Sleep(1000);
        gotoxy(67, 20);
        printf("                      ");
        kota();
    }
    else if (x == strlen(bis.kota1))
    {

        gotoxy(67, 20);
        printf("                                 ");
        gotoxy(67, 20);
        printf("Inputan tidak boleh kosong!");
        Sleep(1000);
        gotoxy(67, 20);
        printf("                           ");
        kota();
    }
    else
    {
        gotoxy(67, 20);
        printf("                              ");
        gotoxy(67, 20);
        printf("Inputan tidak valid");
        Sleep(1000);
        gotoxy(67, 20);
        printf("                       ");
        kota();
    }
}

void isinomor()
{
    int a = 0, x = 0;
    gotoxy(33, 21);
    bis.nomor[a] = getch();
    while (bis.nomor[a] != 13)
    {
        if (bis.nomor[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(33 + a, 21);
            printf(" ");
        }
        else if (bis.nomor[a] == 27)
        {
            cetak1();
        }
        else if (bis.nomor[a] >= '0' && bis.nomor[a] <= '9')
        {
            printf("%c", bis.nomor[a]);
            a++;
        }
        if (a > 14)
        {
            a = 14;
            gotoxy(47, 21);
            printf(" ");
        }
        gotoxy(33 + a, 21);
        bis.nomor[a] = getch();
    }
    bis.nomor[a] = '\0';
    for (int i = 0; i < strlen(bis.nomor); i++)
    {
        if (bis.nomor[i] == ' ')
        {
            x++;
        }
    }
    if (val_nom(bis.nomor) == 0 && strlen(bis.nomor) >= 11 && strlen(bis.nomor) <= 13 && strlen(bis.nomor) != 0)
    {

        bio = fopen("BIO.txt", "a");
        fprintf(bio, "\nNOMOR : %s\n", bis.nomor);
        fclose(bio);
        isi_id();
    }
    else if (x == strlen(bis.nomor))
    {
        gotoxy(33, 21);
        printf("                                   ");
        gotoxy(33, 21);
        printf("Inputan tidak boleh kosong!");
        Sleep(1000);
        gotoxy(33, 21);
        printf("                           ");
        isinomor();
    }
    else if (val_nom(bis.nomor) != 0)
    {
        // textbisul(4);
        gotoxy(33, 21);
        printf("                                   ");
        gotoxy(33, 21);
        printf("Inputan tidak valid!!");
        Sleep(1000);
        gotoxy(33, 21);
        printf("                     ");
        isinomor();
    }
    else if (!(strlen(bis.nomor) <= 13 && strlen(bis.nomor) >= 11))
    {
        gotoxy(33, 21);
        printf("                                   ");
        gotoxy(33, 21);
        printf("Input 11-13 digit!!");
        Sleep(1000);
        gotoxy(33, 21);
        printf("                    ");
        isinomor();
    }
}

void isi_id()
{
    BAIK = fopen("akun.csv", "r");
    int p = 0;
    while (fscanf(BAIK, "%s", &bis.tamp[p]) != EOF)
    {
        p++;
    }
    fclose(BAIK);
    int a = 0, x = 0;
    gotoxy(33, 22);
    bis.idd[a] = getch();
    while (bis.idd[a] != 13)
    {
        if (bis.idd[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(33 + a, 22);
            printf(" ");
        }
        else if (bis.idd[0] == 27)
        {
            cetak1();
        }
        else
        {
            printf("%c", bis.idd[a]);
            a++;
        }
        if (a > 18)
        {
            a = 18;
            gotoxy(51, 22);
            printf(" ");
        }
        gotoxy(33 + a, 22);
        bis.idd[a] = getch();
    }
    bis.idd[a] = '\0';

    for (int i = 0; i < strlen(bis.idd); i++)
    {
        if (bis.idd[i] == ' ')
        {
            x++;
        }
    }
    if (!(valAl(bis.idd) == 0 && strlen(bis.idd) <= 17 && strlen(bis.idd) != 0))
    {
        gotoxy(33, 22);
        printf("                               ");
        gotoxy(33, 22);
        printf("Inputan tidak valid");
        Sleep(1000);
        gotoxy(33, 22);
        printf("                       ");
        isi_id();
    }
    else if (x == strlen(bis.idd))
    {
        gotoxy(33, 22);
        printf("                                   ");
        gotoxy(33, 22);
        printf("Inputan tidak boleh kosong!");
        Sleep(1000);
        gotoxy(33, 22);
        printf("                           ");
        isi_id();
    }
    else if (strlen(bis.idd) > 17)
    {
        gotoxy(33, 22);
        printf("                               ");
        gotoxy(33, 22);
        printf("Maksimal 17 digit");
        Sleep(1000);
        gotoxy(33, 22);
        printf("                      ");
        isi_id();
    }
    else
    {
        bool sudah_ada = false;
        for (int x = 0; x < 15; x++)
        {
            if (strcmp(bis.tamp[x], bis.idd) == 0)
            {
                sudah_ada = true;
                break;
            }
        }
        if (!sudah_ada)
        {
        }
        // hahahahah///
        else
        {
            gotoxy(33, 22);
            printf("                                       ");
            gotoxy(33, 22);
            printf("AKUN sudah ADA,COBA LAGI !!!");
            Sleep(1000);
            gotoxy(33, 22);
            printf("                           ");
            isi_id();
        }
        buruk = fopen("akun.csv", "a");
        fprintf(buruk, "%s,", bis.idd);
        printf("%s",bis.idd);
        fclose(buruk);
        pas();
    }
}

void pas()
{
    gotoxy(33, 23);
    printf("ANGKA (0 - 9)!!!!");
    Sleep(2000);
    gotoxy(33, 23);
    printf("                 ");
    int a = 0, x = 0;
    gotoxy(33, 23);
    bis.sandi[a] = getch();
    while (bis.sandi[a] != 13)
    {
        if (bis.sandi[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            gotoxy(33 + a, 23);
            printf(" ");
        }
        else if (bis.sandi[a] >= '0' && bis.sandi[a] <= '9')
        {
            printf("%c", bis.sandi[a]);
            a++;
        }
        if (a > 10)
        {
            a = 10;
            gotoxy(43, 23);
            printf(" ");
        }
        gotoxy(33 + a, 23);
        bis.sandi[a] = getch();
    }
    bis.sandi[a] = '\0';
    for (int i = 0; i < strlen(bis.nomor); i++)
    {
        if (bis.nomor[i] == ' ')
        {
            x++;
        }
    }
    if (valAng(bis.idd) == 0 && strlen(bis.sandi) >= 3 && strlen(bis.sandi) <= 8 && strlen(bis.sandi) != 0)
    {
        // umccccc bisbismiilah bisa satu
    }
    else if (x == strlen(bis.sandi))
    {
        gotoxy(33, 23);
        printf("                                   ");
        gotoxy(57, 23);
        printf("Inputan tidak boleh kosong!");
        Sleep(1000);
        gotoxy(57, 23);
        printf("                           ");
        pas();
    }
    else if (valAng(bis.sandi) != 0)
    {
        gotoxy(33, 23);
        printf("                                   ");
        gotoxy(57, 23);
        printf("Inputan tidak valid!!");
        Sleep(1000);
        gotoxy(57, 23);
        printf("                     ");
        pas();
    }
    else if (!(strlen(bis.sandi) <= 8 && strlen(bis.sandi) >= 3))
    {
        gotoxy(33, 23);
        printf("                                   ");
        gotoxy(57, 23);
        printf("Input 3-8 digit!!");
        Sleep(1000);
        gotoxy(57, 23);
        printf("                    ");
        pas();
    }
    else
    {
        SUKA = fopen("akun.csv", "a");
        fprintf(SUKA, "%s\n", bis.sandi);
        fclose(SUKA);
        seni();
    }
}
/////////////////////////////////////////////////////////////////////////////////////////
int id(char a[])
{
    int i = 0, j = 0;
    if (a[0] == ' ' || a[strlen(a) - 1] == ' ' || a[0] == '-' || a[strlen(a) - 1 == ' '])
    {
        i++;
        return i++;
    }
    for (int x = 0; x < strlen(a); x++)
    {
        if (!(a[x] >= 'a' && a[x] <= 'z' || a[x] >= 'A' && a[x] <= 'Z' || a[x] >= '0' && a[x] <= '9' || a[x] == ' ' && a[x + 1] != ' ' || a[x] == '-' && a[x + 1] != '-' || a[x] == '\'' && a[x + 1] != '\''))
        {
            j++;
        }
    }
    return j;
}

int val_nom(char a[])
{
    int x = 0;
    int y = 0;
    if (a[0] == ' ' || a[strlen(a) - 1] == ' ')
    {
        y = 1;
        return y;
    }
    else if (a[0] != '0' || a[1] != '8' || a[2] == '0' || a[2] == '4' || a[2] == '6')
    {
        y = 1;
        return y;
    }
    for (int i = 0; i < strlen(a); i++)
    {
        if (!(a[i] >= '0' && a[i] <= '9'))
        {
            x++;
        }
    }
    return x;
}

int valAl(char a[])
{
    int i = 0, j = 0;
    if (a[0] == ' ' || a[strlen(a) - 1] == ' ' || a[0] == '.' || a[0] == ',' || a[0] == '-')
    {
        i = 1;
        return i;
    }
    for (int x = 0; x < strlen(a); x++)
    {
        if (!(a[x] >= 'A' && a[x] <= 'Z' || a[x] == '.' && a[x + 1] != '.' || a[x] >= '0' && a[x] <= '9' || a[x] == '-' && a[x + 1] != '-' || a[x] == ',' && a[x + 1] != ',' || a[x] == ' ' && a[x + 1] != ' ' || (a[x] == '-' && (!(a[x + 1] >= '0' && a[x + 1] <= '9')))))
        {
            j++;
        }
    }
    return j;
}

int valHur(char a[])
{
    int i = 0, j = 0;
    if (a[0] == ' ' || a[strlen(a) - 1] == ' ' || a[0] == '-' || a[strlen(a) - 1] == '-')
    {
        i = 1;
        return i;
    }
    for (int x = 0; x < strlen(a); x++)
    {
        if (!(a[x] >= 'a' && a[x] <= 'z' || a[x] >= 'A' && a[x] <= 'Z' || a[x] == ' ' && a[x + 1] != ' ' || a[x] == '\'' && a[x + 1] != '\'' || a[x] == '-' && a[x + 1] != '-'))
        {
            j++;
        }
        if (a[x] == '-' && (a[x + 1] == ' ' || a[x - 1] == ' '))
        {
            j++;
        }
    }
    return j;
}

int valnama(char a[])//ALI HANFIAH
{
    int i = 0, j = 0;
    if (a[0] == ' ' || a[strlen(a) - 1] == ' ' || a[0] == '-' || a[strlen(a) - 1] == '-')
    {
        i = 1;
        return i;
    }
    for (int x = 0; x < strlen(a); x++)
    {
        if (!(a[x] >= 'A' && a[x] <= 'Z' || a[x] == ' ' && a[x + 1] != ' ' || a[x] == '\'' && a[x + 1] != '\''|| a[x] == '-' && a[x + 1]!='-'))
        {
            j++;
        }
        if (a[x] == '-' && (a[x + 1] == ' ' || a[x - 1] == ' '))
        {
            j++;
        }
    }
    return j;
}

int valAng(char a[])
{
    int x = 0;
    int y = 0;
    if (a[0] == ' ')
    {
        y = 1;
        return y;
    }
    for (int i = 0; i < strlen(a); i++)
    {
        if (!(a[i] >= '0' && a[i] <= '9'))
        {
            x++;
        }
    }
    return x;
}

int val_umur(char a[])
{
    int huruf = 0;
    int huruf2 = 0;
    if (a[0] == ' ' || a[strlen(a) - 1] == ' ' || a[0] == '0' || a[0] == '0' && a[1] == '9')
    {
        huruf2 = 1;
        return huruf2;
    }
    for (int x = 0; x < strlen(a); x++)
    {
        if (!(a[x] >= '0' && a[x] <= '9' || a[x] == '0' && a[x + 1] != '0'))
        {
            huruf++;
        }
    }
    return huruf;
}