// process.cpp
#include <vector>
#include <ostream>
#include <iostream>
#include <thread>
#include <chrono>


      // Default Constructor
      Computer::Process::Process()
      {
        id = Process::processIds++; //current process
        processState = 1; //0 or 1 for running not running

      }

      // Constructor with list of instructions
      Computer::Process::Process(const std::vector<Instruction> & inst)
      {
        id = Process::processIds++; //current process
        processState = 1; //0 or 1 for running not running
        instructions = inst;
        currInstruction = instructions[instructions.size()]; // use backmost instruction then delete it after completion
      }
      // Copy Constructors
      Computer::Process::Process(const Process & copy)
      {
        processState = copy.processState;
        id = copy.id;
        instructions = copy.instructions;
        currInstruction = copy.currInstruction;//if applicable
      }

      // Copy Assignment operator
      Computer::Process::Process & operator=(const Process & copy)
      {
        processState = copy.processState;
        id = copy.id;
        instructions = copy.instructions;
        currInstruction = copy.currInstruction;//if applicable
        return *this;
      }

      // Mark process as starting to process
      // Only changes state
      void Computer::Process::StartProcessing()
      {
        ProcessState = 1; // Running state
      }
      // Mark process as stopping processsing
      // Only changes state
      void Computer::Process::StopProcessing()
      {
        ProcessState = 0; // not running state
      }
      // Process for <pu> PUs
      // returns wether or not it finished
      bool Computer::Process::ProcessUnit(unsigned long pu)
      {

      }
      // gets remaining time to process instructions
      unsigned long Computer::Process::RemainingInstructionTime() const
      {

      }
      // gets the total time needed to process all instructions
      unsigned long Computer::Process::TotalInstructionTime() const
      {

      }

      std::ostream & operator<<(std::ostream & out, const Process & p)
      {

      }
