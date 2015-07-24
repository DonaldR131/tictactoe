#include <iostream>;
#include <string>
using namespace std;

int main(){

	int r1;
	int c1;

	bool tt = false;
	bool game = true;
	int z;
	string player1;
	string player2;
	string ttt[4][4] =
	{ { "(0)", "(1)", "(2)", "(3)" }, { "(1)", "(_)", "(_)", "(_)" }, { "(2)", "(_)", "(_)", "(_)" }, { "(3)", "(_)", "(_)", "(_)" }, };

	
	


	cout << "Tic Tac Toe!" << endl;
	cout << "================================================" << endl;
	cout << "Player 1, what is your name?" << endl;
	cout << ": ";
	cin >> player1;
	cout << "Player 2, what is your name?" << endl;
	cout << ": ";
	cin >> player2;
	while (game = true){




		for (int y = 0; y < 4; y++){
			for (int x = 0; x < 4; x++){
				if (x != 3){
					cout << ttt[y][x];
				}

				else (cout << ttt[y][x] << endl);
			}
		}

		cout << "================================================" << endl;
		cout << player1 << " where would you like to go?" << endl;
		cout << "Which row?" << endl;
		cout << ": ";
		cin >> r1;
		cout << "Which coloumn?" << endl;
		cout << ": ";
		cin >> c1;
		cout << "================================================" << endl;
		ttt[r1][c1] = "(X)";
		while (tt = true){
			cout << ttt[0][0] << ttt[0][1] << ttt[0][2] << ttt[0][3] << endl;
			cout << ttt[1][0] << ttt[1][1] << ttt[1][2] << ttt[1][3] << endl;
			cout << ttt[2][0] << ttt[2][1] << ttt[2][2] << ttt[2][3] << endl;
			cout << ttt[3][0] << ttt[3][1] << ttt[3][2] << ttt[3][3] << endl;
			break;
		}
		tt = true;
		tt = false;



		cout << "================================================" << endl;
		cout << player2 << " where would you like to go?" << endl;
		cout << "Which row?" << endl;
		cout << ": ";
		cin >> r1;
		cout << "Which coloumn?" << endl;
		cout << ": ";
		cin >> c1;
		cout << "================================================" << endl;
		ttt[r1][c1] = "(O)";
		while (tt = true){
			cout << ttt[0][0] << ttt[0][1] << ttt[0][2] << ttt[0][3] << endl;
			cout << ttt[1][0] << ttt[1][1] << ttt[1][2] << ttt[1][3] << endl;
			cout << ttt[2][0] << ttt[2][1] << ttt[2][2] << ttt[2][3] << endl;
			cout << ttt[3][0] << ttt[3][1] << ttt[3][2] << ttt[3][3] << endl;
			break;
		}
		tt = true;
		tt = false;








		cin >> z;

	}
	return 0;
		}
