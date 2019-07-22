[![license](https://img.shields.io/github/license/mashape/apistatus.svg)](https://github.com/itstep-vrn/GhostHouse/blob/master/LICENSE) [![CodeFactor](https://www.codefactor.io/repository/github/itstep-vrn/ghosthouse/badge)](https://www.codefactor.io/repository/github/itstep-vrn/ghosthouse) [![github](https://github.githubassets.com/favicon.ico)](https://github.com/AndreyDolzhenko)

# Ghost House (Дом с Привидениями)
Консольная игра-угадайка.

***
- **Игра, в которой нужно пройти 3 этажа и не встретиться с привидением**
- **© Dolzhenko Andrey, 2019**
- **© Компьютерная академия ШАГ. Воронеж, 2019**
- **Версия: 0.1 (Июль 2019)**
- **adol2000@rambler.ru**
***

## Что делает?

Предлагает выбор одной из 3-х дверей на 3-х уровнях (этажах).  
Компьютер выбирает дверь случайным образом, пользователь вводит цифры от 1 до 3.  
:dizzy_face:  Если выбор пользователя совпал с выбором компьютера, в двери появляется привидение – ***пользователь проиграл***.   
:sunglasses: Если выбор пользователя не совпал с выбором компьютера, то открывается пустая дверь – ***пользователь выиграл***.  
С каждым выигрышем пользователь проходит на следующий этаж (всего нужно пройти 3 этажа).  
С каждым проигрышем у пользователя уменьшается жизнь на 1 единицу (всего 3 жизни). При этом пользователь остается на том же этаже, на котором встретил привидение.  
Если пользователь выиграл 3 раза, то он проходит на следующий уровень, на котором его встречает Принцесса.  
Если пользователь проиграл 3 раза, то он встречается со Злым колдуном и Привидением, которые ему говорят, что у него кончились жизни и он проиграл.  

## Воспроизведение:

•	Консоль  
•	В игре не встроен синтаксический анализатор. Все команды необходимо вводить ЦИФРАМИ, следуя инструкциям в игре.  

## Getting Started

Скопируйте файл .exe в любое месте на вашем компьютере. Если у вас установлены библиотеки Visual Studio, например, MSVCP140.dll, или сама программа Visual Studio, игра запустится.  


## Описание кода программы:

### Подключение библиотек и пространства имен:
```cpp
#include<iostream> //Библиотека ввода и вывода информации
#include<stdlib.h> //Стандартная библиотека для контроля выполнения программы
#include<time.h> //Библиотека для работы с системной датой и временем. Используется при расчете случайного значения
using namespace std; //Использование стандартного пространства имен
```
  
### Основные функции:
- `void Name()`  - Выводит название игры как часть игрового поля. Выводится при любой коммуникации с пользователем
- `void Start()` - Заставка. Выводится вначале один раз. Является визитной карточкой игры
- `void Description()` - Описание. Выводится один раз, описывает сценарий игры
- `void Choise()` - Выбор двери. Выводится на каждом уровне, когда игрок должен угадать дверь
- `void Win()` - Выводится в конце игры при удачном прохождении всех уровней
- `void Loss()` - Выводится в конце игры при потере всех жизней

_Геймплей игры основан на совпадении или несовпадении случайного выбора "двери" копьютером и выбора, сделанного игроком._
_Визуализация привидения в выбранной двери или отсутствие привидения в открытой двери описана в функциях:_

```cpp
void LeftDoorGhost(); // Привидение в левой двери, остальные закрыты  
void MiddleDoorGhost(); // Привидение в средней двери, остальные закрыты  
void RightDoorGhost(); // Привидение в правой двери, остальные закрыты  

void LeftDoorUser(); // Открытая пустая левая дверь, остальные закрыты  
void MiddleDoorUser(); // Открытая пустая средняя дверь, остальные закрыты  
void RightDoorUser(); // Открытая пустая правая дверь, остальные закрыты  
```


[! [license] (https://img.shields.io/github/license/mashape/apistatus.svg)] (https://github.com/itstep-vrn/GhostHouse/blob/master/LICENSE) [! [CodeFactor] (https://www.codefactor.io/repository/github/itstep-vrn/ghosthouse/badge)] (https://www.codefactor.io/repository/github/itstep-vrn/ghosthouse) [! [github] (https://github.githubassets.com/favicon.ico)] (https://github.com/AndreyDolzhenko)

# Ghost House (Haunted House)
Console guessing game.

***
- ** A game in which you need to go through 3 floors and not meet a ghost **
- ** © Dolzhenko Andrey, 2019 **
- ** © Computer Academy STEP. Voronezh, 2019 **
- ** Version: 0.1 (July 2019) **
- **adol2000@rambler.ru**
***

## What is he doing?

Offers a choice of one of 3 doors on 3 levels (floors).
The computer selects the door randomly, the user enters numbers from 1 to 3.
: dizzy_face: If the user's choice coincided with the choice of computer, a ghost appears in the door - *** the user has lost ***.
: Sunglasses: If the user's choice did not coincide with the choice of computer, then an empty door opens - *** the user won ***.
With each win the user goes to the next floor (all you need to go through 3 floors).
With each loss, the user's life decreases by 1 unit (only 3 lives). At the same time the user remains on the same floor on which he met the ghost.
If the user has won 3 times, then he goes to the next level where the Princess meets him.
If the user has lost 3 times, then he meets the Evil sorcerer and the Wraith, who tell him that he has run out of life and he has lost.

## Reproduction:

• console
• The game does not have a parser built in. All teams must be entered in numbers, following the instructions in the game.

## Getting Started

Copy the .exe file anywhere on your computer. If you have Visual Studio libraries installed or Visual Studio program itself, the game will start.


## Program code description:

### Connecting libraries and namespaces:
`` cpp
#include <iostream> // Input and Output Library
#include <stdlib.h> // Standard Library for Monitoring Program Execution
#include <time.h> // Library for working with system date and time. Used when calculating random value
using namespace std; // Use standard namespace
`` `
  
### Main functions:
- `void Name ()` - Displays the name of the game as part of the playing field. Displayed during any communication with the user.
- `void Start ()` - Screensaver. First displayed once. Is the calling card of the game
- `void Description ()` - Description. Output once, describes the game script.
- `void Choise ()` - Select the door. It is displayed at each level when the player must guess the door.
- `void Win ()` - It is displayed at the end of the game with the successful completion of all levels
- `void Loss ()` - Output at the end of the game when all lives are lost

_ The gameplay of the game is based on the coincidence or non-coincidence of the random selection of the “door” by the computer and the choice made by the player._
_The visualization of the ghost in the selected door or the absence of the ghost in the open door is described in the functions: _

`` cpp
void LeftDoorGhost (); // Ghost in the left door, the rest are closed
void MiddleDoorGhost (); // Ghost in the middle door, the rest are closed
void RightDoorGhost (); // Ghost in the right door, the rest are closed

void LeftDoorUser (); // Open empty left door, the rest are closed
void MiddleDoorUser (); // Open empty middle door, the rest are closed
void RightDoorUser (); // Open empty right door, the rest are closed
`` `
