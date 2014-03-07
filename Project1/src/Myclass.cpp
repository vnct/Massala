
    #include "Myclass.h"

    #include <stdexcept>
	#include <string.h>
using namespace std;
   	int monstring(char* String_)
    {

   		char *mot;
   		    int nbr=0;

   		    mot=strtok(String_," \n\r\0");
   		    while (mot)
   		    {
   		          nbr++;

   		          mot=strtok(NULL," /n/r/0");
   		    }

   		    return nbr;



      return 0;
    }
