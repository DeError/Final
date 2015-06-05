#include<iostream>
#include<fstream>
#include<string>
#include”Coloring.h”
#include”hash.h”
using namespace std;

void Read();

//./coloring -f inputfile -o output 
int main(int argc, char* argv[]){

Coloring* coloring = new Coloring;
Read(argv[2],coloring);
fstream fout;



}

//Read file 
void Read(char* input,Coloring* & coloring){
  fstream fin(input,ios::in); 
  string tmp;
  fin>>tmp;
  coloring->_alpha= strToInt(tmp.substr(6,tmp.size()));
  fin>>tmp;
  coloring->_beta= strToInt(tmp.substr(4,tmp.size()));
  fin>>tmp;
  coloring->_omega= strToInt(tmp.substr(6,tmp.size()));
  Shape* shape; 
  char  buff[256];
  while(fin.getline(buff,256))
  { 
     int count = 1;
     for(int i=0;;++i)
     {
        string right,left,bot,up;
        if (buff[i]==0) break;
        if(buff[i]==’,’) {++count;continue;}
        if(count==1)
       {left+=check;}
       else if(count==2)
       {bot+=check;}
        else if(count==3)
       {right+=check;}
        else 
        {up+=check;}                 
      }     
      shape=new Shape(strToInt(top),strToInt(right),,strToInt(bot),,strToInt(left));
      if(strToInt(top)>coloring->_yMax)
      {coloring->_yMax>strToInt(top);}
      if(strToInt(right)>coloring->_xMax)
      {coloring->_xMax=strToInt(right);}
      if(coloring->_yMin>strToInt(bot))     
      {coloring->_yMIn=strToInt(bot);}
      if(coloring->_xMin>strToInt(left))
      {(coloring->_xMin=strToInt(left);}  
      coloring->_shapeList.push_back(shape);
   }  
}

int strToInt(string s)
{ 
   int num=0;
   int sign=1; 
   size_t i=0;
   if (s[0] =='-')  {sign=-1;i=1;}
   for(;i<s.length();i++)
    {
             if(!isdigit(s[i]))	{ num*=10;num+=(10+int(tolower(s[i])-'a'));}
	  else{num*=10;num+=int(s[i] - '0');} 
     }	
     num*=sign;
     return num;  
}





