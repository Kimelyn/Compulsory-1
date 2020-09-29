
#include <iostream>

char table[9] = { '1','2','3','4','5','6','7','8','9' };
char player = 'x';
int n = 0;
//Display of a tic tac toe board
int board()
{
	system("cls"); //update the board everytime there is a change of input

	std::cout << "Welcome to Tic Tac Toe game!\n";
	std::cout << "Player 1 (x) & Player 2 (O)\n";
	std::cout << std::endl;
	std::cout << "   -----------------\n";
	std::cout << "  |  " << table[0] << "  |  " << table[1] << "  |  " << table[2] << "  |  \n";
	std::cout << "  -------------------\n";
	std::cout << "  |  " << table[3] << "  |  " << table[4] << "  |  " << table[5] << "  |  \n";
	std::cout << "  -------------------\n";
	std::cout << "  |  " << table[6] << "  |  " << table[7] << "  |  " << table[8] << "  |  \n";
	std::cout << "   -----------------\n";
	return 0;
}
// to change who is playing
void playerTurn()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
// Enter in a number and change the number to either 'X' or 'O'
void input() {

	int enter = 0;
	std::cout << "It is player " << player << " turn. Enter a number: ";
	std::cin >> enter;

	if (enter == 1)
		table[0] = player;
	else if (enter == 2)
		table[1] = player;
	else if (enter == 3)
		table[2] = player;
	else if (enter == 4)
		table[3] = player;
	else if (enter == 5)
		table[4] = player;
	else if (enter == 6)
		table[5] = player;
	else if (enter == 7)
		table[6] = player;
	else if (enter == 8)
		table[7] = player;
	else if (enter == 9)
		table[8] = player;
}
//determine the winner and returns to main
char gameWin()
{
	//player x wins if horisontal
	if (table[0] == 'X' && table[1] == 'X' && table[2] == 'X')
		return 'X';
	if (table[3] == 'X' && table[4] == 'X' && table[5] == 'X')
		return 'X';
	if (table[6] == 'X' && table[7] == 'X' && table[8] == 'X')
		return 'X';
	//vertical
	if (table[0] == 'X' && table[3] == 'X' && table[6] == 'X')
		return 'X';
	if (table[1] == 'X' && table[4] == 'X' && table[7] == 'X')
		return 'X';
	if (table[2] == 'X' && table[5] == 'X' && table[8] == 'X')
		return 'X';
	//cross
	if (table[0] == 'X' && table[4] == 'X' && table[8] == 'X')
		return 'X';
	if (table[6] == 'X' && table[4] == 'X' && table[2] == 'X')
		return 'X';

	//player O wins if same as above
	if (table[0] == 'O' && table[1] == 'O' && table[2] == 'O')
		return 'O';
	if (table[3] == 'O' && table[4] == 'O' && table[5] == 'O')
		return 'O';
	if (table[6] == 'O' && table[7] == 'O' && table[8] == 'O')
		return 'O';

	if (table[0] == 'O' && table[3] == 'O' && table[6] == 'O')
		return 'O';
	if (table[1] == 'O' && table[4] == 'O' && table[7] == 'O')
		return 'O';
	if (table[2] == 'O' && table[5] == 'O' && table[8] == 'O')
		return 'O';

	if (table[0] == 'O' && table[4] == 'O' && table[8] == 'O')
		return 'O';
	if (table[6] == 'O' && table[4] == 'O' && table[2] == 'O')
		return 'O';
	// if draw
	return '/';
}
//connect functions together and appears in order
int main()
{
	n = 0;
	while (2) {
		n++; // going through the table
		playerTurn();
		board(); //Game is over when one of the options above from function gameWin is chosen
		if (gameWin() == 'X')
		{
			std::cout << "Congrats, X is the winner!\n";
			break;
		}
		else if (gameWin() == 'O')
		{
			std::cout << "Congrats, O is the winner\n";
			break;
		}
		else if (gameWin() == '/' && n == 9)
		{
			std::cout << "It's a draw!\n";
			break;
		}
		input();
	}
	system("pause");
	return 0;
}
