#include <iostream>

using std::cout;
using std::endl;

class PrintDebug{
   public:
      PrintDebug(char* file_name);
      void SetOutput(bool set);
      void Stub(int line);
      void Alert(const char* alert);
      void Counter(int line);
   private:
      char* fileName;
      int counters[256];
      int numCounters;
      int count[256];
      bool output;
};

