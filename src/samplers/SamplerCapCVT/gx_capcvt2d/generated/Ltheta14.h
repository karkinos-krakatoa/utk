#include <Geex/symbolics/function.h>
namespace Geex {

   class Ltheta14: public Function {
      public:
      Ltheta14();
      virtual void eval(bool do_f, bool do_g, bool do_H) ;
   };
}
