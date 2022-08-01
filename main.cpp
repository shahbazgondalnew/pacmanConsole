#include <iostream>
#include <windows.h>
#include <fstream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{


	ifstream file("dell.txt");//file handling
	char ary[11][17];

	for (int k = 0; k <= 10; k++)
	{
		for (int l = 0; l <= 16; l++)
		{
			file >> ary[k][l];
		}
	}


	
	file.end;//file handling

	
	char opr = '0';
	int pii;
	int pjj;

	
	int e1i = 1;
	int e1j = 1;
	int e2i = 8;
	int e2j = 12;
	char mainopr;
	bool continu = true;
	
	bool noloss = false;
	int count = 0;
	int warning = 0;
	bool fore1 = false;
	bool fore2 = false;
	int score = 0;
	int life = 3;
	string name;
	while (mainopr = 'p')
	{

		cout << "                     P     " << endl;
		Sleep(112);
		system("cls");
		cout << "                     P A     " << endl;
		Sleep(222);
		system("cls");
		cout << "                     P A C    " << endl;
		Sleep(332);
		system("cls");
		cout << "                     P A C M     " << endl;
		Sleep(122);
		system("cls");
		cout << "                     P A C M A     " << endl;
		Sleep(332);
		system("cls");
		cout << "                     P A C M A N     " << endl;
		Sleep(1332);
		cout << "                     L O A D I N G     " << endl;
		cout << "||||||  10%" << endl;
		Sleep(132);
		system("cls");
		cout << "||||||||||  15%" << endl;
		Sleep(332);
		system("cls");
		cout << "|||||||||||||||  25%" << endl;
		Sleep(1132);
		system("cls");
		cout << "|||||||||||||||||||||||||  35%" << endl;
		Sleep(3132);
		system("cls");
		cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 80%    " << endl;
		Sleep(4132);
		system("cls");
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 90%    " << endl;

		Sleep(3132);
		system("cls");
		cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100%  O K    " << endl;
		Sleep(4132);
		system("cls");
		cout << "1- GAME" << endl; Sleep(332);
		cout << "2- ABOUT" << endl; Sleep(332);
		cout << "3- HOW TO PLAY" << endl; Sleep(332);
		cout << "x- Cancal" << endl; Sleep(332);
		cin >> mainopr;
		if (mainopr == '1')
		{
			for (int k = 0; k <= 10; k++)
			{
				for (int l = 0; l <= 16; l++)
				{
					cout << ary[k][l];
				}
				cout << endl;

			}
			cout << "Enter Your Name " << endl;
			cin >> name;
			while (continu == true)
			{
				

				
				cin >> opr;
				if ((opr == 'x') || (life<0) || (score >= 228))

				{
					int numH[5];
					ifstream Hfile;
					Hfile.open("data.txt");
					for (int i = 0; i<5; i++)
					{
						Hfile >> numH[i];

					}
					int i, j, first, tempH;
					for (i = 5; i > 0; i--)
					{
						first = 0;                 // initialize to subscript of first element
						for (j = 1; j <= i; j++)   // locate smallest between positions 1 and i.
						{
							if (numH[j] < numH[first])
								first = j;
						}
						tempH = numH[first];   // Swap smallest found with element in position i.
						numH[first] = numH[i];
						numH[i] = tempH;
					}
					cout << "High Score" << endl;
					int numH2[5];
					ifstream H2file;
					Hfile.open("data.txt");
					for (int i = 0; i<5; i++)
					{
						H2file >> numH2[i];

					}
					
					for (int lil = 5; lil > 0; lil--)
					{
						first = score;                 // initialize to subscript of first element
						for (int ljl = 1; ljl <= i; ljl++)   // locate smallest between positions 1 and i.
						{
							if (numH2[ljl] < numH2[first])
								first = ljl;
						}
						tempH = numH2[first];   // Swap smallest found with element in position i.
						numH2[first] = numH2[lil];
						numH2[lil] = tempH;
					}
						for (int lil = 0; lil<5; lil++)
						{
							H2file >> numH2[lil];
							cout << numH2[lil] << " " << endl;
						}

					cout << name << " score " <<score<< endl;
					continu = false;
				}//game check and high score

				if (noloss == true)
				{
					count++;
				}
				if (count > 6)
				{
					noloss = false;

				}
				for (int pi = 0; pi <= 10; pi++)//pacman starting
				{
					for (int pj = 0; pj <= 16; pj++)
					{
						if (ary[pi][pj] == 'P')
						{


							if (opr == 'a')//left movement
							{
								if (ary[pi][pj - 1] == '0')
								{
									warning++;
								}

								else if (ary[pi][pj - 1] != '0')//!0
								{

									if (ary[pi][pj - 1] == ' ')
									{

										ary[pi][pj] = ' ';
										ary[pi][pj - 1] = 'P';
									}
									else if (ary[pi][pj - 1] == '.')
									{
										score += 2;
										ary[pi][pj] = ' ';
										ary[pi][pj - 1] = 'P';
									}
									else if (ary[pi][pj - 1] == 'L')
									{
										ary[pi][pj] = ' ';
										ary[pi][pj - 1] = 'P';
										score += 10;
										noloss = true;
									}
								}
								break;

							}
							else if (opr == 's')//down
							{
								if (ary[pi + 1][pj] == '0')
								{
									warning++;
								}
								else if (ary[pi + 1][pj] != '0')
								{
									if (ary[pi + 1][pj] == '.')
									{
										score += 2;
										ary[pi][pj] = ' ';
										ary[pi + 1][pj] = 'P';
									}
									if (ary[pi + 1][pj] == ' ')
									{

										ary[pi][pj] = ' ';
										ary[pi + 1][pj] = 'P';
									}

									else if (ary[pi + 1][pj] == 'L')
									{
										score += 10;
										noloss = true;
										ary[pi][pj] = ' ';
										ary[pi + 1][pj] = 'P';
									}
								}
								break;
							}
							else if (opr == 'd')//right
							{
								if (ary[pi][pj + 1] == '0')
								{
									warning++;
								}
								else if (ary[pi][pj + 1] != '0')
								{
									if (ary[pi][pj + 1] == '.')
									{
										score += 2;
										ary[pi][pj] = ' ';
										ary[pi][pj + 1] = 'P';
									}
									else if (ary[pi][pj + 1] == ' ')
									{

										ary[pi][pj] = ' ';
										ary[pi][pj + 1] = 'P';
									}
									else if (ary[pi][pj + 1] == 'L')
									{
										score += 10;
										noloss = true;
										ary[pi][pj] = ' ';
										ary[pi][pj + 1] = 'P';
									}
								}
								break;

							}
							else if (opr == 'w')//ip
							{
								if (ary[pi - 1][pj] == '0')
								{
									warning++;
								}
								else if (ary[pi - 1][pj] != '0')
								{
									if (ary[pi - 1][pj] == '.')
									{
										score += 2;
										ary[pi][pj] = ' ';
										ary[pi - 1][pj] = 'P';
									}
									else if (ary[pi - 1][pj] == ' ')
									{

										ary[pi][pj] = ' ';
										ary[pi - 1][pj] = 'P';
									}
									else if (ary[pi - 1][pj] == 'L')
									{
										score += 10;
										noloss = true;
										ary[pi][pj] = ' ';
										ary[pi - 1][pj] = 'P';
									}
								}
								break;
							}
						}

					}
				}

				if (fore1 == false)//no enemy 1 movement
				{

					for (int k = 0; k <= 10; k++)
					{
						for (int l = 0; l <= 16; l++)
						{
							if (ary[k][l] == 'P')
							{
								pii = k;
								pjj = l;


							}
						}

					}

					if (pii > e1i)
					{
						if ((e1i + 1 == pii) && (e1j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}
						}
						if ((e1i - 1 == pii) && (e1j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;
							}
						}
						if ((e1i == pii) && (e1j + 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}
						}
						if ((e1i == pii) && (e1j - 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}
						}
						if (ary[e1i + 1][e1j] == '0')
						{



							if (ary[e1i][e1j + 1] == '.')
							{
								e1j++;
							}
							else if (ary[e1i][e1j + 1] == ' ')
							{
								e1j++;
							}
							else if (ary[e1i][e1j + 1] == 'L')
							{
								e1j++;
							}

						}
						else if (ary[e1i + 1][e1j] != '0')
						{

							if (ary[e1i + 1][e1j] == ' ')
							{
								e1i++;
							}
							else if (ary[e1i + 1][e1j] == 'L')
							{
								e1i++;
							}
							else if (ary[e1i + 1][e1j] == '.')
							{
								e1i++;
							}

						}

					}
					else if (pii < e1i)
					{
						if ((e1i + 1 == pii) && (e1j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}

						}
						if ((e1i - 1 == pii) && (e1j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}
						}
						if ((e1i == pii) && (e1j + 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}
						}
						if ((e1i == pii) && (e1j - 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}
						}
						if (ary[e1i - 1][e1j] == '0')
						{



							if (ary[e1i][e1j + 1] == '.')
							{
								e1j++;
							}
							else if (ary[e1i][e1j + 1] == ' ')
							{
								e1j++;
							}
							else if (ary[e1i][e1j + 1] == 'L')
							{
								e1j++;
							}

						}
						else if (ary[e1i - 1][e1j] != '0')
						{

							if (ary[e1i - 1][e1j] == ' ')
							{
								e1i--;
							}
							else if (ary[e1i - 1][e1j] == 'L')
							{
								e1i--;
							}
							else if (ary[e1i - 1][e1j] == '.')
							{
								e1i--;
							}

						}
					}
					else if (pii == e1i)
					{
						if ((e1i + 1 == pii) && (e1j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}

						}
						if ((e1i - 1 == pii) && (e1j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}
						}
						if ((e1i == pii) && (e1j + 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}
						}
						if ((e1i == pii) && (e1j - 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore1 = true;

							}
						}

						if (pjj > e1j)
						{
							if (ary[e1i][e1j + 1] != '0')
							{

								if (ary[e1i][e1j + 1] == ' ')
								{
									e1j++;

								}
								else if (ary[e1i][e1j + 1] == '.')
								{
									e1j++;

								}



							}
							else if (ary[e1i][e1j + 1] == '0')
							{
								if (ary[e1i + 1][e1j] != '0')
								{
									/*if (ary[e1i + 1][e1j] == 'M')
									{
									life--;
									ary[8][6] = 'P';
									ary[e1i + 1][e1j] = '.';
									e1i++;
									}*/
									if (ary[e1i + 1][e1j] == ' ')
									{
										e1i++;
									}
									else if (ary[e1i + 1][e1j] == ' ')
									{
										e1i++;
									}
								}
							}
						}
						else if (pjj < e1j)
						{
							if (ary[e1i][e1j - 1] != '0')
							{
								/*if (ary[e1i][e1j - 1] == 'M')
								{
								ary[e1i][e1j - 1] = '.';
								life--;
								e1j--;
								ary[8][6] = 'P';
								}*/
								if (ary[e1i][e1j - 1] == ' ')
								{
									e1j--;

								}
								else if (ary[e1i][e1j + 1] == '.')
								{
									e1j--;

								}
								else if (ary[e1i][e1j - 1] == 'M')
								{
									e1j--;

								}


							}
							else if (ary[e1i][e1j + 1] == '0')
							{
								if (ary[e1i - 1][e1j] != '0')
								{

									if (ary[e1i - 1][e1j] == ' ')
									{
										e1i--;
									}
									else if (ary[e1i - 1][e1j] == ' ')
									{
										e1i--;
									}
								}
							}
						}
					}

				}///2222222222222222222222222222222222222222222 s t a r t
				if (fore2 == false)
				{
					for (int k = 0; k <= 10; k++)
					{
						for (int l = 0; l <= 16; l++)
						{
							if (ary[k][l] == 'P')
							{
								pii = k;
								pjj = l;


							}
						}

					}

					if (pii > e2i)
					{
						if ((e2i + 1 == pii) && (e2j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;

							}

						}
						if ((e2i - 1 == pii) && (e2j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;
							}

						}
						if ((e2i == pii) && (e2j + 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;
							}

						}
						if ((e2i == pii) && (e2j - 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;
							}

						}
						if (ary[e2i + 1][e2j] == '0')
						{

							if (ary[e2i][e2j + 1] == 'M')
							{
								e2j++;
							}

							else if (ary[e2i][e2j + 1] == '.')
							{
								e2j++;
							}
							else if (ary[e2i][e2j + 1] == ' ')
							{
								e2j++;
							}
							else if (ary[e2i][e2j + 1] == 'L')
							{
								e2j++;
							}

						}
						else if (ary[e2i + 1][e2j] != '0')
						{

							if (ary[e2i + 1][e2j] == ' ')
							{
								e2i++;
							}
							else if (ary[e2i + 1][e2j] == 'L')
							{
								e2i++;
							}
							else if (ary[e2i + 1][e2j] == '.')
							{
								e2i++;
							}

						}

					}
					else if (pii < e2i)
					{
						if ((e2i + 1 == pii) && (e2j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;
							}

						}
						if ((e2i - 1 == pii) && (e2j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;
							}

						}
						if ((e2i == pii) && (e2j + 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;
							}

						}
						if ((e2i == pii) && (e2j - 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;
							}

						}
						if (ary[e2i - 1][e2j] == '0')
						{

							if (ary[e2i][e2j + 1] == 'M')
							{
								e2j++;
							}

							else if (ary[e2i][e2j + 1] == '.')
							{
								e2j++;
							}
							else if (ary[e2i][e2j + 1] == ' ')
							{
								e2j++;
							}
							else if (ary[e2i][e2j + 1] == 'L')
							{
								e2j++;
							}

						}
						else if (ary[e2i - 1][e2j] != '0')
						{

							if (ary[e2i - 1][e2j] == ' ')
							{
								e2i--;
							}
							else if (ary[e2i - 1][e2j] == 'L')
							{
								e2i--;
							}
							else if (ary[e2i - 1][e2j] == '.')
							{
								e2i--;
							}

						}
					}
					else if (pii == e2i)
					{
						if ((e2i + 1 == pii) && (e2j == pjj))
						{
							if (noloss == false)
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;
							}


						}
						if ((e2i - 1 == pii) && (e2j == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;


							}
						}
						if ((e2i == pii) && (e2j + 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;


							}
						}
						if ((e2i == pii) && (e2j - 1 == pjj))
						{
							if (noloss == false)
							{

								life--;
								ary[pii][pjj] = ' ';
								ary[8][6] = 'P';
							}
							else if (noloss == true)
							{
								life++;
								ary[pii][pjj] = 'P';
								fore2 = true;


							}
						}


						if (pjj > e2j)
						{
							if (ary[e2i][e2j + 1] != '0')
							{

								if (ary[e2i][e2j + 1] == ' ')
								{
									e2j++;

								}
								else if (ary[e2i][e2j + 1] == '.')
								{
									e2j++;

								}
								else if (ary[e2i][e2j + 1] == 'M')
								{
									e2j++;

								}

								//adddinfsfgfdfghgfd
							}
							else if (ary[e2i][e2j + 1] == '0')
							{
								if (ary[e2i + 1][e2j] != '0')
								{

									if (ary[e2i + 1][e2j] == ' ')
									{
										e2i++;
									}
									else if (ary[e2i + 1][e2j] == ' ')
									{
										e2i++;
									}
								}
							}
						}
						else if (pjj < e2j)
						{
							if (ary[e2i][e2j - 1] != '0')
							{

								if (ary[e2i][e2j - 1] == ' ')
								{
									e2j--;

								}
								else if (ary[e2i][e2j + 1] == '.')
								{
									e2j--;

								}



							}
							else if (ary[e2i][e2j + 1] == '0')
							{
								if (ary[e2i - 1][e2j] != '0')
								{

									if (ary[e2i - 1][e2j] == ' ')
									{
										e2i--;
									}
									else if (ary[e2i - 1][e2j] == ' ')
									{
										e2i--;
									}
								}
							}
						}
					}
				}

				system("cls");


				for (int finali = 0; finali <= 10; finali++)
				{
					for (int finalj = 0; finalj <= 16; finalj++)
					{
                        if ((finalj == e1j) && (finali == e1i))
						{
							if (fore1 == false)
							{
								cout << "M";
							}
						}
                        if ((finalj == e2j) && (finali == e2i))
						{

							if (fore2 == false)
							{

								cout << "M";
							}
                        }

						else
						{
							
							cout << ary[finali][finalj];
						}






					}
					cout << endl;

				}



				if (noloss == true)
				{

					cout << " No lossing Mode" << endl;
				}
				else if (noloss == false)
				{
					cout << "normal mode " << endl;
				}
				cout << warning << " Worng " << endl;
				cout << life << " Life " << endl;
				cout << score << " Score " << endl;



			}



		}
		else if (mainopr == '2')
		{
			cout << "Credit" << endl;
			Sleep(1500);
			cout << "SHAHBAZ GONDAL" << endl;
			Sleep(1500);
			cout << "ABDUL QADIR" << endl;
			Sleep(1500);
			cout << "ALI AHMAD" << endl;
		}
		else if (mainopr == '3')
		{
			cout << "s for down movement of PACMAN " << endl;
			cout << "w for up movement of PACMAN " << endl;
			cout << "d for right movement of PACMAN " << endl;
			cout << "a for left movement of PACMAN " << endl;
			Sleep(1500);
			cout << "AND PRESSING ENTER " << endl;
			Sleep(1500);
			cout << "P is PACMAN" << endl;
			cout << "0 is BOUNDARY" << endl;
			cout << "        You CAN'T mover it " << endl;
			cout << "M is Enemy" << endl;
			cout << "        It will kill you if you 1 positon beyond from it in any direction" << endl;
			cout << "L is PowerPills" << endl;
			cout << "        Boost life by one and for next 6 moves of PACMAN, PACMAN can kill M parmentaly" << endl;

		}
		else if (mainopr == 'x')
		{
			break;
		}
	}
	
		
					system("Pause");

				
			}
