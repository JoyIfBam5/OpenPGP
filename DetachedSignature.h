/*
DetachedSignature.h
OpenPGP Detached Signature data structure (RFC 4880 sec 11.2)

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

#ifndef __OPENPGP_DETACHED_SIGNATURE__
#define __OPENPGP_DETACHED_SIGNATURE__

#include "PGP.h"

namespace OpenPGP {
    // 11.4. Detached Signatures
    //
    //    Some OpenPGP applications use so-called "detached signatures". For
    //    example, a program bundle may contain a file, and with it a second
    //    file that is a detached signature of the first file. These detached
    //    signatures are simply a Signature packet stored separately from the
    //    data for which they are a signature.

    class DetachedSignature : public PGP {
        public:
            typedef std::shared_ptr <DetachedSignature> Ptr;

            DetachedSignature();
            DetachedSignature(const PGP & copy);
            DetachedSignature(const DetachedSignature & copy);
            DetachedSignature(const std::string & data);
            DetachedSignature(std::istream & stream);
            ~DetachedSignature();

            // whether or not PGP data matches Detached Signature format without constructing a new object
            static bool meaningful(const PGP & pgp);

            // whether or not *this data matches Detached Signature format
            bool meaningful() const;

            PGP::Ptr clone() const;
    };

}

#endif
