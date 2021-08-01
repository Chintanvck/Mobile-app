#include <iostream>
#include <string.h>

using namespace std;
class det
{
protected:
    string pname, sname;
    int age;

public:
    void gde()
    {
        cout << "What's your name: " << endl;
        cin >> pname;
        cout << "Your surname: " << endl;
        cin >> sname;
        cout << "And how old are you: " << endl;
        cin >> age;
        cout << endl;
    }
    void pde()
    {
        cout << "You are " << pname << " " << sname << endl;
        cout << age << " Years old" << endl
             << endl;
    }
};
class disease : public det
{
protected:
    int name;
    string n;

public:
    int gd()
    {

        cout << "Select the disease from the list upon which you want my help: " << endl
             << endl;
    x:
        cout << " Enter [1] for Covid" << endl
             << " Enter [2] for Dengue" << endl
             << " Enter [3] for Swine flu" << endl
             << endl;
        cout << "Enter your choice:";
        cin >> name;
        if (name == 1)
        {
            n = "COVID";
            return 1;
        }
        else if (name == 2)
        {
            n = "DENGUE";
            return 2;
        }
        else if (name == 3)
        {
            n = "SWINE FLU";
            return 3;
        }
        else
        {
            cout << "Enter a valid choice" << endl;
            goto x;
        }
    }
    void pd()
    {

        cout << "You have: " << n << endl
             << endl;
    }
};

class covid : virtual public disease
{
public:
    void cv()
    {
        string c;
        cout << "Have you taken vaccine?" << endl;
    l:
        cout << "Enter Y/y for yes OR N/n for no" << endl;
        cin >> c;
        cout << endl;
        if (c == "y" || c == "Y")
        {
            int i;
            cout << "Which vaccine you have taken" << endl;
            cout << "Enter [1] for COVISHIELD" << endl;
            cout << "Enter [2] for COVAXINE" << endl
                 << endl;
            cout << "Enter your choice:";
            cin >> i;
            if (i == 1)
            {
                cout << "The vaccine that you have taken has some common and mild side effects listed below:" << endl;
                cout << "[1] Moderate fever" << endl;
                cout << "[2] Weaknesss" << endl;
                cout << "[3] Pain at site of injection" << endl;
                cout << "Take your second dose after 42 days from taking your first shot" << endl
                     << endl;
            }
            else if (i == 2)
            {
                cout << "The vaccine that you have taken has some common and mild side effects listed below:" << endl;
                cout << "[1] Moderate fever" << endl;
                cout << "[2] Weaknesss" << endl;
                cout << "[3] Pain at site of injection" << endl;
                cout << "Take your second dose after 28 days from taking your first shot" << endl
                     << endl;
            }
            else
            {
                cout << "Enter a valid choice" << endl
                     << endl;
            }
        }
        else if (c == "n" || c == "N")
        {
            cout << "Book your vaccination slot ASAP from COWIN website or from arogya setu android application" << endl;
        }
        else
        {
            cout << "Enter a valid choice" << endl;
            goto l;
        }
    }
    void cs()
    {
        cout << "Symptoms of COVID" << endl
             << endl;
        cout << "[1] Loss of taste or smell" << endl;
        cout << "[2] Dry cough" << endl;
        cout << "[3] Tiredness" << endl;
        cout << "[4] Fever" << endl
             << endl;
    }
};
class dengue : virtual public disease
{
public:
    void dv()
    {
        string c;
        cout << "Have you taken vaccine?" << endl;
    l:
        cout << "Enter Y/y for yes OR N/n for no" << endl;
        cin >> c;
        cout << endl;
        if (c == "y" || c == "Y")
        {
            int i;
            cout << "Which vaccine you have taken" << endl;
            cout << "Enter [1] for DENGVAXIA" << endl;
            cout << "Enter [2] for DENVAX" << endl
                 << endl;
            cout << "Enter your choice:";
            cin >> i;
            if (i == 1)
            {
                cout << "The vaccine that you have taken has some common and mild side effects listed below:" << endl;
                cout << "[1] Headache" << endl;
                cout << "[2] Muscle pains" << endl;
                cout << "[3] Pain at site of injection" << endl
                     << endl;
            }
            else if (i == 2)
            {
                cout << "The vaccine that you have taken has some common and mild side effects listed below:" << endl;
                cout << "[1] Moderate fever" << endl;
                cout << "[2] Weaknesss" << endl;
                cout << "[3] Pain at site of injection" << endl
                     << endl;
            }
            else
            {
                cout << "Enter a valid choice" << endl;
            }
        }
        else if (c == "n" || c == "N")
        {
            cout << "Get consulted by a doctor and get vaccined accordingly" << endl
                 << endl;
        }
        else
        {
            cout << "Enter a valid choice" << endl;
            goto l;
        }
    }
    void ds()
    {
        cout << "Symptoms of DENGUE" << endl
             << endl;
        cout << "[1] Nausea" << endl;
        cout << "[2] Vomiting" << endl;
        cout << "[3] Aches and pains" << endl;
        cout << "[4] Fever" << endl
             << endl;
    }
};
class swinef : virtual public disease
{
public:
    void sv()
    {
        string c;
        cout << "Have you taken vaccine?" << endl;
    l:
        cout << "Enter Y/y for yes OR N/n for no" << endl;
        cin >> c;
        cout << endl;
        if (c == "y" || c == "Y")
        {
            int i;
            cout << "Which vaccine you have taken" << endl;
            cout << "Enter [1] for PANVAX" << endl;
            cout << "Enter [2] for CELVAPAN" << endl
                 << endl;
            cout << "Enter your choice:";
            cin >> i;
            if (i == 1)
            {
                cout << "The vaccine that you have taken has some common and mild side effects listed below:" << endl;
                cout << "[1] Headache" << endl;
                cout << "[2] Runny nose" << endl;
                cout << "[3] Pain at site of injection" << endl
                     << endl;
            }
            else if (i == 2)
            {
                cout << "The vaccine that you have taken has some common and mild side effects listed below:" << endl;
                cout << "[1] Headache" << endl;
                cout << "[2] Fatigue" << endl;
                cout << "[3] Pain at site of injection" << endl
                     << endl;
            }
            else
            {
                cout << "Enter a valid choice" << endl;
            }
        }
        else if (c == "n" || c == "N")
        {
            cout << "Get consulted by your nearest doctor and get vaccined accordingly" << endl
                 << endl;
        }
        else
        {
            cout << "Enter a valid choice" << endl;
            goto l;
        }
    }
    void ss()
    {
        cout << "Symptoms of SWINE FLU" << endl
             << endl;
        cout << "[1] Runny or stuffy nose" << endl;
        cout << "[2] Watery, red eyes" << endl;
        cout << "[3] Aches and pains" << endl;
        cout << "[4] Fever" << endl
             << endl;
    }
};
class precautions : public covid, public dengue, public swinef
{
public:
    void pre()
    {

        cout << "->Always wear your mask or two for safety" << endl;
        cout << "->Keep a sanitizer handy with you" << endl;
        cout << "->Maintain social distance" << endl
             << endl;
    }
    void close()
    {
        cout << "Hey, " << pname << " it was nice guiding you" << endl;
        cout << "Bye !" << endl;
        cout << endl
             << endl
             << endl;
        cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl
             << endl;
        cout << "Concept And Code by:" << endl;
        cout << "20IT070 - NISHANT MIYANI" << endl;
        cout << "20IT056 - SOHAM KHANNA" << endl;
        cout << "20IT058 - CHINTAN KOTADIYA" << endl
             << endl;
        cout << "Assisted By - Ms NISHAT SHAIKH";
    }
};

int main()

{

    precautions p1;

    int c;
    cout << endl
         << endl
         << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl
         << endl;
    cout << "Hello , I am your friendly assistant VACO , I am here to guide you on different diseases" << endl;
    p1.gde();

    do
    {

        cout << "What do you want to know" << endl
             << endl;
        cout << "Enter [1] to know Details" << endl;
        cout << "Enter [2] to know about Symptoms" << endl;
        cout << "Enter [3] to know about Vaccination" << endl;
        cout << "Enter [4] to know about Precautions" << endl;
        cout << "Enter [5] to Exit" << endl
             << endl;
        cout << "Enter your choice:";
        cin >> c;
        switch (c)
        {
        case 1:
        {
            p1.pde();
            break;
        }

        case 2:
        {
            int x = p1.gd();
            p1.pd();
            if (x == 1)
            {
                p1.cs();
            }
            else if (x == 2)
            {
                p1.ds();
            }
            else if (x == 3)
            {
                p1.ss();
            }
            break;
        }
        case 3:
        {
            int x = p1.gd();
            p1.pd();
            if (x == 1)
            {
                p1.cv();
            }
            else if (x == 2)
            {
                p1.dv();
            }
            else if (x == 3)
            {
                p1.sv();
            }
            break;
        }
        case 4:
        {
            p1.pre();
            break;
        }
        case 5:
        {
            p1.close();
            exit(0);
        }
        default:
        {
            cout << "Please enter a valide choice" << endl
                 << endl;
        }
        }

    } while (c != 0);

    return 0;
}
