/*
Tag2Sub30.h
Features

Copyright (c) 2013 - 2017 Jason Lee @ calccrypto at gmail.com

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

#ifndef __TAG2_SUB30__
#define __TAG2_SUB30__

#include "Tag2Subpacket.h"

// 5.2.3.24.  Features
//
//    (N octets of flags)
//
//    The Features subpacket denotes which advanced OpenPGP features a
//    user's implementation supports.  This is so that as features are
//    added to OpenPGP that cannot be backwards-compatible, a user can
//    state that they can use that feature.  The flags are single bits that
//    indicate that a given feature is supported.
//
//    This subpacket is similar to a preferences subpacket, and only
//    appears in a self-signature.
//
//    An implementation SHOULD NOT use a feature listed when sending to a
//    user who does not state that they can use it.
//
//    Defined features are as follows:
//
//        First octet:
//
//        0x01 - Modification Detection (packets 18 and 19)
//
//    If an implementation implements any of the defined features, it
//    SHOULD implement the Features subpacket, too.
//
//    An implementation may freely infer features from other suitable
//    implementation-dependent mechanisms.

namespace Features_Flags{
    const uint8_t MODIFICATION_DETECTION = 0x01;

    const std::map <uint8_t, std::string> NAME = {
        std::make_pair(MODIFICATION_DETECTION, "Modification Detection (packets 18 and 19)"),
    };
}

class Tag2Sub30 : public Tag2Subpacket{
    private:
        std::string flags;

    public:
        typedef std::shared_ptr <Tag2Sub30> Ptr;

        Tag2Sub30();
        Tag2Sub30(const std::string & data);
        void read(const std::string & data);
        std::string show(const uint8_t indents = 0, const uint8_t indent_size = 4) const;
        std::string raw() const;

        std::string get_flags() const;

        void set_flags(const std::string & f);

        Tag2Subpacket::Ptr clone() const;
};

#endif
