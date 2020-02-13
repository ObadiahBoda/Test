#include "processor.h"
#include "instruction.h"
#include <queue>
#include <array>
#include <thread>
#include <iostream>
#include <fstream>
#include <vector>


Computer::Processor::Processor(const std::string & filename)
{
  int numbers; //stores input data temporarily
  int temp;
  int temp2;
  
  std::ifstream file;
  file.open(filename);

  file >> numbers;
  seed = numbers;
   
  while (!file.eof())
    {
      file >> numbers;
      processes.push_back(numbers);
      temp = numbers;
      for(int j = 0; j < temp; j++)
	{
	  file >> numbers;
	  instructions.push_back(numbers);
	  temp2 = numbers;
	  for(int k = 0; k < temp2; k++)
	    {
	      file >> numbers;
	      PUs.push_back(numbers);
	    }
	  PUs.push_back(0);
	}
      instructions.push_back(0);
      
     
    }
  
  std::cout << "processes" << std::endl;
  for(unsigned int i=0; i < processes.size(); i++)
    {std::cout << processes.at(i) << ' ';}
  
   std::cout << "instructions" << std::endl;
 for(unsigned int i=0; i < instructions.size(); i++)
    {std::cout << instructions.at(i) << ' ';}
   
   std::cout << "PUs" << std::endl;
 for(unsigned int i=0; i < PUs.size(); i++)
    {std::cout << PUs.at(i) << ' ';}







 

  
}

void Computer::Processor::Start()
{


  Computer::Instruction thing(PUs.at(i))

    Instruction thing[100];

  
  
  Computer::Instruction **inst = new Computer::Instruction* [PUs.size()] ;

;
 
  for(unsigned int i = 0 ; i < PUs.size(); i++)
    {
      if(PUs.at(i) > 0)
       {//do nothing
       }
     else
       {
	 std::cout << i << std::endl;
	  Computer::Instruction instr(PUs.at(i));
	 *inst[i] = instr;
       } 
    }

  



 std::cout << inst[3]->TimeLeft() << std::endl << "it worked";
  
 delete []inst;
}

