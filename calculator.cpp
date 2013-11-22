The following program should function as a basic calculator; it should ask the user to input what type of arithmetic operation he would like, and then ask for the numbers on which the operation should be performed. The calculator should then give the output of the operation.

_______ <iostream>


___ multiply(int x, int y)
{
  ______ x_y;
}


____ divide(int x, int y)
{
  _____ x_y;
}

_____ add(int x, int y) 
{
  ______x_y;
}

______ subtract(int x, int y)
{
  _____x_y;
}


using namespace std;

___ _____()
{
  ____ op='c';
  ____ x, y;
  while(op!='e')
  {
  cout__"What operation would you like to perform: add(+), subtract(-), divide(/), 
  multiply(*), [e]xit?";
  cin__op;
  switch(op)
  {
    ____ '+':
    cin__x;
    cin__y;
    cout__x__"+"__y__"="__add(x, y)__endl_
    break;
    ____ '-'_
    cin__x;
    cin__y;
    cout__x__"-"__y__"="__subtract(x, y)__endl_
    break;
    ____ '/':
    cin__x;
    cin__y;
    cout__x__"/"__y__"="__divide(x, y)__endl_
    break;
    ____ '*'_
    cin__x;
    cin__y;
    cout__x__"*"__y__"="__multiply(x, y)__endl_
    break;
    _____ 'e':
    ______;
    ______:
    cout__"Sorry, try again"__endl;
    }
  }
  return _;
_
