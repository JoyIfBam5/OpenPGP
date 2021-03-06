/*
Sub10.h
Placeholder for backward compatibility

Copyright (c) 2013 - 2018 Jason Lee @ calccrypto at gmail.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef __TAG2_SUB10__
#define __TAG2_SUB10__

#include "Subpacket.h"

namespace OpenPGP {
    namespace Subpacket {
        namespace Tag2 {
            class Sub10 : public Sub {
                private:
                    std::string stuff;

                public:
                    typedef std::shared_ptr <Sub10> Ptr;

                    Sub10();
                    Sub10(const std::string & data);
                    void read(const std::string & data);
                    std::string show(const std::size_t indents = 0, const std::size_t indent_size = 4) const;
                    std::string raw() const;

                    std::string get_stuff() const;

                    void set_stuff(const std::string & s);

                    Sub::Ptr clone() const;
            };
        }
    }
}

#endif
