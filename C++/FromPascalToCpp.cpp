/*One day when I was little, I had to write a cycle, but I did not know how to do it, and I did not have internet. 
So I tried to find a solution in the book. 
I only had a Delphi book (Pascal). And I found the piece of code that suits me:

begin
    repeat
        Sum := Sum + start;
        start := start + 1;
    until(start>=finish);
end;

And put it in the code. But it does not work. I found out that instead of := on C++ you need to put =. And I replaced it, but it still did not work. Could you help me to adapt the code to C++. But I have one condition: You can not change the code that is written in Pascal. In the test, the code should also work.
*/

#define begin while(1){
#define repeat 1;
#define until(fin) if(fin) break;
#define end }

int fromPascalToCpp(int Sum, int finish, int start)
{
using namespace std;
	begin
		repeat
		  Sum = Sum + start;
	    start = start + 1;
	  until(start>=finish);
	end
	return Sum;
}