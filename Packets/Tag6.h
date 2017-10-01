/*
Tag6.h
Public-Key Packet

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

#ifndef __TAG6__
#define __TAG6__

#include "Key.h"

namespace OpenPGP {
    namespace Packet {

        // 5.5.1.1.  Public-Key Packet (Tag 6)
        //
        //    A Public-Key packet starts a series of packets that forms an OpenPGP
        //    key (sometimes called an OpenPGP certificate).
        //
        // ...
        //
        // 5.5.2.  Public-Key Packet Formats
        //
        //    There are two versions of key-material packets.  Version 3 packets
        //    were first generated by PGP 2.6.  Version 4 keys first appeared in
        //    PGP 5.0 and are the preferred key version for OpenPGP.
        //
        //    OpenPGP implementations MUST create keys with version 4 format.  V3
        //    keys are deprecated; an implementation MUST NOT generate a V3 key,
        //    but MAY accept it.
        //
        //    A version 3 public key or public-subkey packet contains:
        //
        //      - A one-octet version number (3).
        //
        //      - A four-octet number denoting the time that the key was created.
        //
        //      - A two-octet number denoting the time in days that this key is
        //        valid.  If this number is zero, then it does not expire.
        //
        //      - A one-octet number denoting the public-key algorithm of this key.
        //
        //      - A series of multiprecision integers comprising the key material:
        //
        //            - a multiprecision integer (MPI) of RSA public modulus n;
        //
        //            - an MPI of RSA public encryption exponent e.
        //
        //    V3 keys are deprecated.  They contain three weaknesses.  First, it is
        //    relatively easy to construct a V3 key that has the same Key ID as any
        //    other key because the Key ID is simply the low 64 bits of the public
        //    modulus.  Secondly, because the fingerprint of a V3 key hashes the
        //    key material, but not its length, there is an increased opportunity
        //    for fingerprint collisions.  Third, there are weaknesses in the MD5
        //    hash algorithm that make developers prefer other algorithms.  See
        //    below for a fuller discussion of Key IDs and fingerprints.
        //
        //    V2 keys are identical to the deprecated V3 keys except for the
        //    version number.  An implementation MUST NOT generate them and MAY
        //    accept or reject them as it sees fit.
        //
        //    The version 4 format is similar to the version 3 format except for
        //    the absence of a validity period.  This has been moved to the
        //    Signature packet.  In addition, fingerprints of version 4 keys are
        //    calculated differently from version 3 keys, as described in the
        //    section "Enhanced Key Formats".
        //
        //    A version 4 packet contains:
        //
        //      - A one-octet version number (4).
        //
        //      - A four-octet number denoting the time that the key was created.
        //
        //      - A one-octet number denoting the public-key algorithm of this key.
        //
        //      - A series of multiprecision integers comprising the key material.
        //        This algorithm-specific portion is:
        //
        //        Algorithm-Specific Fields for RSA public keys:
        //
        //          - multiprecision integer (MPI) of RSA public modulus n;
        //
        //          - MPI of RSA public encryption exponent e.
        //
        //        Algorithm-Specific Fields for DSA public keys:
        //
        //          - MPI of DSA prime p;
        //
        //          - MPI of DSA group order q (q is a prime divisor of p-1);
        //
        //          - MPI of DSA group generator g;
        //
        //          - MPI of DSA public-key value y (= g**x mod p where x
        //            is secret).
        //
        //        Algorithm-Specific Fields for ELGAMAL public keys:
        //
        //          - MPI of ELGAMAL prime p;
        //
        //          - MPI of ELGAMAL group generator g;
        //
        //          - MPI of ELGAMAL public key value y (= g**x mod p where x
        //            is secret).

        class Tag6: public Key {
            protected:
                Tag6(uint8_t tag);

            public:
                typedef std::shared_ptr <Packet::Tag6> Ptr;

                Tag6();
                Tag6(const Tag6 & copy);
                Tag6(const std::string & data);
                virtual ~Tag6();

                virtual Base::Ptr clone() const;
                Tag6 & operator=(const Tag6 & copy);
        };
    }
}

#endif
