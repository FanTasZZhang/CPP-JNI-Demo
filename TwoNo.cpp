using namespace std;

class TwoNo{
  int i;
  int j;

  public: 
  TwoNo()
  {
    i = 0;
    j = 0;
  }

  TwoNo(int a, int b){
    i = a;
    j = b;
  }
  int Add(){
    return this -> i + this -> j;
  }
};
