/*
Task:

Your task is to write a function which returns the sum of following series upto nth term(parameter).

Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...

Rules:

    You need to round the answer to 2 decimal places and return it as String.

    If the given value is 0 then it should return 0.00

    You will only be given Natural Numbers as arguments.

Examples:(Input --> Output)

1 --> 1 --> "1.00"
2 --> 1 + 1/4 --> "1.25"
5 --> 1 + 1/4 + 1/7 + 1/10 + 1/13 --> "1.57"


*/

#include<math.h>
#include<string>
std::string seriesSum(int n)
{
    float adding(0);
    std::string inscription;

    for(int i = 0; i < n; i++)
    {
        adding = float(adding + (1.f/(1.f+(i*3.f))));
    }
      
    adding = round(adding*100)/100;
    std::string inscription_from_int = std::to_string(adding);
      
    for(int i = 0; i <= 3; i++)  
    {
        inscription +=inscription_from_int[i];
    }
    return inscription;
}