/* -*- mode: C++; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/*
 *  Main authors:
 *     Christian Schulte <schulte@gecode.org>
 *
 *  Copyright:
 *     Christian Schulte, 2009
 *
 *  Last modified:
 *     $Date: 2016-08-12 15:03:01 +0200 (Fri, 12 Aug 2016) $ by $Author: schulte $
 *     $Revision: 15150 $
 *
 *  This file is part of Gecode, the generic constraint
 *  development environment:
 *     http://www.gecode.org
 *
 *  Permission is hereby granted, free of charge, to any person obtaining
 *  a copy of this software and associated documentation files (the
 *  "Software"), to deal in the Software without restriction, including
 *  without limitation the rights to use, copy, modify, merge, publish,
 *  distribute, sublicense, and/or sell copies of the Software, and to
 *  permit persons to whom the Software is furnished to do so, subject to
 *  the following conditions:
 *
 *  The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 *  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 *  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 *  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include <gecode/kernel.hh>
#include <gecode/int.hh>

#include "test/test.hh"

namespace Test {

  /// %Test for %Region memory area
  class Region : public Test::Base {
  protected:
    /// Test space
    class TestSpace : public Gecode::Space {
    public:
      /// Constructor for creation
      TestSpace(void) {}
      /// Constructor for cloning \a s
      TestSpace(bool share, TestSpace& s) : Space(share,s) {}
      /// Copy during cloning
      virtual Space* copy(bool share) {
        return new TestSpace(share,*this);
      }
    };
    /// How often to repeat
    static const int n_repeat = 16;
    /// How many blocks to allocate
    static const int n_blocks = 64;
    /// The size of a block
    static const size_t size = Gecode::MemoryConfig::region_area_size * 4;
  public:
    /// Initialize test
    Region(void) : Test::Base("Region") {}
    /// Perform actual tests
    bool run(void) {
      TestSpace* s = new TestSpace;
      for (int i=n_repeat; i--; ) {
        Gecode::Region r(*s);
        for (int j=n_blocks; j--; )
          (void) r.alloc<char>(static_cast<unsigned long int>(size));
      }
      delete s;
      return true;
    }
  };

  Region r;

}

// STATISTICS: test-core
