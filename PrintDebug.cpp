#include "PrintDebug.h"

PrintDebug::PrintDebug(char* file_name) : 
   fileName(file_name),
   numCounters(0),
   output(true)
{}

void PrintDebug::SetOutput(bool set){
   output = set;
}

void PrintDebug::Stub(int line){
   if(output){
      std::cout<<fileName<<" : Line "<<line<<endl;
   }
}

void PrintDebug::Alert(const char* alert){
   if(output){
      std::cout<<fileName<<" : Alert - "<<alert<<endl;
   }
}

void PrintDebug::Counter(int line){
   int index=-1;
   for(int i=0;i<numCounters;++i){
      if(counters[i] == line){
         index=i;
         break;
      }
   }
   if(index == -1){
      counters[numCounters] = line;
      index = numCounters++;
      count[index]=0;
   }
   count[index]++;
   if(output){
      std::cout<<fileName<<" : Line "<<line<<" : Count "<<count[index]<<endl;
   }
}
