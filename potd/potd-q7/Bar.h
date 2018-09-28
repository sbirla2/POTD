// your code here
#pragma #ifndef SYMBOL
#include <string>

namespace potd{
  class Bar{
  private:
    Foo * f_;
  public:
    Bar(string);
    Bar & operator=(const Bar &);
    string get_name();
    Bar(const Bar &);
    ~Bar();


  }  ;
}

#endif /* end of include guard:  */
