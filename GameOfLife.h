#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

class ClassicMode
{
  public:
    ClassicMode(); //default constructor
    ~ClassicMode(); //destructor

    void RandomMap(int rows, int columns, float cellFreq); //creates a map for a random gen
    void GivenMap(int rows, int columns, string fileName); //creates a map for a given gen

    //check each possible cell position
    int CheckCornerTL(int row, int column);
    int CheckCornerTR(int row, int column);
    int CheckCornerBL(int row, int column);
    int CheckCornerBR(int row, int column);
    int CheckSideT(int row, int column);
    int CheckSideR(int row, int column);
    int CheckSideB(int row, int column);
    int CheckSideL(int row, int column);
    int CheckMiddle(int row, int column);

    int numRows; //number of rows in the map
    int numColumns; //number of columns in the map
    int genNum;

    void NewGen(); //generates the next map and sends the old one to the previous map
    void PrintMap(string choice, string outputFile); //prints the current map
    bool CheckValid(); //checks if the generations should continue

    char** previousMap; //old map
    char** currentMap; //new map



  private:
};

class DoughnutMode
{
  public:
    DoughnutMode(); //default constructor
    ~DoughnutMode(); //destructor

    void RandomMap(int rows, int columns, float cellFreq); //creates a map for a random gen
    void GivenMap(int rows, int columns, string fileName); //creates a map for a given gen

    //check each possible cell position
    int CheckCornerTL(int row, int column);
    int CheckCornerTR(int row, int column);
    int CheckCornerBL(int row, int column);
    int CheckCornerBR(int row, int column);
    int CheckSideT(int row, int column);
    int CheckSideR(int row, int column);
    int CheckSideB(int row, int column);
    int CheckSideL(int row, int column);
    int CheckMiddle(int row, int column);

    int numRows; //number of rows in the map
    int numColumns; //number of columns in the map
    int genNum;

    void NewGen(); //generates the next map and sends the old one to the previous map
    void PrintMap(string choice, string outputFile); //prints the current map
    bool CheckValid(); //checks if the generations should continue

    char** previousMap; //old map
    char** currentMap; //new map



  private:
};


class MirrorMode
{
  public:
    MirrorMode(); //default constructor
    ~MirrorMode(); //destructor

    void RandomMap(int rows, int columns, float cellFreq); //creates a map for a random gen
    void GivenMap(int rows, int columns, string fileName); //creates a map for a given gen

    //check each possible cell position
    int CheckCornerTL(int row, int column);
    int CheckCornerTR(int row, int column);
    int CheckCornerBL(int row, int column);
    int CheckCornerBR(int row, int column);
    int CheckSideT(int row, int column);
    int CheckSideR(int row, int column);
    int CheckSideB(int row, int column);
    int CheckSideL(int row, int column);
    int CheckMiddle(int row, int column);

    int numRows; //number of rows in the map
    int numColumns; //number of columns in the map
    int genNum;

    void NewGen(); //generates the next map and sends the old one to the previous map
    void PrintMap(string choice, string outputFile); //prints the current map
    bool CheckValid(); //checks if the generations should continue

    char** previousMap; //old map
    char** currentMap; //new map



  private:
};
