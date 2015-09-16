// i/o example
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

//Remember, ouput is like (Token_Type, "Value", Line_Number)
//LAST LINE should look like TOTAL TOKENS = ##

void write_output(string token, string value, int line, ofstream file)
{
  string s = "(" + token + ", \"" + value + "\", " + to_string(line) + "\n";
  file.write(s,s.length());
  return;
}

void Schemes(int line, ofstream file)
{
  write_output("SCHEMES", "Schemes", line, file);
  return;
}

int main ()
{
  string file_name = "";
  cin >> file_name;
  file_name = file_name + ".txt";
  cout << "The value you entered is " << file_name;
  ifstream file;
  file.open(file_name);

  ofstream out;
  out.open("out.txt");

  char c;
  string s = "";
  int line_num = 1;
  int i = 0;
  //Beginnning of finite state machine
  getline(file,s);
    cout << "THIS IS THE LINE: " << s;
  while (s != ""){
    for (i=0; i < s.length(); i++){
      cout << s[i];
      /*
      if c == Letter {
        if Schemes than SCHEMES
        if Facts than FACTS
        if Rules than RULES
        if Queries than QUERIES
        if [A-Z]([A-Z]|[0-9])* than ID
      }
      else if c == special {
        if , than COMMA
        if . than PERIOD
        if ? than Q_MARK
        if ( than LEFT_PAREN
        if ) than RIGHT_PAREN
        if : than COLON
        if :- than COLON_DASH
        if * than MULTIPLY
        if + than ADD
        if ' than string
        if # than COMMENT
        if #| than COMMENT (but waits until |#)
      }
      else if c == whitespace
      */
    }
    getline(file,s);
    line_num++;
  }


  file.close();
  out.close();

  return 0;
}
