// Compressed Data Packet
#include "packet.h"

#ifndef __TAG8__
#define __TAG8__
class Tag8 : public Packet{
    private:
        uint8_t comp;
        std::string compressed_data;

        std::string compress(std::string data);
        std::string decompress(std::string data);

    public:
        Tag8();
        Tag8(std::string & data);
        void read(std::string & data);
        std::string show();
        std::string raw();

        Tag8 * clone();

        uint8_t get_comp();
        std::string get_compressed_data();

        void set_comp(uint8_t c);
        void set_compressed_data(std::string data);

        // get and set decompressed data
        std::string get_data();
        void set_data(std::string data);
};
#endif