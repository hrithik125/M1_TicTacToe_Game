# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** | 
|-------------|--------------------------------------------------------------|------------|-------------|----------------|
|  H_01       | Rules of the game are displayed |  No Input | Rules are shown | Rules are shown |
|  H_02       | Board is Displayed on the terminal |  No Input | Board is drawn | Board is drawn |
|  H_03       | Players got 3 inputs horizonatally, vertically or diagonally | Input of 'X' or 'O' from player | Either of the player wins | Either of the player wins |


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |
|-------------|--------------------------------------------------------------|------------|-------------|----------------|
|  L_01       | Displaying set of rules and 3x3 board with positions. | No inpt from user/player | Rules and board displayed | Rules and board displayed |
|  L_02       | Player is able to choose between X or O and set the position on board. | Player 1 choose X or O and position (1-9). | Display board with X's and O's | Display board with X's and O's |
|  L_03       | Player completes X' or O's either horizontally or vertically or diagonally. | Player enter positions to complete 3 X' or O's | The first to complete 3 consecutive X's or O's will win. | The first to complete 3 consecutive X's or O's will win. |
