#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <windows.h>
#include <fstream>
#define WHITE "\033[37m"
#define PURPLE "\033[35m"
using namespace std;
class module
{
protected:
    string gender, name;

public:
    module(const string &gender, const string &name)
    {
        cout << R"(
     _____________________________________________________________________________________
    |		     	       _                            _                             |
    |		 __      _____| | ___ ___  _ __ ___   ___  | |_ ___                       |
    |		 \ \ /\ / / _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \                      |  
    |		  \ V  V /  __/ | (_| (_) | | | | | |  __/ | || (_) |                     | 
    |		   \_/\_/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/                      |
    |		      _                                                       _     _     |
    |		  ___| |_ __ _ _ __  __      ____ _ _ __  __      _____  _ __| | __| |    |
    |		 / __| __/ _` | '__| \ \ /\ / / _` | '__| \ \ /\ / / _ \| '__| |/ _` |    |
    |		 \__ \ || (_| | |     \ V  V / (_| | |     \ V  V / (_) | |  | | (_| |    |
    |		 |___/\__\__,_|_|      \_/\_/ \__,_|_|      \_/\_/ \___/|_|  |_|\__,_|    |					                                                                                                                                                   
        )" << '\n';
        cout << "   |            ================================ ~~ ==================================     |" << endl;
        cout << "   |           |                          - Selection Menu -                         |     |" << endl;
        cout << "   |           |        Please select from the following items, " << gender << name << "   	     |     |" << endl;
        cout << "   |           |               1) Module 1: Let Play Computing Wordle                |     |" << endl;
        cout << "   |           |                   2) Module 2: Check Score List                     |     |" << endl;
        cout << "   |           |          3) Module 3: Star Wars Wordle Developer(group 2)           |     |" << endl;
        cout << "   |           |                           4) Exit Program                           |     |" << endl;
        cout << "   |           ================================ ~~ ==================================      |" << endl;
    }
    void module1(const string &gender, const string &name)
    {
        system("Color 05");
        cout << R"(
                 _    __________ ____    ____ _    _______  _   _     ____ ____ ____ _    _____
                / \  /  __/__ __/ ___\  /  __/ \  /  _ \  \//  / \  //  _ /  __/  _ / \  /  __/
                | |  |  \   / \ |    \  |  \/| |  | / \|\  /   | |  || / \|  \/| | \| |  |  \  
                | |_/|  /_  | | \___ |  |  __| |_/| |-||/ /    | |/\|| \_/|    | |_/| |_/|  /_ 
                \____\____\ \_/ \____/  \_/  \____\_/ \/_/     \_/  \\____\_/\_\____\____\____\
                                                                               
            )"
             << endl;
        cout << "Welcome to Module 1: Let's Play Star Wars Wordle," << gender << name << endl;

        cout << "        =============================================================================================================  " << endl;
        cout << "      ||                                            -Here are the rules:-                                             ||" << endl;
        cout << "      ||                           > There are 10 words in this game                                                  ||" << endl;
        cout << "      ||                           >  For each word, you are given five attempts to guess the word                    ||" << endl;
        cout << "      ||             	           > You may type in any characters with uppercase or lowercase                       ||" << endl;
        cout << "      ||                           > After each guess, we will check and provide feedback on each letter entered      ||" << endl;
        cout << "      ||                           > For each correct answer, you will be awarded 10 points                           ||" << endl;
        cout << "        ============================================================================================================== " << endl;
        system("pause");
        system("cls");
        string secretWords[] = {"algorithm", "encryption", "database", "firewall", "cybersecurity", "protocol", "compiler", "network", "cache", "folder",
                                "app", "search", "link", "text", "image", "video", "audio", "download", "upload", "password", "website", "data", "software", "ram",
                                "application", "malware", "motherboard", "backup", "mouse", "harddisk"};
        string hint[] = {"Step-by-step solution", "Data lock", "Organized data storage", "Network gatekeeper", "Digital defense", "Communication rules",
                         "Code translator",
                         "Connected computers",
                         "Quick-access memory",
                         "File organizer",
                         "application",
                         "To look for information",
                         "Clickable element on a webpage",
                         "Words or character display on the screen",
                         "Graphic display on the screen",
                         "Moving image and sound display on the screen",
                         "Sound or music played on a computer",
                         "To transfer data or file from internet to your device",
                         "To transfer data or file from internet to another device",
                         "A secret combination of character used to access your data",
                         "A collection of web pages accessible through the internet",
                         "Information that can be interpreted and used by computers",
                         "Programs used to operate computers and execute specific tasks",
                         "The hardware component used to store data that is actively being used by a processor",
                         "program designed to perform a specific function",
                         "any software intentionally designed to cause damage to a computer",
                         "A collection of circuits that controls your computerâ€™s communication",
                         "A copy of computer data taken",
                         "An external device connected to your computer",
                         "where your computer reads and writes information"};

        const int totalGames = 10;
        int guessCorrect = 0;
        int points = 0;
        srand(time(nullptr));
        int j = 1;
        while (true)
        {
            cout << "Welcome to Star War World " << j << "!" << endl;
            ++j;
            for (int game = 0; game < totalGames; game++)
            {
                int secretWord = rand() % 30;
                cout << "Star Wars Word " << game + 1 << " of 10 " << "\t (hint: " << hint[secretWord] << " )" << endl;
                string word = secretWords[secretWord];
                int wordslength = word.size();
                for (int i = 1; i <= wordslength; i++)
                {
                    cout << " ___ ";
                }
                cout << endl;
                for (int i = 1; i <= wordslength; i++)
                {
                    cout << "|   |";
                }
                cout << endl;
                for (int i = 1; i <= wordslength; i++)
                {
                    cout << "|___|";
                }
                cout << endl;
                int attemptsLeft = 5;
                int n = 1;
                while (attemptsLeft > 0)
                {
                    cout << "Enter your guess" << n << " (Remaining attempts: " << attemptsLeft << ")";
                    string guess;
                    cout << WHITE;
                    cin >> guess;
                    cout << PURPLE;
                    if (guess.length() != secretWords[secretWord].size())
                    {
                        cout << "Incorrect answer length. Please enter a word with " << secretWords[secretWord].size() << " letters.\n";
                    }
                    for (int i = 0; i < guess.size(); ++i)
                    {
                        guess[i] = tolower(guess[i]);
                    }
                    cout << "For your word " << n << " :\n";
                    for (int i = 0; i < guess.size(); i++)
                    {
                        cout << " ___ ";
                    }
                    cout << endl;
                    for (int i = 0; i < guess.size(); i++)
                    {
                        cout << "| " << WHITE << guess[i] << PURPLE << " |";
                    }
                    cout << endl;
                    for (int i = 0; i < guess.size(); i++)
                    {
                        cout << "|___|";
                    }
                    n++;
                    cout << endl;
                    bool correct = true;

                    for (int i = 0; i < secretWords[secretWord].size(); i++)
                    {
                        Beep(1000, 300);
                        if (guess[i] == secretWords[secretWord][i])
                        {
                            cout << "> " << guess[i] << " is inside Word " << game + 1 << " and it is in the right position.\n";
                        }
                        else if (secretWords[secretWord].find(guess[i]) != string::npos)
                        {
                            cout << "> " << guess[i] << " is inside Word " << game + 1 << ", but it is in the wrong position.\n";
                            correct = false;
                        }
                        else
                        {
                            cout << "> " << guess[i] << " is not inside Word " << game + 1 << endl;
                            correct = false;
                        }
                    }
                    if (correct)
                    {
                        Beep(1000, 500);
                        cout << "Congratulations! You guessed the word right!\n";
                        guessCorrect++;
                        points += 10;
                        break;
                    }
                    else
                    {
                        cout << "Incorrect guess. Try again.\n";
                        attemptsLeft--;
                    }
                }
                if (attemptsLeft == 0)
                {
                    cout << "You have run out of attempts. The correct word was " << secretWords[secretWord] << "." << endl;
                }
                system("pause");
                system("cls");
                cout << endl;
            }
            cout << "Dear " << name << ", you have completed all 10 games. You guessed " << guessCorrect << " out of 10 words correctly.\n";
            cout << endl;
            cout << "Your score is " << points << endl;
            cout << endl;

            ofstream write("score_list.txt", ios::app);
            write << "| " << gender << " " << name << "\t\t\t\t" << points << "   |\n";

            cout << "Your name ans score have been added into the ScoreList.txt file." << endl;
            cout << endl;
            cout << "Press 1 to repeat the Worldle Game, Press 2 to go back to selection Menu\n";
            int ans;
            cin >> ans;
            if (ans == 1)
            {
                system("cls");
                continue;
            }
            else if (ans == 2)
            {
                break;
            }
            else
            {
                cout << "Invalid Entered\n";
            }
        }
        system("cls");
    }
    void module2(const string &gender, const string &name)
    {
        cout << R"(
           ________              __                                ___      __ 
          / ____/ /_  ___  _____/ /__   ______________  ________  / (_)____/ /_
         / /   / __ \/ _ \/ ___/ //_/  / ___/ ___/ __ \/ ___/ _ \/ / / ___/ __/
        / /___/ / / /  __/ /__/ ,<    (__  ) /__/ /_/ / /  /  __/ / (__  ) /_  
        \____/_/ /_/\___/\___/_/|_|  /____/\___/\____/_/   \___/_/_/____/\__/  
        )" << "\n";

        cout << "\t\t  Welcome to Module 2: Check score List \n";
        cout << endl;
        ifstream read("score_list.txt");
        string line;
        cout << "\t\t Here is the score list:\n";
        cout << endl;
        cout << "\t\t  Username\t\t\t\tPoints\n";
        cout << "\t\t ==================== ~~~ ====================\n";
        while (getline(read, line))
        {
            cout << "\t\t " << line << "\t\t\t" << endl;
        }
        system("pause");
        system("cls");
    }
    void module3()
    {
        cout << R"(
            ____                  __                         _       ____                           __  _           
           / __ \___ _   ______  / /___  ____  ___  _____   (_)___  / __/___  _________ ___  ____ _/ /_(_)___  ____ 
          / / / / _ \ | / / __ \/ / __ \/ __ \/ _ \/ ___/  / / __ \/ /_/ __ \/ ___/ __ `__ \/ __ `/ __/ / __ \/ __ \
         / /_/ /  __/ |/ / /_/ / / /_/ / /_/ /  __/ /     / / / / / __/ /_/ / /  / / / / / / /_/ / /_/ / /_/ / / / /
        /_____/\___/|___/\____/_/\____/ .___/\___/_/     /_/_/ /_/_/  \____/_/  /_/ /_/ /_/\__,_/\__/_/\____/_/ /_/ 
                                    /_/                                                                            
    )" << '\n';
        cout << "Team member        \t  Student ID  \tTask/Job description" << endl;
        cout << "=====================================================================================================" << endl;
        cout << "HOUTH SITHA        \t  p20230039\\program and design Module , testing program" << endl;
    }
};
int main()
{
    bool complete = false;
    string name, gender;
    int option;
    system("Color 09");
    cout << R"(  
	
		 _    _ _____ _     _____ ________  ________  
		| |  | |  ___| |   /  __ \  _  |  \/  |  ___| 
		| |  | | |__ | |   | /  \/ | | | .  . | |__   
		| |/\| |  __|| |   | |   | | | | |\/| |  __|  
		\  /\  / |___| |___| \__/\ \_/ / |  | | |___  
		 \/  \/\____/\_____/\____/\___/\_|  |_|____/  
		                                                                                       

	 )" << '\n';
    cout << "Welcome to our game!\n";
    cout << "Please Enter your Username: ";
    getline(cin, name);
    cout << "Please Enter Your Gender (M/F): ";
    while (true)
    {
        cin >> gender;
        if (gender == "M" || gender == "m" || gender == "F" || gender == "f" || gender == "male" || gender == "female")
        {
            break;
        }
        else
        {
            cout << "Invalid Entered! ";
            cout << "Please re-enter your gender:";
        }
    }
    if (gender == "M" || gender == "m" || gender == "male")
    {
        gender = "Mr.";
    }
    else
    {
        gender = "Mrs.";
    }
    system("pause");
    system("cls");
    while (true)
    {
        system("Color 05");
        module mo(gender, name);
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
        {
            complete = true;
            mo.module1(gender, name);
            break;
        }
        case 2:
        {
            system("Color 03");
            mo.module2(gender, name);
            break;
        }
        case 3:
        {
            system("Color 04");
            mo.module3();
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            system("Color 03");
            string ans;
            if (complete)
            {
                cout << "Thank you " << gender << name << " for playing Star Wars Wordle!\n";
                cout << "Are you want to exit the program, " << gender << name << "?";
                cin >> ans;
                if (ans == "Y" || ans == "y" || ans == "Yes" || ans == "yes")
                {
                    exit(0);
                }
                else if (ans == "N" || ans == "n" || ans == "no" || ans == "No")
                {
                    system("cls");
                    break;
                }
                else
                {
                    cout << "Invalid input. Please enter either 'Yes' or 'No'." << endl;
                }
            }
            else
            {
                cout << "Are you want to exit the program before playing the game, " << gender << name << "?";
                cin >> ans;
                if (ans == "Y" || ans == "y" || ans == "Yes" || ans == "yes")
                {
                    exit(0);
                }
                else if (ans == "N" || ans == "n" || ans == "no" || ans == "No")
                {
                    system("cls");
                    break;
                }
                else
                {
                    cout << "Invalid input. Please enter either 'Yes' or 'No'." << endl;
                }
            }
            system("pause");
            system("cls");
        }
        default:
        {
            cout << "Invalid Entered!!";
            system("cls");
            break;
        }
            system("pause");
            system("cls");
        }
    }

    system("pause");
    return 0;
}