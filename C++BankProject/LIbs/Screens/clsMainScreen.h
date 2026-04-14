#pragma once
#include <iostream>
#include "clsScreen.h"
#include "..\Utilities\clsInputValidate.h"
#include "Clients\clsClientListScreen.h"
#include "Clients\clsAddNewClientScreen.h"
#include "Clients\clsDeleteClientScreen.h"
#include "Clients\clsUpdateClientScreen.h"
#include "Clients\clsFindClientScreen.h"
#include "Transactions\clsTransactionsScreen.h"
#include "Users\clsManageUsers.h" 
#include "../Business/Global.h"
#include <iomanip>
#include "..\Business\clsUser.h"

using namespace std;

class clsMainScreen:protected clsScreen
{


    private:
        enum enMainMenueOptions {
            eListClients = 1, eAddNewClient = 2, eDeleteClient = 3,
            eUpdateClient = 4, eFindClient = 5, eShowTransactionsMenue = 6,
            eManageUsers = 7, eExit = 8
        };

       static short _ReadMainMenueOption()
        {
            cout <<setw(37) << left << ""<< "Choose what do you want to do? [1 to 8]? ";
            short Choice = clsInputValidate::ReadShortNumberBetween(1,8,"Enter Number between 1 to 8? ");
            return Choice;
        }

       static  void _GoBackToMainMenue()
        {
            cout << setw(37) << left << ""<<"\n\tPress any key to go back to Main Menue...\n";
           
            system("pause>0");
            ShowMainMenue();
        }
       static void _ShowAllClientsScreen()
       {
           if (!CheckAccessRights(clsUser::enPermissions::pListClients)){return;}
           clsClientListScreen::ShowClientsList();
       }

       static void _ShowAddNewClientsScreen()
       {
           if (!CheckAccessRights(clsUser::enPermissions::pAddNewClient)){return;}
           clsAddNewClientScreen::ShowAddNewClientScreen();
       }

       static void _ShowDeleteClientScreen()
       {
           if (!CheckAccessRights(clsUser::enPermissions::pDeleteClient)){return;}
           clsDeleteClientScreen::ShowDeleteClientScreen();
       }

       static void _ShowUpdateClientScreen()
       {
           if (!CheckAccessRights(clsUser::enPermissions::pUpdateClients)){return;}
           clsUpdateClientScreen::ShowUpdateClientScreen();
       }

       static void _ShowFindClientScreen()
       {
           if (!CheckAccessRights(clsUser::enPermissions::pFindClient)){return;}
           clsFindClientScreen::ShowFindClientScreen();
       }

       static void _ShowTransactionsMenue()
       {
           if (!CheckAccessRights(clsUser::enPermissions::pTranactions)){return;}
           clsTransactionsScreen::ShowTransactionsMenue();
       }

       static void _ShowManageUsersMenue()
       {
           if (!CheckAccessRights(clsUser::enPermissions::pManageUsers)){return;}
           clsManageUsersScreen::ShowManageUsersMenue();
       }

       static void _Logout()
       {
           CurrentUser = clsUser::Find("", "");
       }
       static void _PerfromMainMenueOption(enMainMenueOptions MainMenueOption)
        {
            switch (MainMenueOption)
            {
            case enMainMenueOptions::eListClients:
            {
                system("cls");
                _ShowAllClientsScreen();
                _GoBackToMainMenue();
                break;
            }
            case enMainMenueOptions::eAddNewClient:
                system("cls");
               _ShowAddNewClientsScreen();
                _GoBackToMainMenue();
                break;

            case enMainMenueOptions::eDeleteClient:
                system("cls");
                _ShowDeleteClientScreen();
                _GoBackToMainMenue();
                break;

            case enMainMenueOptions::eUpdateClient:
                system("cls");
                _ShowUpdateClientScreen();
                _GoBackToMainMenue();
                break;

            case enMainMenueOptions::eFindClient:
                system("cls");
                _ShowFindClientScreen();
                _GoBackToMainMenue();
                break;

            case enMainMenueOptions::eShowTransactionsMenue:
                system("cls");
                _ShowTransactionsMenue();
                _GoBackToMainMenue();
                break;

            case enMainMenueOptions::eManageUsers:
                system("cls");
                _ShowManageUsersMenue();
                _GoBackToMainMenue();
                break;

            case enMainMenueOptions::eExit:
                system("cls");
                _Logout();
                break;
            }

        }



	public:
       

       static void ShowMainMenue()
        {
           
            system("cls");
            _DrawScreenHeader("\t\tMain Screen");

            cout << setw(37) << left <<""<< "===========================================\n";
            cout << setw(37) << left << "" << "\t\t\tMain Menue\n";
            cout << setw(37) << left << "" << "===========================================\n";
            cout << setw(37) << left << "" << "\t[1] Show Client List.\n";
            cout << setw(37) << left << "" << "\t[2] Add New Client.\n";
            cout << setw(37) << left << "" << "\t[3] Delete Client.\n";
            cout << setw(37) << left << "" << "\t[4] Update Client Info.\n";
            cout << setw(37) << left << "" << "\t[5] Find Client.\n";
            cout << setw(37) << left << "" << "\t[6] Transactions.\n";
            cout << setw(37) << left << "" << "\t[7] Manage Users.\n";
            cout << setw(37) << left << "" << "\t[8] Logout.\n";
            cout << setw(37) << left << "" << "===========================================\n";

            _PerfromMainMenueOption((enMainMenueOptions)_ReadMainMenueOption());
        }

};

