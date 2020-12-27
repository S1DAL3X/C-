#include <iostream>
#include <conio.h>

using namespace std;

bool game_over;
const int width = 20;
const int height = 20;
int x, y, fruit_x, fruit_y, score;
int tail_x[100], tail_y[100];
int n_tail;

enum e_direction{STOP = 0, LEFT, RIGHT, UP, DOWN };
e_direction dir;

//начальные настройки
void setup() {
	game_over = false;
	dir = STOP;
	x = width / 2 - 1;
	y = height / 2 - 1;
	fruit_x = rand() % width;
	fruit_y = rand() % height;
	score = 0;
}

void draw() {
	system("cls");
	cout << "--Welcome to Snake--" << endl;
	//верхняя граница
	for (int i = 0; i < width + 1; i++)
		cout << "#";
	cout << endl;
	//боковые границы
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0 || j == width - 1) {
				cout << "#";
			}
			if (i == y && j == x) {
				cout << "0";
			}
			else if (i == fruit_y && j == fruit_x) {
				cout << "F";
			}
			else {
				//изображаем хвост
				bool print = false;
				for (int k = 0; k < n_tail; k++) {
					if (tail_x[k] == j && tail_y[k] == i) {
						print = true;
						cout << "o";
					}
				}
				if (!print) {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	//нижняя граница
	for (int i = 0; i < width + 1; i++) 
		cout << "#";
	cout << endl;
	cout << "Score: " << score << endl;
	cout << "Press X for exit" << endl;
}

//_kbhit() - отслеживает нажатие на клавиши клавиатуры
//_getch() - отследивает какя кнопка была нажата
void input() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'w':
			dir = UP;
			break;
		case 'a':
			dir = LEFT;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'x':
			game_over = true;
			system("color c");
			cout << "GAME OVER !!!" << endl;
			break;
		}
	}
}

void logic() {
	//отслеживаем хвост
	int prev_x = tail_x[0];
	int prev_y = tail_y[0];
	int prev_2x, prev_2y;	//помещаем в эти переменные каждый след-ий элемент хвоста
	tail_x[0] = x;
	tail_y[0] = y;

	for (int i = 1; i < n_tail; i++) {
		prev_2x = tail_x[i];
		prev_2y = tail_y[i];
		tail_x[i] = prev_x;
		tail_y[i] = prev_y;
		prev_x = prev_2x;
		prev_y = prev_2y;
	}

	//отслеживание передвижений змейки
	switch (dir){
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	}
	//проверка на выход за пределы карты
	if (x >= width - 1) {
		x = 0;
	}
	else if (x < 0) {
		x = width - 2;
	}
	if (y >= height) {
		y = 0;
	}
	else if (y < 0) {
		y = height - 1;
	}
	//проверка не съели ли мы свой хвост
	for (int i = 0; i < n_tail; i++) {
		if (tail_x[i] == x && tail_y[i] == y) {
			game_over = true;
			system("color c");
			cout << "GAME OVER !!!" << endl;

		}
	}
	//действия при съедании фрукта
	if (x == fruit_x && y == fruit_y) {
		score += 10;
		fruit_x = rand() % width;
		fruit_y = rand() % height;
		n_tail++;
	}
}

int main() {
	setup();

	while (!game_over) {
		draw();
		input();
		logic();
	}

	return 0;
}
