
#include <iostream>
#include <Windows.h>
#include <iomanip> 
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <algorithm>
#include <conio.h>

void  loading(void);

using namespace std;
void Cong()
{
	char a;

	//system("PAUSE");
	//return 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(h, 12);
	cout << "   .d8888b.                                             888              888 " << endl;
	SetConsoleTextAttribute(h, 14);
	cout << "  d88P  Y88b                                            888              888  " << endl;
	SetConsoleTextAttribute(h, 6);
	cout << "  888    888                                            888              888 " << endl;
	SetConsoleTextAttribute(h, 2);
	cout << "  888         .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d8888b   888  " << endl;
	SetConsoleTextAttribute(h, 3);
	cout << "  888        d88  88b 888  88b d88P88b  888P        88b 888    88K       888 " << endl;
	SetConsoleTextAttribute(h, 5);
	cout << "  888    888 888  888 888  888 888  888 888    .d888888 888     Y8888b.  Y8P" << endl;
	SetConsoleTextAttribute(h, 13);
	cout << "  Y88b  d88P Y88..88P 888  888 Y88b 888 888    888  888 Y88b.       X88     " << endl;
	SetConsoleTextAttribute(h, 11);
	cout << "    Y8888P     Y88P   888  888   Y88888 888    Y888888   Y888   88888P   888 " << endl;
	SetConsoleTextAttribute(h, 8);
	cout << "                                    888                                      " << endl;
	SetConsoleTextAttribute(h, 4);
	cout << "                               Y8b d88P                                     " << endl;
	SetConsoleTextAttribute(h, 3);
	cout << "                                 Y88P          " << endl;
}  //congratulation word

//************** Classes: 
class beginning
{
private:
	string a;
public:
	beginning()
	{
		a = "\n\n\n  WELCOME TO... ";
	}

	beginning(string s)
	{
		a = s;
	}
	void HANGMAN()
	{
		HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		//*************** HANG
		SetConsoleTextAttribute(hCon, 12);
		cout << endl << endl;
		cout << "        HHH\t   HHH     AAAAAAAAA     NNN      NNN GGGGGGGGGGGGGG" << endl;
		cout << "        HHH\t   HHH   AAAA     AAAA   NNN      NNN GGG        GGG" << endl;
		cout << "        HHH\t   HHH  AAAAA     AAAAA  NNNNN    NNN GGG           " << endl;
		cout << "        HHH\t   HHH AAAAAA     AAAAAA NNNNNN   NNN GGG           " << endl;
		cout << "        HHHHHHHHHHHHHH AAAAAAAAAAAAAAAAA NNNNNNN  NNN GGG         " << endl;
		cout << "        HHHHHHHHHHHHHH AAAAAAAAAAAAAAAAA NNN  NNNNNNN GGG    GGGGGGG" << endl;
		cout << "        HHH\t   HHH AAAAAA     AAAAAA NNN   NNNNNN GGG    GG  GGG" << endl;
		cout << "        HHH\t   HHH AAAAAA     AAAAAA NNN    NNNNN GGG        GGG " << endl;
		cout << "        HHH\t   HHH AAAAAA     AAAAAA NNN     NNNN GGGGGGGGGGGGGG " << endl;
		cout << "        HHH\t   HHH AAAAAA     AAAAAA NNN      NNN GGGGGGGGGGGGGG " << endl << endl;
	}
	void MAN()
	{
		HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

		///*********** MAN
		SetConsoleTextAttribute(hCon, 14);
		cout << "                    mm         mm" << "    aaaa  " << "  nn      nn " << endl;
		cout << "                    mmmm     mmmm" << "   aa  aa " << "  nnn     nn " << endl;
		cout << "                    mm  mm mm  mm" << "   aa  a " << "  nn n    nn " << endl;
		cout << "                    mm    mm   mm" << "   aaaaaa " << "  nn  n   nn " << endl;
		cout << "                    mm         mm" << "   aa  aa " << "  nn    n nn " << endl;
		cout << "                    mm         mm" << "   aa  aa " << "  nn     nnn " << endl;

		//************ Choice
		SetConsoleTextAttribute(hCon, 10);
		cout << "\n\n\n\n\t\t\t1. Start ";
		SetConsoleTextAttribute(hCon, 10);
		cout << "              " << "2. Quit" << endl;
		SetConsoleTextAttribute(hCon, 7);
		cout << "\n\n\n\n\t\t\t\t Your Choice: ";

	}

};

class Ending
{
private:
	string word;

public:
	Ending() {
		word = "GameOVER";
	}
	Ending(string a) {
		word = a;
	}
	void print()  /// lets call it when word = "GameOVER";
	{
		cout << endl << word << endl;
	}
	void End1()
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		system("cls");
		SetConsoleTextAttribute(h, 3);
		cout << endl;
		cout << "\t\t>=>    >=>       >>       >==>    >=>    >===>" << endl;
		cout << "\t\t>=>    >=>      >>=>      >> >=>  >=>  >>    >=>" << endl;
		cout << "\t\t>=>    >=>     >> >=>     >=> >=> >=> >=>       " << endl;
		cout << "\t\t>=====>>=>    >=>  >=>    >=>  >=>>=> >=>        " << endl;
		cout << "\t\t>=>    >=>   >=====>>=>   >=>   > >=> >=>   >===>       " << endl;
		cout << "\t\t>=>    >=>  >=>      >=>  >=>    >>=>  >=>    >>       " << endl;
		cout << "\t\t>=>    >=> >=>        >=> >=>     >=>   >====>        " << endl;
		cout << endl;

		SetConsoleTextAttribute(h, 5);
		cout << "\t\t>=>    >=>       >>       >==>    >=>    >===>" << endl;
		cout << "\t\t>=>    >=>      >>=>      >> >=>  >=>  >>    >=>" << endl;
		cout << "\t\t>=>    >=>     >> >=>     >=> >=> >=> >=>       " << endl;
		cout << "\t\t>=====>>=>    >=>  >=>    >=>  >=>>=> >=>        " << endl;
		cout << "\t\t>=>    >=>   >=====>>=>   >=>   > >=> >=>   >===>       " << endl;
		cout << "\t\t>=>    >=>  >=>      >=>  >=>    >>=>  >=>    >>       " << endl;
		cout << "\t\t>=>    >=> >=>        >=> >=>     >=>   >====>        " << endl;
		cout << endl;

		SetConsoleTextAttribute(h, 6);
		cout << "\t\t>=>    >=>       >>       >==>    >=>    >===>" << endl;
		cout << "\t\t>=>    >=>      >>=>      >> >=>  >=>  >>    >=>" << endl;
		cout << "\t\t>=>    >=>     >> >=>     >=> >=> >=> >=>       " << endl;
		cout << "\t\t>=====>>=>    >=>  >=>    >=>  >=>>=> >=>        " << endl;
		cout << "\t\t>=>    >=>   >=====>>=>   >=>   > >=> >=>   >===>       " << endl;
		cout << "\t\t>=>    >=>  >=>      >=>  >=>    >>=>  >=>    >>       " << endl;
		cout << "\t\t>=>    >=> >=>        >=> >=>     >=>   >====>        " << endl;
		cout << endl;

		SetConsoleTextAttribute(h, 12);
		cout << "\t\t>=>    >=>       >>       >==>    >=>    >===>" << endl;
		cout << "\t\t>=>    >=>      >>=>      >> >=>  >=>  >>    >=>" << endl;
		cout << "\t\t>=>    >=>     >> >=>     >=> >=> >=> >=>       " << endl;
		cout << "\t\t>=====>>=>    >=>  >=>    >=>  >=>>=> >=>        " << endl;
		cout << "\t\t>=>    >=>   >=====>>=>   >=>   > >=> >=>   >===>       " << endl;
		cout << "\t\t>=>    >=>  >=>      >=>  >=>    >>=>  >=>    >>       " << endl;
		cout << "\t\t>=>    >=> >=>        >=> >=>     >=>   >====>        " << endl;

		SetConsoleTextAttribute(h, 7);
		cout << "\n\tThank You For Playing HangMan !" << endl;
		cout << "\tPress Any Key to Exist ... ";
	}

};

class G1
{
private:
	string word;
public:
	int Game(string w) //Missing Letters
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		// Keep track of Missing 

		int missing = 0;
		int guessed = 0;
		string show = w;

		for (int i = 0; i < show.length(); i++)
		{
			show[i] = '*';
		}

		//	do  // when all the letters are guessed the while loop must stop

		while (guessed < w.length())
		{
			while ((missing < 6))
			{

				cout << "\n Missing = " << missing;
				cout << "\n Enter a letter ";
				cout << show << " : ";
				char letter;
				cin >> letter;
				if (letter == 'A' || 'B' || 'C' || 'D' || 'E' || 'F' || 'G' || 'H' || 'I' || 'J' || 'K' || 'L' || 'M' || 'N' || 'O' || 'P' || 'Q' || 'R' || 'S' || 'T' || 'U' || 'V' || 'W' || 'X' || 'Y' || 'Z')
				{
					letter = tolower(letter);
				}
				cout << endl;

				//how to figure out the missing :
				// guess incorrect	
				//geuss correct 
				bool goodGuess = false;
				bool duplicate = false;
				for (int i = 0; i < w.length(); i++)

					if (letter == w[i])

						if (show[i] == w[i])
						{
							cout << "\n\t\t\t" << letter << " is already written." << endl;;
							// display this 
							duplicate = true;
							break;
						}
						else
						{
							show[i] = w[i];
							guessed++;
							goodGuess = true;
						}
				if (duplicate)
					continue;


				if (!goodGuess)
				{
					cout << "\t\t\t" << letter << " is not in the word \n";
					missing++;

					if (missing == 1)
					{
						cout << endl << endl;
						cout << "   _________" << endl;
						cout << "   |        |" << endl;
						cout << "   |        O   " << endl;
						cout << "   |      O   O  " << endl;
						cout << "   |        O  " << endl;
						cout << "   |        |    " << endl;
						cout << "   |        |       " << endl;
						cout << "   |        |    " << endl;
						cout << "   |        |   " << endl;
						cout << "   |            " << endl;
						cout << "   |            " << endl;
						cout << " __|__          _" << endl;

					}
					else if (missing == 2)
					{
						cout << endl << endl;
						cout << "   _________" << endl;
						cout << "   |        |" << endl;
						cout << "   |        O   " << endl;
						cout << "   |      O   O  " << endl;
						cout << "   |        O  " << endl;
						cout << "   |        |    " << endl;
						cout << "   |        |\\      " << endl;
						cout << "   |        | \\  " << endl;
						cout << "   |        |    " << endl;
						cout << "   |            " << endl;
						cout << "   |            " << endl;
						cout << " __|__          _" << endl;

					}
					else if (missing == 3)
					{
						cout << endl << endl;
						cout << "   _________" << endl;
						cout << "   |        |" << endl;
						cout << "   |        O   " << endl;
						cout << "   |      O   O  " << endl;
						cout << "   |        O  " << endl;
						cout << "   |        |    " << endl;
						cout << "   |      / |\\      " << endl;
						cout << "   |     /  | \\  " << endl;
						cout << "   |        |   " << endl;
						cout << "   |            " << endl;
						cout << "   |            " << endl;
						cout << " __|__          _" << endl;

					}
					else if (missing == 4)
					{
						cout << endl << endl;
						cout << "   _________" << endl;
						cout << "   |        |" << endl;
						cout << "   |        O   " << endl;
						cout << "   |      O   O  " << endl;
						cout << "   |        O  " << endl;
						cout << "   |        |    " << endl;
						cout << "   |      / | \      " << endl;
						cout << "   |     /  |  \  " << endl;
						cout << "   |        |     " << endl;
						cout << "   |      /      " << endl;
						cout << "   |     /       " << endl;
						cout << " __|__          _" << endl;

					}
					else if (missing == 5)
					{
						cout << endl << endl;
						cout << "   _________" << endl;
						cout << "   |        |" << endl;
						cout << "   |        O   " << endl;
						cout << "   |      O   O  " << endl;
						cout << "   |        O  " << endl;
						cout << "   |        |    " << endl;
						cout << "   |      / |\\      " << endl;
						cout << "   |     /  | \\  " << endl;
						cout << "   |        |     " << endl;
						cout << "   |      /   \   " << endl;
						cout << "   |     /     \  " << endl;
						cout << " __|__          _" << endl;

					}

					else if (missing == 6)
					{
						SetConsoleTextAttribute(h, 12);
						system("cls");
						cout << endl << endl;
						cout << endl << endl;
						cout << "\t\t     _________" << endl;
						cout << "\t\t     |        |" << endl;
						cout << "\t\t     |        O   " << endl;
						cout << "\t\t     |      Ov vO  " << endl;
						cout << "\t\t     |        O  " << endl;
						cout << "\t\t     |        |    " << endl;
						cout << "\t\t     |      / |\\      " << endl;
						cout << "\t\t     |     /  | \\  " << endl;
						cout << "\t\t     |        |     " << endl;
						cout << "\t\t     |      /   \   " << endl;
						cout << "\t\t     |     /     \  " << endl;
						cout << "\t\t   __|__          _" << endl;
						cout << "\n  \t\t YOU  ARE  HANGED! " << endl;
						SetConsoleTextAttribute(h, 10);
						cout << endl << "                                                                      " << endl;
						cout << "                                                                      " << endl;
						cout << "    GGGGGGGGGGGGGG     AAAAAAAAA     NNN      NNN      NNN OOOOOOOOOOO  " << endl;
						cout << "    GGG        GGG   AAAA     AAAA   NNN      NNN      NNN OO       OO  " << endl;
						cout << "    GGG             AAAAA     AAAAA  NNNNN    NNN    NNNNN OO       OO  " << endl;
						cout << "    GGG            AAAAAA     AAAAAA NNNNNN   NNN   NNNNNN OO           " << endl;
						cout << "    GGG            AAAAAAAAAAAAAAAAA NNNNNNN  NNN  NNNNNNN OOOOOOO      " << endl;
						cout << "    GGG    GGGGGGG AAAAAAAAAAAAAAAAA NNN   NNNNNNNNN   NNN OOOOOOO      " << endl;
						cout << "    GGG    GG  GGG AAAAAA     AAAAAA NNN    NNNNNNN    NNN OO           " << endl;
						cout << "    GGG        GGG AAAAAA     AAAAAA NNN     NNNNN     NNN OO       OO  " << endl;
						cout << "    GGGGGGGGGGGGGG AAAAAA     AAAAAA NNN      NNN      NNN OO       OO  " << endl;
						cout << "    GGGGGGGGGGGGGG AAAAAA     AAAAAA NNN       N       NNN OOOOOOOOOOO  " << endl << endl;

						cout << "    QQQQQQQQQQQQQQ NNN               NNN OOOOOOOOOOO  RRRRRRRRRRRR      " << endl;
						cout << "    QQQQQQQQQQQQQQ NNN               NNN OO       OO  RRR      RRR      " << endl;
						cout << "    QQQ        QQQ NNNNN           NNNNN OO       OO  RRR      RRR      " << endl;
						cout << "    QQQ        QQQ NNNNNN         NNNNNN OO           RRR      RRR      " << endl;
						cout << "    QQQ        QQQ NNNNNNN       NNNNNNN OOOOOOO      RRR      RRR      " << endl;
						cout << "    QQQ        QQQ       NNNNNNNNN       OOOOOOO      RRRRRRRRRRRR      " << endl;
						cout << "    QQQ        QQQ        NNNNNNN        OO           RRRR RRRR         " << endl;
						cout << "    QQQ        QQQ         NNNNN         OO       OO  RRR    RRRRR      " << endl;
						cout << "    QQQQQQQQQQQQQQ          NNN          OO       OO  RRR      RRRRR    " << endl;
						cout << "    QQQQQQQQQQQQQQ           N           OOOOOOOOOOO  RRR        RRRRR  " << endl;


					}
				}
				else if (guessed == w.length())
				{
					SetConsoleTextAttribute(h, 7);
					cout << "\n\t\t\t The word was : " << w << endl;
					break;
				}
			}

		}
		Cong();


		return missing;
	}
};

//************** Functions:
void drawing()
{
	cout << endl << endl;
	cout << "   _________" << endl;
	cout << "   |        |" << endl;
	cout << "   |" << endl;
	cout << "   |" << endl;
	cout << "   |" << endl;
	cout << "   |" << endl;
	cout << "   |" << endl;
	cout << "   |" << endl;
	cout << " __|___" << endl;
}

void hangWord()
{
	cout << endl << endl;
	cout << "        HHH\t   HHH     AAAAAAAAA     NNN      NNN GGGGGGGGGGGGGG" << endl;
	cout << "        HHH\t   HHH   AAAA     AAAA   NNN      NNN GGG        GGG" << endl;
	cout << "        HHH\t   HHH  AAAAA     AAAAA  NNNNN    NNN GGG           " << endl;
	cout << "        HHH\t   HHH AAAAAA     AAAAAA NNNNNN   NNN GGG           " << endl;
	cout << "        HHHHHHHHHHHHHH AAAAAAAAAAAAAAAAA NNNNNNN  NNN GGG         " << endl;
	cout << "        HHHHHHHHHHHHHH AAAAAAAAAAAAAAAAA NNN  NNNNNNN GGG    GGGGGGG" << endl;
	cout << "        HHH\t   HHH AAAAAA     AAAAAA NNN   NNNNNN GGG    GG  GGG" << endl;
	cout << "        HHH\t   HHH AAAAAA     AAAAAA NNN    NNNNN GGG        GGG " << endl;
	cout << "        HHH\t   HHH AAAAAA     AAAAAA NNN     NNNN GGGGGGGGGGGGGG " << endl;
	cout << "        HHH\t   HHH AAAAAA     AAAAAA NNN      NNN GGGGGGGGGGGGGG " << endl << endl;

}

/*
int Game(string w) //Missing Letters
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	// Keep track of Missing

	int missing = 0;
	int guessed = 0;
	string show = w;

	for (int i = 0; i < show.length(); i++)
	{
		show[i] = '*';
	}

	//	do  // when all the letters are guessed the while loop must stop

	while (guessed < w.length())
	{
		while ((missing < 6))
		{

			cout << "\n Missing = " << missing;
			cout << "\n Enter a letter ";
			cout << show << " : ";
			char letter;
			cin >> letter;
			if (letter == 'A' || 'B' || 'C' || 'D' || 'E' || 'F' || 'G' || 'H' || 'I' || 'J' || 'K' || 'L' || 'M' || 'N' || 'O' || 'P' || 'Q' || 'R' || 'S' || 'T' || 'U' || 'V' || 'W' || 'X' || 'Y' || 'Z')
			{
				letter = tolower(letter);
			}
			cout << endl;

			//how to figure out the missing :
			// guess incorrect
			//geuss correct
			bool goodGuess = false;
			bool duplicate = false;
			for (int i = 0; i < w.length(); i++)

				if (letter == w[i])

					if (show[i] == w[i])
					{
						cout << "\n\t\t\t" << letter << " is already written." << endl;;
						// display this
						duplicate = true;
						break;
					}
					else
					{
						show[i] = w[i];
						guessed++;
						goodGuess = true;
					}
			if (duplicate)
				continue;


			if (!goodGuess)
			{
				cout << "\t\t\t" << letter << " is not in the word \n";
				missing++;

				if (missing == 1)
				{
					cout << endl << endl;
					cout << "   _________" << endl;
					cout << "   |        |" << endl;
					cout << "   |        O" << endl;
					cout << "   |" << endl;
					cout << "   |" << endl;
					cout << "   |" << endl;
					cout << " __|___" << endl;
				}
				else if (missing == 2)
				{
					cout << endl << endl;
					cout << "   _________" << endl;
					cout << "   |        |" << endl;
					cout << "   |        O" << endl;
					cout << "   |        |" << endl;
					cout << "   |" << endl;
					cout << "   |" << endl;
					cout << " __|___" << endl;
				}
				else if (missing == 3)
				{
					cout << endl << endl;
					cout << "   _________" << endl;
					cout << "   |        |" << endl;
					cout << "   |        O" << endl;
					cout << "   |        |\\" << endl;
					cout << "   |" << endl;
					cout << "   |" << endl;
					cout << " __|___" << endl;
				}
				else if (missing == 4)
				{
					cout << endl << endl;
					cout << "   _________" << endl;
					cout << "   |        |" << endl;
					cout << "   |        O" << endl;
					cout << "   |       /|\\" << endl;
					cout << "   |" << endl;
					cout << "   |" << endl;
					cout << " __|___" << endl;
				}
				else if (missing == 5)
				{
					cout << endl << endl;
					cout << "   _________" << endl;
					cout << "   |        |" << endl;
					cout << "   |        O" << endl;
					cout << "   |       /|\\" << endl;
					cout << "   |       /" << endl;
					cout << "   |" << endl;
					cout << " __|___" << endl;
				}

				else if (missing == 6)
				{
					system("cls");
					cout << endl << endl;
					cout << endl << endl;
					SetConsoleTextAttribute(h, 12);
					cout << endl << endl;
					cout << "\t    _________" << endl;
					cout << "\t   |        |" << endl;
					cout << "\t   |        O" << endl;
					cout << "\t   |       /|\\" << endl;
					cout << "\t   |        /\\" << endl;
					cout << "\t   |" << endl;
					cout << "\t __|___" << endl;


					cout << "\n  \t\t YOU  ARE  HANGED! " << endl;
					SetConsoleTextAttribute(h, 10);
					cout << endl << "                                                                      " << endl;
					cout << "                                                                      " << endl;
					cout << "    GGGGGGGGGGGGGG     AAAAAAAAA     NNN      NNN      NNN OOOOOOOOOOO  " << endl;
					cout << "    GGG        GGG   AAAA     AAAA   NNN      NNN      NNN OO       OO  " << endl;
					cout << "    GGG             AAAAA     AAAAA  NNNNN    NNN    NNNNN OO       OO  " << endl;
					cout << "    GGG            AAAAAA     AAAAAA NNNNNN   NNN   NNNNNN OO           " << endl;
					cout << "    GGG            AAAAAAAAAAAAAAAAA NNNNNNN  NNN  NNNNNNN OOOOOOO      " << endl;
					cout << "    GGG    GGGGGGG AAAAAAAAAAAAAAAAA NNN   NNNNNNNNN   NNN OOOOOOO      " << endl;
					cout << "    GGG    GG  GGG AAAAAA     AAAAAA NNN    NNNNNNN    NNN OO           " << endl;
					cout << "    GGG        GGG AAAAAA     AAAAAA NNN     NNNNN     NNN OO       OO  " << endl;
					cout << "    GGGGGGGGGGGGGG AAAAAA     AAAAAA NNN      NNN      NNN OO       OO  " << endl;
					cout << "    GGGGGGGGGGGGGG AAAAAA     AAAAAA NNN       N       NNN OOOOOOOOOOO  " << endl << endl;

					cout << "    QQQQQQQQQQQQQQ NNN               NNN OOOOOOOOOOO  RRRRRRRRRRRR      " << endl;
					cout << "    QQQQQQQQQQQQQQ NNN               NNN OO       OO  RRR      RRR      " << endl;
					cout << "    QQQ        QQQ NNNNN           NNNNN OO       OO  RRR      RRR      " << endl;
					cout << "    QQQ        QQQ NNNNNN         NNNNNN OO           RRR      RRR      " << endl;
					cout << "    QQQ        QQQ NNNNNNN       NNNNNNN OOOOOOO      RRR      RRR      " << endl;
					cout << "    QQQ        QQQ       NNNNNNNNN       OOOOOOO      RRRRRRRRRRRR      " << endl;
					cout << "    QQQ        QQQ        NNNNNNN        OO           RRRR RRRR         " << endl;
					cout << "    QQQ        QQQ         NNNNN         OO       OO  RRR    RRRRR      " << endl;
					cout << "    QQQQQQQQQQQQQQ          NNN          OO       OO  RRR      RRRRR    " << endl;
					cout << "    QQQQQQQQQQQQQQ           N           OOOOOOOOOOO  RRR        RRRRR  " << endl;


				}
			}
			else if (guessed == w.length())
			{
				SetConsoleTextAttribute(h, 7);
				cout << "\n\t\t\t The word was : " << w << endl;
				break;
			}
		}

	}
	Cong();


		return missing;
}
*/

void check(string word)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	if (word.length() <= 30 || word.length() == 2)
	{
		SetConsoleTextAttribute(h, 12);
		hangWord();
		SetConsoleTextAttribute(h, 7);
		string show = word;
		for (int i = 0; i < show.length(); i++)
		{
			show[i] = '*';
		}
		cout << "\n\t\t\t Now, Let player 2 play! " << endl;
		cout << "\t\t\t -----------------------";
		SetConsoleTextAttribute(h, 11);
		SetConsoleTextAttribute(h, 7);
		cout << "\n\n The word has " << word.length() << " characters. " << endl;
		SetConsoleTextAttribute(h, 7);
		G1 p;
		cout << "\n\t\t\t You have missed : " << p.Game(word) << endl;
		//	cout << "\t\t\ttimes to guess the word >>>>>" << endl;			
	}
	else
	{
		cout << "\n\t\t********************************************************" << endl;
		cout << "\t\t*        The word is too long !! Try again...          *" << endl;
		cout << "\t\t********************************************************" << endl;
	}
}

void ifCon()
{
	system("cls");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 12);
	cout << endl << endl;
	hangWord();
	SetConsoleTextAttribute(h, 10);
	cout << "\n \t\tPress a number to select an option: " << endl;
	cout << " \t\t1. One Player " << endl;
	cout << " \t\t2. Two Player " << endl;
	cout << " \t\t3. Exit" << endl;

	int a;
	cout << "\n\t\tOption :";
	cin >> a;

	//1. One Player
	if (a == 1)
	{
		//cout << "One Player";
		//cout << endl << "Categories";
	}
	//2. Two Player

	if (a == 2)
	{
		char a;
		do {
			system("cls");
			SetConsoleTextAttribute(h, 12);
			hangWord();
			SetConsoleTextAttribute(h, 14);
			cout << "\n\n 2 Players: \n ";
			SetConsoleTextAttribute(h, 11);
			//drawing();
			string word;
			cout << "\n #Type a word while player 2 turns away:";
			// SetConsoleTextAttribute(h, 0);		
			cin >> word;
			//	word = tolower(word);
			do {
				system("cls");
				transform(word.begin(), word.end(), word.begin(), ::tolower);
				check(word);

			} while (word.length() > 30 || word.length() < 2);
			SetConsoleTextAttribute(h, 48);
			cout << endl << endl << endl << endl << endl << "  Would you like to play again ? (Y = yes , N = no) ";
			cin >> a;
			SetConsoleTextAttribute(h, 1);

		} while (a == 'y' || a == 'Y');
	}

	//Exist
	else
		if (a == 3)
		{
			//Class of End:
			Ending pp;
			pp.print();
			pp.End1();
		}

}

//************** MAIN:

int main()
{

	system("cls");
	system("color 3");
	loading();
	system("cls");
	//_getch();

	beginning p("\n\n\n  WELCOME TO...");
	p.HANGMAN();
	p.MAN();

	int a;
	cin >> a;

	//start :
	if (a == 1)
		ifCon();

	//exist
	else
		if (a == 2)
		{
			//Class of End:
			Ending pp("GameOver");
			pp.End1();
		}


	system("pause > null");
	return 0;
}

void loading(void)

{
	cout << "\n\n\n\n\n   \t\t\t\tLOADING \n";
	for (int i = 0; i < 80; i++)
	{
		cout << "\xb1";
		for (long j = 0; j < 36000000; j++);
	}
}
