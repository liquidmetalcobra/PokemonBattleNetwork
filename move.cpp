//
//  move.cpp
//  AllegroGame
//
//  Created by Sasha Han on 1/20/16.
//
//

#include "move.hpp"


void move::collide(gameobject *go)
{
}
/*
void move::update()
{
 //   anim.update();
}
void move::draw()
{
    anim.draw(x,y);
}*/
void move::start(std::string n,pokemon * own, pokemon *op, int orient, float newX, float newY)
{
    name = n;
    owner = own;
    opponent = op;
    orientation = orient;
    std::string temSS = n;
    char * ssImg = (char *)(temSS + ".png").c_str();
    char * ssDesc = (char *)(temSS + "ss.txt").c_str();
   // std::cout<< ssImg << "\t" << ssDesc << "\n";
    
   // anim = *new animator(ssImg,ssDesc);
    anim.init(ssImg,ssDesc);
    setX(newX);
    setY(newY);
}
void move::parse(char * filename)
{
    /*
    int doesEvolve,numMoves;
  std::cout << "hi";
    ifstream myfile;
    
    myfile.open(filename);
    string file_line;
    getline(myfile,file_line);
    stringstream fl(file_line);
    fl >> name;
    fl >> id;
    fl >> numMoves;
    fl >> doesEvolve;
  std::cout << "\n";
  std::cout << name << numMoves << doesEvolve;
    for (int i = 0; i < numMoves; i++)
    {
        
        getline(myfile, file_line);
        istringstream is( file_line );
        
        string j;
        is >> j;
        moves.push_back(j);
        int k;
        is >> k;
        movelevel.push_back(k);
      std::cout << "\n" << j;
    }
    if (doesEvolve)
    {
        getline(myfile, file_line);
        istringstream is( file_line );
        is >> evolveto;
        is >> evolveat;
    }
    else
    {
        evolveto = "";
        evolveat = 101;
    }
    //current line of text is in file_line, not including the \n
    myfile.close();
     */
}
