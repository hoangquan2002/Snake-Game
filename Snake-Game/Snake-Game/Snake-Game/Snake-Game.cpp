// Generate apple on the board
void genApple()
{
	srand(time(0));
	int x = rand() % (WIDTH - 1) + 1;
	int y = rand() % (HEIGHT - 1) + 1;
	apple = {
		x,
		y,
	};
	gotoxy(x, y);
	cout << APPLE;
}

// Check if the snake ate apple
bool isAteApple()
{
	return snake[0].x == apple.x && snake[0].y == apple.y;
}

// Show score on right side of the board
void displayScore()
{
	gotoxy(WIDTH + 5, 2);
	cout << "Your score: " << score;
}
