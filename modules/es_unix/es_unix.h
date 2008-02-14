/*************************************************
* Unix EntropySource Header File                 *
* (C) 1999-2008 The Botan Project                *
*************************************************/

#ifndef BOTAN_EXT_ENTROPY_SRC_UNIX_H__
#define BOTAN_EXT_ENTROPY_SRC_UNIX_H__

#include <botan/buf_es.h>
#include <botan/unix_cmd.h>
#include <vector>

namespace Botan {

/*************************************************
* Unix Entropy Source                            *
*************************************************/
class Unix_EntropySource : public Buffered_EntropySource
   {
   public:
      void add_sources(const Unix_Program[], u32bit);
      Unix_EntropySource();
   private:
      static void add_default_sources(std::vector<Unix_Program>&);

      void do_fast_poll();
      void do_slow_poll();

      std::vector<Unix_Program> sources;
   };

}

#endif
