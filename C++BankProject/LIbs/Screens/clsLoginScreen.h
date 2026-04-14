#pragma once

#include <iostream>
#include "clsScreen.h"
#include "../Business/clsUser.h"
#include <iomanip>
#include "clsMainScreen.h"
#include "../Business/Global.h"
#include "../Utilities/clsString.h"

class clsLoginScreen :protected clsScreen
{

private :
    static bool LogingTrail()
    {
        string Username, Password;
        cout << "Enter Username? ";
        cin >> Username;
        cout << "Enter Password? ";
        cin >> Password;
        CurrentUser = clsUser::Find(Username, Password);
        return !CurrentUser.IsEmpty();
    }
  static  void _Login()
    {
        short LoginAtempt = 0;
        do
        {
            if (LogingTrail())
            {
                CurrentUser.RegisterLogIn();
                clsMainScreen::ShowMainMenue();
                break;
            }
            LoginAtempt++;
            cout << "\nInvlaid Username/Password!\n";
            cout << to_string(3 - LoginAtempt) + " Trails Left until lock\n\n";
        } while (LoginAtempt < 3);
    }

public:


    static void ShowLoginScreen()
    {
        system("cls");
        _DrawScreenHeader("\t  Login Screen");
        _Login();

    }

};

