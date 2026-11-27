#include "Project3PDFReader.h"

#include <iostream>
#include <fstream>

using namespace std;

pdfReader::pdfReader()
{
    ObjectOffsets = nullptr;
    ObjectCount = 0;
}

string pdfReader::ReadPDF()
{
    ifstream pdfFile("C:/Users/ivysl/MonsterBooks/Gulliver's_Travels-Jonathan_Swift.pdf",
                     ios::binary);

}