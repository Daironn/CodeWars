/*
Write a function, which takes a non-negative integer (seconds) as input and returns the time in a human-readable format (HH:MM:SS)

    HH = hours, padded to 2 digits, range: 00 - 99
    MM = minutes, padded to 2 digits, range: 00 - 59
    SS = seconds, padded to 2 digits, range: 00 - 59

The maximum time never exceeds 359999 (99:59:59)

You can find some examples in the test fixtures.

*/
#include <stdio.h>
#include <ctype.h>

char TOTAL[] = "00:00:00";
char *human_readable_time (unsigned seconds, char *time_string)
{
	*time_string = '\0'; // write to time_string

  char HH[12], MM[12], SS[12];
  
  sprintf(HH, "%d", (unsigned)(seconds / 3600));
  sprintf(MM, "%d", (unsigned)(seconds % 3600) / 60);
  sprintf(SS, "%d", (unsigned)((seconds % 3600) % 60));

  int counter = 0;
  char *ALL[3] = {HH,MM,SS};
  for(size_t i = 0; i < 8; i+=3)
  {
      for(size_t j = 0; isdigit(ALL[counter][j]); j++)
      {
        TOTAL[i+j] = ALL[counter][j];
      }
    counter++;
  }
    
  if((atoi(HH) - 10)<0)
  {
    TOTAL[1] = TOTAL[0];
    TOTAL[0] = '0';
  }

  if((atoi(MM) - 10) < 0)
  {

    TOTAL[4] = TOTAL[3];
    TOTAL[3] = '0';
  }
  if(atoi(SS) - 10 <0)
  {
    TOTAL[7] = TOTAL[6];
    TOTAL[6] = '0';
  }
  
  

  time_string = TOTAL;
  printf("RESULT: %s \n",time_string);
	return time_string; // return it
}