#include<iostream>
#include<string>
using namespace std;
int main (int argc, char* argv[])
{
   string text = argv[1];
   char symbhol = argv[2][0];
   for (int i=0; i< text.length(); i++)
      {
         if(text[i]==symbhol)
         cout << i << endl;
      }
}
