#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <iomanip>
#include <stdio.h>

using namespace std;

//VOID DESIGN FUNCTIONS
void space() {
	cout
		<< endl;
}
void cover() {
    cout << " " << endl;
    cout << "            PayOnline: A Bank Management System                " << endl;
    cout << "              _._                         _._                  " << endl;
    cout << "             |   |                       |   |                 " << endl;
    cout << "            | ... |_._._._._._._._._._._| ... |                " << endl;
    cout << "            | ||| |  o PayOnline Bank o | ||| |                " << endl;
    cout << "            | --- | ---     ---    ---  | --- |                " << endl;
    cout << "       ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|  ())           " << endl;
    cout << "      (())) |     |---------------------|     | (()))          " << endl;
    cout << "     (())())| --- | ---     ---    ---  | --- |(())())         " << endl;
    cout << "     (()))()|[-|-]|  :::   .---.   :::  |[-|-]|(()))()         " << endl;
    cout << "     ()))(()|     | |~|~|  |_|_|  |~|~| |     |()))(()⠀        " << endl;
    cout << "        ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|  ||            " << endl;
    cout << "      ~ ^^ @@@@@@@@@@@@@ /=======/ @@@@@@@@@@@@ ^^ ~           " << endl;
    cout << "        ^~^~                                ~^~^               " << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "                     PROGRAMMED BY:                            " << endl;
    cout << "                                      _   _                    " << endl;
    cout << "            _______________          |*\_/*|_________          " << endl;
    cout << "           |  ___________  |        ||_/-\_|_______  |         " << endl;
    cout << "           | |           | |        | |           | |          " << endl;
    cout << "           | |   0   0   | |        | |   0   0   | |          " << endl;
    cout << "           | |     -     | |        | |     -     | |          " << endl;
    cout << "           | |    ___    | |        | |    ___    | |          " << endl;
    cout << "           | |___     ___| |        | |___________| |          " << endl;
    cout << "           |_____| _ |_____|        |_______________|          " << endl;
    cout << "             _|__|    |_|_............._|________|_             " << endl;
    cout << "               **********               **********             " << endl;
    cout << "              ************             ************            " << endl;
    cout << "                                                               " << endl;
}
void header() {
    cout << "                             _._                         _._               " << endl;
    cout << "                            |   |                       |   |              " << endl;
    cout << "                           | ... |_._._._._._._._._._._| ... |             " << endl;
    cout << "                           | ||| |  o PayOnline Bank o | ||| |             " << endl;
    cout << "                           | --- | ---     ---    ---  | --- |             " << endl;
    cout << "                      ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|  ())        " << endl;
    cout << "                     (())) |     |---------------------|     | (()))       " << endl;
    cout << "                    (())())| --- | ---     ---    ---  | --- |(())())      " << endl;
    cout << "                    (()))()|[-|-]|  :::   .---.   :::  |[-|-]|(()))()      " << endl;
    cout << "                    ()))(()|     | |~|~|  |_|_|  |~|~| |     |()))(()⠀     " << endl;
    cout << "                       ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|  ||         " << endl;
    cout << "                     ~ ^^ @@@@@@@@@@@@@ /=======/ @@@@@@@@@@@@ ^^ ~        " << endl;
    cout << "                          ^~^~                                ~^~^         " << endl;
}

void menu() {
    cout << "                ______________________________________________________                 " << endl;
    cout << "               [                                                      ]                " << endl;
    cout << "               |    _____________________________________________     |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |     PayOnline: A Bank Management System     |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |   [0] CREATE NEW ACCOUNT                    |    |                " << endl;
    cout << "               |   |   [1] SIGN-UP                               |    |                " << endl;
    cout << "               |   |   [2] DEPOSIT MONEY                         |    |                " << endl;
    cout << "               |   |   [3] WITHDRAW MONEY                        |    |                " << endl;
    cout << "               |   |   [4] TRANSFER CASH                         |    |                " << endl;
    cout << "               |   |   [5] LOAD MENU                             |    |                " << endl;
    cout << "               |   |   [6] TRANSACTION HISTORY                   |    |                " << endl;
    cout << "               |   |   [7] USER INFORMATION                      |    |                " << endl;
    cout << "               |   |   [8] ACCOUNT MASTERLIST                    |    |                " << endl;
    cout << "               |   |   [9] EXIT                                  |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |   Press key from 0-9:                       |    |                " << endl;
    cout << "               |   |_____________________________________________|    |                " << endl;
    cout << "               |                                                      |                " << endl;
    cout << "               [ ____________________________________________________ ]                " << endl;
    cout << "                       |_______________________________________|                       " << endl;
    cout << "                   _______________________________________________                     " << endl;
    cout << "               _ -'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_                  " << endl;
    cout << "            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_                " << endl;
    cout << "          _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_            " << endl;
    cout << "       _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_         " << endl;
    cout << "     _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_     " << endl;
    cout << "    :-----------------------------------------------------------------------------:    " << endl;
    cout << "    `---._.-----------------------------------------------------------------._.---'    " << endl;
    cout
        << setw(48) << ":::: " << endl;
    cout
        << setw(45) << "- ";
}

void createaccountdesign() {
    cout << "                ______________________________________________________                 " << endl;
    cout << "               [                                                      ]                " << endl;
    cout << "               |    _____________________________________________     |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |     PayOnline: A Bank Management System     |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |   PERSONAL INFORMATION:                     |    |                " << endl;
    cout << "               |   |      ACCOUNT NUMBER:                        |    |                " << endl;
    cout << "               |   |      ACCOUNT NAME HOLDER:                   |    |                " << endl;
    cout << "               |   |      TYPE OF BANK ACCOUNT (C/S):            |    |                " << endl;
    cout << "               |   |      DEPOSIT SAVINGS:                       |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |      PASSWORD:                              |    |                " << endl;
    cout << "               |   |      PIN (6 - DIGIT CODE):                  |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |_____________________________________________|    |                " << endl;
    cout << "               |                                                      |                " << endl;
    cout << "               [ ____________________________________________________ ]                " << endl;
    cout << "                       |_______________________________________|                       " << endl;
    cout << "                   _______________________________________________                     " << endl;
    cout << "               _ -'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_                  " << endl;
    cout << "            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_                " << endl;
    cout << "          _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_            " << endl;
    cout << "       _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_         " << endl;
    cout << "     _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_     " << endl;
    cout << "    :-----------------------------------------------------------------------------:    " << endl;
    cout << "    `---._.-----------------------------------------------------------------._.---'    " << endl;
}

void signupdesign() {
    cout << "                ______________________________________________________                 " << endl;
    cout << "               [                                                      ]                " << endl;
    cout << "               |    _____________________________________________     |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |     PayOnline: A Bank Management System     |    |                " << endl;
    cout << "               |   |         ____________________________        |    |                " << endl;
    cout << "               |   |        |          SIGN- UP          |       |    |                " << endl;
    cout << "               |   |        [____________________________]       |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |      ACCOUNT NUMBER:                        |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |      ACCOUNT NAME HOLDER:                   |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |      PASSWORD:                              |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |      PIN (6 - DIGIT CODE):                  |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |        ____ ____ ____ ____ ____ ____        |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |_____________________________________________|    |                " << endl;
    cout << "               |                                                      |                " << endl;
    cout << "               [ ____________________________________________________ ]                " << endl;
    cout << "                       |_______________________________________|                       " << endl;
    cout << "                   _______________________________________________                     " << endl;
    cout << "               _ -'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_                  " << endl;
    cout << "            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_                " << endl;
    cout << "          _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_            " << endl;
    cout << "       _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_         " << endl;
    cout << "     _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_     " << endl;
    cout << "    :-----------------------------------------------------------------------------:    " << endl;
    cout << "    `---._.-----------------------------------------------------------------._.---'    " << endl;
}

void depmoneycover() {
    cout << "                ______________________________________________________                 " << endl;
    cout << "               [                                                      ]                " << endl;
    cout << "               |    _____________________________________________     |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |     PayOnline: A Bank Management System     |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                  SAVINGS                    |    |                " << endl;
    cout << "               |   |                ____________                 |    |                " << endl;
    cout << "               |   |               | $          |                |    |                " << endl;
    cout << "               |   |               |____________|                |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                  DEPOSIT                    |    |                " << endl;
    cout << "               |   |                ____________                 |    |                " << endl;
    cout << "               |   |               | $          |                |    |                " << endl;
    cout << "               |   |               |____________|                |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |_____________________________________________|    |                " << endl;
    cout << "               |                                                      |                " << endl;
    cout << "               [ ____________________________________________________ ]                " << endl;
    cout << "                       |_______________________________________|                       " << endl;
    cout << "                   _______________________________________________                     " << endl;
    cout << "               _ -'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_                  " << endl;
    cout << "            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_                " << endl;
    cout << "          _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_            " << endl;
    cout << "       _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_         " << endl;
    cout << "     _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_     " << endl;
    cout << "    :-----------------------------------------------------------------------------:    " << endl;
    cout << "    `---._.-----------------------------------------------------------------._.---'    " << endl;
}
void withdrawmoneycover() {
    cout << "                ______________________________________________________                 " << endl;
    cout << "               [                                                      ]                " << endl;
    cout << "               |    _____________________________________________     |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |     PayOnline: A Bank Management System     |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                  SAVINGS                    |    |                " << endl;
    cout << "               |   |                ____________                 |    |                " << endl;
    cout << "               |   |               | $          |                |    |                " << endl;
    cout << "               |   |               |____________|                |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                  WITHDRAW                   |    |                " << endl;
    cout << "               |   |                ____________                 |    |                " << endl;
    cout << "               |   |               | $          |                |    |                " << endl;
    cout << "               |   |               |____________|                |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |_____________________________________________|    |                " << endl;
    cout << "               |                                                      |                " << endl;
    cout << "               [ ____________________________________________________ ]                " << endl;
    cout << "                       |_______________________________________|                       " << endl;
    cout << "                   _______________________________________________                     " << endl;
    cout << "               _ -'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_                  " << endl;
    cout << "            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_                " << endl;
    cout << "          _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_            " << endl;
    cout << "       _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_         " << endl;
    cout << "     _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_     " << endl;
    cout << "    :-----------------------------------------------------------------------------:    " << endl;
    cout << "    `---._.-----------------------------------------------------------------._.---'    " << endl;
}
void reportheader() {
    cout << "          .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.          " << endl;
    cout << "        .'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `.        " << endl;
    cout << "       (    .     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .    )       " << endl;
    cout << "        `.   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   .'        " << endl;
    cout << "          )    )                                                       (    (          " << endl;
    cout << "        ,'   ,'                                                         `.   `.        " << endl;
    cout << "       (    (                    ACCOUNT HOLDER LIST                     )    )        " << endl;
    cout << "        `.   `.                                                         .'   .'        " << endl;
    cout << "          )    )       _       _       _       _       _       _       (    (          " << endl;
    cout << "       ,'   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   `.         " << endl;
    cout << "       (    '  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `    )       " << endl;
    cout << "       `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .'         " << endl;
    cout << "          `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'          " << endl;
    cout << " " << endl;
    cout << "                ACCOUNT     ACCOUNT NAME     TYPE OF BANK     BALANCE                  " << endl;
    cout << "                  NO.          HOLDER          ACCOUNT        AMOUNT                   " << endl;
}
void trasnfercashcover() {
    cout << "                ______________________________________________________                 " << endl;
    cout << "               [                                                      ]                " << endl;
    cout << "               |    _____________________________________________     |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |              Payment send to                |    |                " << endl;
    cout << "               |   |               _          _                  |    |                " << endl;
    cout << "               |   |              ( )________(_)                 |    |                " << endl;
    cout << "               |   |             `:             :`               |    |                " << endl;
    cout << "               |   |            _|_             _|_              |    |                " << endl;
    cout << "               |   |            _|_   o  _   o  _|_              |    |                " << endl;
    cout << "               |   |             <      (_)      >               |    |                " << endl;
    cout << "               |   |              ( ___________ )                |    |                " << endl;
    cout << "               |   |            ACCOUNT NAME HOLDER              |    |                " << endl;
    cout << "               |   |              ACCOUNT NUMBER                 |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                  AMOUNT:                    |    |                " << endl;
    cout << "               |   |                     $                       |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |_____________________________________________|    |                " << endl;
    cout << "               |                                                      |                " << endl;
    cout << "               [ ____________________________________________________ ]                " << endl;
    cout << "                       |_______________________________________|                       " << endl;
    cout << "                   _______________________________________________                     " << endl;
    cout << "               _ -'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_                  " << endl;
    cout << "            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_                " << endl;
    cout << "          _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_            " << endl;
    cout << "       _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_         " << endl;
    cout << "     _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_     " << endl;
    cout << "    :-----------------------------------------------------------------------------:    " << endl;
    cout << "    `---._.-----------------------------------------------------------------._.---'    " << endl;
}
void loadmenudesign() {
    cout << "                ______________________________________________________                 " << endl;
    cout << "               [                                                      ]                " << endl;
    cout << "               |    _____________________________________________     |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |   <---  BUY LOAD                            |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |                Buy Load for                 |    |                " << endl;
    cout << "               |   |              ACCOUNT NAME HOLER             |    |                " << endl;
    cout << "               |   |               _          _                  |    |                " << endl;
    cout << "               |   |              ( )________(_)                 |    |                " << endl;
    cout << "               |   |             `:             :`               |    |                " << endl;
    cout << "               |   |            _|_             _|_              |    |                " << endl;
    cout << "               |   |            _|_   o  _   o  _|_              |    |                " << endl;
    cout << "               |   |             <      (_)      >               |    |                " << endl;
    cout << "               |   |              ( ___________ )                |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |   ENTER SIM CARD:          ____________     |    |                " << endl;
    cout << "               |   |   NUMBER:                +639 **** ****     |    |                " << endl;
    cout << "               |   |   ENTER LOAD:             $____________     |    |                " << endl;
    cout << "               |   |                                             |    |                " << endl;
    cout << "               |   |_____________________________________________|    |                " << endl;
    cout << "               |                                                      |                " << endl;
    cout << "               [ ____________________________________________________ ]                " << endl;
    cout << "                       |_______________________________________|                       " << endl;
    cout << "                   _______________________________________________                     " << endl;
    cout << "               _ -'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_                  " << endl;
    cout << "            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_                " << endl;
    cout << "          _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_            " << endl;
    cout << "       _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_         " << endl;
    cout << "     _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_     " << endl;
    cout << "    :-----------------------------------------------------------------------------:    " << endl;
    cout << "    `---._.-----------------------------------------------------------------._.---'    " << endl;
}
//CLASS FUNCTIONS
class useracc {
	double save = 0, deposit = 0, withdraw = 0, totalamount;
	int choices, pin, code[10], sign, size = 100, signuppin, accno, signupaccno;
	char name[100],pass[100], signupname[100], signuppass[100], tbank;

public: 
    void pins();
	void createaccount();
    void showaccount() const;
    void transshowacc()const;
	void signup();
    void editaccount();
    void depositformula(int);
	void depositmoney();
    void withdrawformula(int);
	void withdrawmoney();
    void masterlist() const;
    int returnpin() const;
    int returnaccountnumber() const;
    double returnbalance() const;
    char returnbanktype() const;
    int signupreturnaccno() const;
    int signupreturnpin() const;
};

void useracc::pins() {
        srand(time(0));

        for (int x = 1; x < 7; x++) {
            pin = rand() % 10;
            code[x] = pin;
            cout
                << pin;
        }
}
void useracc::createaccount() {

    createaccountdesign();

    system("pause");
    system("cls");

    header();

    cout
        << "                       PERSONAL INFORMATION:" << endl;
    cout
        << "                          ACCOUNT NUMBER: ";
    cin
        >> accno;

    cout
        << "                          ACCOUNT NAME HOLDER: ";

    cin.ignore();
    cin.getline(name, 100);

    cout
        << "                          TYPE OF BANK ACCOUNT (C/S): ";
    cin
        >> tbank;

    tbank = toupper(tbank);

    cout
        << "                          DEPOSIT INITIAL AMOUNT (>=1000 FOR SAVINGS AND >=1500 FOR CURRENT): ";
    cin
        >> save;

    cout
        << "                          PASSWORD: ";
    cin.ignore();
    cin.getline(pass, 100);

    cout
        << "                          PIN (6 - DIGIT CODE): ";
    pins();
    cin.ignore();

}

void useracc::showaccount() const {
    header();
    cout
        << "                            User Information: " << endl;
    cout
        << "                                ACCOUNT NUMBER: " << accno << endl;
    cout
        << "                                ACCOUNT NAME HOLDER: " << name << " " << endl;
    cout
        << "                                TYPE OF BANK ACCOUNT (C/S): " << tbank << endl;
    cout
        << "                                BALANCE: " << save << endl;
    cout
        << "                                PASSWORD: " << pass << endl;

}

void useracc::transshowacc() const{
    header();
    cout
        << "                            User Information: " << endl;
    cout
        << "                                ACCOUNT NUMBER: " << accno << endl;
    cout
        << "                                ACCOUNT NAME HOLDER: " << name << " " << endl;
    cout
        << "                                TYPE OF BANK ACCOUNT (C/S): " << tbank << endl;
}
void useracc::signup() {
    system("cls");

    header();

    useracc signupsystem;

    cout
        << "                          ACCOUNT NUMBER: ";
    cin
        >> signupaccno;
    
    cout
        << "                          ACCOUNT NAME HOLDER: ";
    cin.ignore();
    cin.getline(signupname, 100);

    cout
        << "                          PASSWORD: ";
    cin.ignore();
    cin.getline(signuppass, 100);

    cout
        << "                          PIN (6 - DIGIT CODE): ";
    cin
        >> signuppin;

}
void useracc::editaccount() {

header();
cout
<< "                                    EDIT: " << endl;

cout
    << "                          ACCOUNT NUMBER: " << accno << endl;
cout
    << "                          MODIFY ACCOUNT NAME HOLDER: ";
cin.ignore();
cin.getline(name, 100);


cout
    << "                          MODIFY TYPE OF BANK ACCOUNT: ";

cin
    >> tbank;
cout
    << "                          MODIFY BALANCE AMOUNT: ";
cin
    >> save;

cout
    << "                          PASSWORD: ";
cin.ignore();
cin.getline(pass, 100);
}

void useracc::depositformula(int x) {
    save = save + x;
}
void useracc::depositmoney() {

    cout
        << "                                SAVINGS: " << save << endl;
    cout
        << "                                DEPOSIT MONEY:";

}
void useracc::withdrawformula(int x) {
    save = save - x;
}
void  useracc::withdrawmoney() {

   
    cout
        << "                                SAVINGS: " << save << endl;
    cout
        << "                                WITHDRAW MONEY:";

}
void useracc::masterlist() const {
    cout << setw(21) << accno << " " << setw(15) << name << setw(15) << tbank << setw(15) << save << endl;
}
int useracc::returnpin() const {
    return pin;
}
int useracc::returnaccountnumber() const {
    return accno;
}
double useracc::returnbalance() const {
    return save;
}
char useracc::returnbanktype() const {
    return tbank;
}
int useracc::signupreturnaccno() const {
    return signupaccno;
}

int useracc::signupreturnpin() const {
    return signuppin;
}

//Declaration of filestream in functions
void rec_account();
void sign_account();
void readfile(int);
void deletingaccount(int);
void editingaccount(int);
void allacounts();
void transaction_deposit_withdraw(int, int);
//Main function
int main() {
    //main

    int no, dc = 0;
    int choices;
    

    cover();
    system("pause");

    do {
        system("cls");
        
        menu();

        cin
            >> choices;

        //OPTIONS
        switch (choices) {
        case 0:
            system("cls");
            header();
            rec_account();
            break;
        case 1:
            system("cls");
            signupdesign();
            system("pause");
            
            cout
                << "                           MAINTENANCE";

            //sign_account();
            system("pause");
            break;
        case 2:
            system("cls");
            header();
            cout
                << "                          ACCOUNT NUMBER: ";
            cin
                >> no;
            system("cls");
            transaction_deposit_withdraw(no, 1);
            break;
        case 3:
            system("cls");
            header();
            cout
                << "                          ACCOUNT NUMBER: ";
            cin
                >> no;

            system("cls");
            transaction_deposit_withdraw(no, 2);
            break;
        case 4:
            system("cls");
            header();
            cout
                << "                          ACCOUNT NUMBER: ";
            cin
                >> no;
            cout
                << "                           MAINTENANCE";
            system("pause");
            break;
        case 5:
            system("cls");
            loadmenudesign();
            system("pause");
            system("cls");
            header();
            cout
                << "                          ACCOUNT NUMBER: ";
            cin
                >> no;
            cout
                << "                           MAINTENANCE";
            system("pause");
            break;
        case 6:
            system("cls");
            header();
            cout
                << "                          ACCOUNT NUMBER: ";
            cin
                >> no;
            cout
                << "                           MAINTENANCE";
            system("pause");
            break;
        case 7:
            do {
            system("cls");
            header();

            cout
                << "                            SHOW ACCOUNT [1]" << endl;
            cout
                << "                          DELETE ACCOUNT [2]" << endl;
            cout
                << "                            EDIT ACCOUNT [3]" << endl;
            cout
                << "                                     INPUT: ";
            cin
                >> dc;

            system("cls");
                if (dc == 1) {
                    header();

                    cout
                        << "                          ACCOUNT NUMBER: ";
                    cin
                        >> no;

                readfile(no);
                system("cls");
                }
                else if (dc == 2) {
                    header();

                    cout
                        << "                          ACCOUNT NUMBER: ";
                    cin
                        >> no;
                deletingaccount(no);
                system("cls");
                
                }
                else if (dc == 3) {
                    header();

                    cout
                        << "                          ACCOUNT NUMBER: ";
                    cin
                        >> no;
                editingaccount(no);
                system("cls");
                }
                else {
                cout
                    << "Choose from the options above" << endl;
                system("pause");
                }
            } while (dc != 1 && dc != 2 && dc != 3);
            break;
        case 8:
            system("cls");
            allacounts();
            system("pause");
            break;
        case 9:
            break;
        }
    } while (choices != 9);
    return 0;
}

//Open a file in write mode

void rec_account() {
    useracc accofUser;
    ofstream outacc;
    outacc.open("useraccount.txt", ios::binary | ios::app);
    accofUser.createaccount();
    outacc.write(reinterpret_cast<char*> (&accofUser), sizeof(useracc));
    outacc.close();
}

void sign_account() {
    char name[100], pass[100], signupname[100], signuppass[100];

    useracc accofUser;
    ofstream signacc;
    bool sign = true;
    signacc.open("useraccount.txt", ios::binary | ios::app);
    accofUser.signup();
    signacc.write(reinterpret_cast<char*> (&accofUser), sizeof(useracc));
  
    
    ifstream read("useraccount.txt", ios::binary);
    read.getline(signupname,100);
    read.getline(signuppass, 100);
    read.getline(name, 100);
    read.getline(pass, 100);

    while (!read.eof() && sign == true) {
   
        if (accofUser.returnaccountnumber() == accofUser.signupreturnaccno() && name == signupname && pass == signuppass && accofUser.returnpin() == accofUser.signupreturnpin()) {
        cout
            << "Log-in Successful..." << endl;
        system("pause");
        sign = false;
        }
        else {
        cout
            << "This account is not registered..." << endl;
        sign = false;
        }
    }
    signacc.close();
}
void readfile(int x) {
    useracc accofUser;
    bool check = false;
    ifstream incheck;
    incheck.open("useraccount.txt", ios::binary);

    while (incheck.read(reinterpret_cast<char*>(&accofUser), sizeof(useracc))) {
        if (accofUser.returnaccountnumber() == x) {
            system("cls");

            accofUser.showaccount();
            check = true;
        }
    }
    incheck.close();
    if (check == false) {
        cout
            << "This account is not registered.";
    }
    system("pause");
}

void deletingaccount(int x) {
    useracc accofUser;
    ofstream output;
    ifstream input;
    input.open("useraccount.txt", ios::binary);
    output.open("usertempo.txt", ios::binary);
    input.seekg(0, ios::beg);

    while (input.read(reinterpret_cast<char*>(&accofUser), sizeof(useracc))) {
        if (accofUser.returnaccountnumber() != x) {
            output.write(reinterpret_cast<char*>(&accofUser), sizeof(useracc));
        }
    }
    input.close();
    output.close();
    remove("useraccount.txt");
    rename("usertempo.txt", "useraccount.txt");

    cout
        << "The account has been deleted..." << endl;
    system("pause");
}

void editingaccount(int x) {
    bool record = true;
    useracc accofUser;
    fstream user;
    user.open("useraccount.txt", ios::binary | ios::in | ios::out);
    while (record == true && !user.eof()) {

        user.read(reinterpret_cast<char*>(&accofUser), sizeof(useracc));
            if (accofUser.returnaccountnumber() == x) {
                header();
                system("cls");
                accofUser.showaccount();
                system("pause");
                system("cls");
                
                accofUser.editaccount();
                int loc = (-1) * static_cast<int>(sizeof(useracc));
                user.seekp(loc, ios::cur);
                user.write(reinterpret_cast<char*>(&accofUser), sizeof(useracc));
                cout
                    << "                                ACCOUND UPDATED... " << endl;
                record = false;
            }
    }
    user.close();
    if (record == true) {
        cout
            << "Record Not Found ";
    }
}
void allacounts() {
    useracc accofUser;
    ifstream allfiles;
    allfiles.open("useraccount.txt", ios::binary);
    
    if (!allfiles)
    {
        cout << "File could not be open !! Press any Key...";
        return;
    }
    reportheader();

    while (allfiles.read(reinterpret_cast<char*>(&accofUser), sizeof(useracc))) {
        accofUser.masterlist();
    }
    allfiles.close();
}
void transaction_deposit_withdraw(int x, int y) {
    int balance;
    bool trans = true;
    useracc accofUser;
    fstream trandw;
    trandw.open("useraccount.txt", ios::binary | ios::in | ios::out);
    
    while (!trandw.eof() && trans == true) {
        trandw.read(reinterpret_cast<char*>(&accofUser), sizeof(useracc));
        if (accofUser.returnaccountnumber() == x) {
            accofUser.transshowacc();

            if (y == 1) {
            accofUser.depositmoney();
                cin
                    >> balance;
            
            accofUser.depositformula(balance);
               
            }
            else if (y == 2) {
            accofUser.withdrawmoney();
                cin
                    >> balance;

            int money = accofUser.returnbalance() - balance;

                if (money < 1000 && accofUser.returnbanktype() == 'S' || money < 1500 && accofUser.returnbanktype() == 'C') {
                cout
                    << "                               INSUFFICIENT BALANCE... " << endl;
                system("pause");
                }
                else 
                    accofUser.withdrawformula(balance);
            }
            int loc = (-1) * static_cast<int>(sizeof(useracc));
            trandw.seekp(loc, ios::cur);
            trandw.write(reinterpret_cast<char*>(&accofUser), sizeof(useracc));

            cout
                << "                             TRANSACTION SUCCESSFUL... " << endl;
            trans = true;
        }
    }
    trandw.close();
    if (trans == false) {
        cout
            << "The account is not registered" << endl;
    }
}