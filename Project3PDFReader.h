#ifndef PDFREADER_H
#define PDFREADER_H

#include <string>

using namespace std;

class pdfReader
{
   private:
          long long* ObjectOffsets;
          int ObjectCount;
   public:
          pdfReader();
          string ReadPDF();
};

#endif