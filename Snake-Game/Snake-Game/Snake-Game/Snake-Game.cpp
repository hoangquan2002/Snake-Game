#include <iostream>
using namespace std;

/*
 * Import library
 */
#include <vector>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <time.h>
#include <random>

 /*
  * MACRO
  */
#define WIDTH 40
#define HEIGHT 20
#define BODY '*'
#define APPLE 'O'

  /*
   * Enum
   */
/*
khai báo hàm
*/
bool isBiteItself();
/*
phan cua nhat
*/

if (isBiteItself())
			break;
bool isBiteItself()
{
	Point head = snake[0];
	for (size_t i = 1; i < snake.size(); i++)
		if (head.x == snake[i].x && head.y == snake[i].y)
			return true;
	return false;
}
/*hello
*/