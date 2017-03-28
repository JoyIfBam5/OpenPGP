#ifndef __AESECBVARKEY192__
#define __AESECBVARKEY192__

#include <string>
#include <vector>

// Test vectors from <http://csrc.nist.gov/groups/STM/cavp/documents/aes/KAT_AES.zip>

static const std::vector<std::string> AES192_ECB_VARKEY_KEY = {
    "800000000000000000000000000000000000000000000000",
    "c00000000000000000000000000000000000000000000000",
    "e00000000000000000000000000000000000000000000000",
    "f00000000000000000000000000000000000000000000000",
    "f80000000000000000000000000000000000000000000000",
    "fc0000000000000000000000000000000000000000000000",
    "fe0000000000000000000000000000000000000000000000",
    "ff0000000000000000000000000000000000000000000000",
    "ff8000000000000000000000000000000000000000000000",
    "ffc000000000000000000000000000000000000000000000",
    "ffe000000000000000000000000000000000000000000000",
    "fff000000000000000000000000000000000000000000000",
    "fff800000000000000000000000000000000000000000000",
    "fffc00000000000000000000000000000000000000000000",
    "fffe00000000000000000000000000000000000000000000",
    "ffff00000000000000000000000000000000000000000000",
    "ffff80000000000000000000000000000000000000000000",
    "ffffc0000000000000000000000000000000000000000000",
    "ffffe0000000000000000000000000000000000000000000",
    "fffff0000000000000000000000000000000000000000000",
    "fffff8000000000000000000000000000000000000000000",
    "fffffc000000000000000000000000000000000000000000",
    "fffffe000000000000000000000000000000000000000000",
    "ffffff000000000000000000000000000000000000000000",
    "ffffff800000000000000000000000000000000000000000",
    "ffffffc00000000000000000000000000000000000000000",
    "ffffffe00000000000000000000000000000000000000000",
    "fffffff00000000000000000000000000000000000000000",
    "fffffff80000000000000000000000000000000000000000",
    "fffffffc0000000000000000000000000000000000000000",
    "fffffffe0000000000000000000000000000000000000000",
    "ffffffff0000000000000000000000000000000000000000",
    "ffffffff8000000000000000000000000000000000000000",
    "ffffffffc000000000000000000000000000000000000000",
    "ffffffffe000000000000000000000000000000000000000",
    "fffffffff000000000000000000000000000000000000000",
    "fffffffff800000000000000000000000000000000000000",
    "fffffffffc00000000000000000000000000000000000000",
    "fffffffffe00000000000000000000000000000000000000",
    "ffffffffff00000000000000000000000000000000000000",
    "ffffffffff80000000000000000000000000000000000000",
    "ffffffffffc0000000000000000000000000000000000000",
    "ffffffffffe0000000000000000000000000000000000000",
    "fffffffffff0000000000000000000000000000000000000",
    "fffffffffff8000000000000000000000000000000000000",
    "fffffffffffc000000000000000000000000000000000000",
    "fffffffffffe000000000000000000000000000000000000",
    "ffffffffffff000000000000000000000000000000000000",
    "ffffffffffff800000000000000000000000000000000000",
    "ffffffffffffc00000000000000000000000000000000000",
    "ffffffffffffe00000000000000000000000000000000000",
    "fffffffffffff00000000000000000000000000000000000",
    "fffffffffffff80000000000000000000000000000000000",
    "fffffffffffffc0000000000000000000000000000000000",
    "fffffffffffffe0000000000000000000000000000000000",
    "ffffffffffffff0000000000000000000000000000000000",
    "ffffffffffffff8000000000000000000000000000000000",
    "ffffffffffffffc000000000000000000000000000000000",
    "ffffffffffffffe000000000000000000000000000000000",
    "fffffffffffffff000000000000000000000000000000000",
    "fffffffffffffff800000000000000000000000000000000",
    "fffffffffffffffc00000000000000000000000000000000",
    "fffffffffffffffe00000000000000000000000000000000",
    "ffffffffffffffff00000000000000000000000000000000",
    "ffffffffffffffff80000000000000000000000000000000",
    "ffffffffffffffffc0000000000000000000000000000000",
    "ffffffffffffffffe0000000000000000000000000000000",
    "fffffffffffffffff0000000000000000000000000000000",
    "fffffffffffffffff8000000000000000000000000000000",
    "fffffffffffffffffc000000000000000000000000000000",
    "fffffffffffffffffe000000000000000000000000000000",
    "ffffffffffffffffff000000000000000000000000000000",
    "ffffffffffffffffff800000000000000000000000000000",
    "ffffffffffffffffffc00000000000000000000000000000",
    "ffffffffffffffffffe00000000000000000000000000000",
    "fffffffffffffffffff00000000000000000000000000000",
    "fffffffffffffffffff80000000000000000000000000000",
    "fffffffffffffffffffc0000000000000000000000000000",
    "fffffffffffffffffffe0000000000000000000000000000",
    "ffffffffffffffffffff0000000000000000000000000000",
    "ffffffffffffffffffff8000000000000000000000000000",
    "ffffffffffffffffffffc000000000000000000000000000",
    "ffffffffffffffffffffe000000000000000000000000000",
    "fffffffffffffffffffff000000000000000000000000000",
    "fffffffffffffffffffff800000000000000000000000000",
    "fffffffffffffffffffffc00000000000000000000000000",
    "fffffffffffffffffffffe00000000000000000000000000",
    "ffffffffffffffffffffff00000000000000000000000000",
    "ffffffffffffffffffffff80000000000000000000000000",
    "ffffffffffffffffffffffc0000000000000000000000000",
    "ffffffffffffffffffffffe0000000000000000000000000",
    "fffffffffffffffffffffff0000000000000000000000000",
    "fffffffffffffffffffffff8000000000000000000000000",
    "fffffffffffffffffffffffc000000000000000000000000",
    "fffffffffffffffffffffffe000000000000000000000000",
    "ffffffffffffffffffffffff000000000000000000000000",
    "ffffffffffffffffffffffff800000000000000000000000",
    "ffffffffffffffffffffffffc00000000000000000000000",
    "ffffffffffffffffffffffffe00000000000000000000000",
    "fffffffffffffffffffffffff00000000000000000000000",
    "fffffffffffffffffffffffff80000000000000000000000",
    "fffffffffffffffffffffffffc0000000000000000000000",
    "fffffffffffffffffffffffffe0000000000000000000000",
    "ffffffffffffffffffffffffff0000000000000000000000",
    "ffffffffffffffffffffffffff8000000000000000000000",
    "ffffffffffffffffffffffffffc000000000000000000000",
    "ffffffffffffffffffffffffffe000000000000000000000",
    "fffffffffffffffffffffffffff000000000000000000000",
    "fffffffffffffffffffffffffff800000000000000000000",
    "fffffffffffffffffffffffffffc00000000000000000000",
    "fffffffffffffffffffffffffffe00000000000000000000",
    "ffffffffffffffffffffffffffff00000000000000000000",
    "ffffffffffffffffffffffffffff80000000000000000000",
    "ffffffffffffffffffffffffffffc0000000000000000000",
    "ffffffffffffffffffffffffffffe0000000000000000000",
    "fffffffffffffffffffffffffffff0000000000000000000",
    "fffffffffffffffffffffffffffff8000000000000000000",
    "fffffffffffffffffffffffffffffc000000000000000000",
    "fffffffffffffffffffffffffffffe000000000000000000",
    "ffffffffffffffffffffffffffffff000000000000000000",
    "ffffffffffffffffffffffffffffff800000000000000000",
    "ffffffffffffffffffffffffffffffc00000000000000000",
    "ffffffffffffffffffffffffffffffe00000000000000000",
    "fffffffffffffffffffffffffffffff00000000000000000",
    "fffffffffffffffffffffffffffffff80000000000000000",
    "fffffffffffffffffffffffffffffffc0000000000000000",
    "fffffffffffffffffffffffffffffffe0000000000000000",
    "ffffffffffffffffffffffffffffffff0000000000000000",
    "ffffffffffffffffffffffffffffffff8000000000000000",
    "ffffffffffffffffffffffffffffffffc000000000000000",
    "ffffffffffffffffffffffffffffffffe000000000000000",
    "fffffffffffffffffffffffffffffffff000000000000000",
    "fffffffffffffffffffffffffffffffff800000000000000",
    "fffffffffffffffffffffffffffffffffc00000000000000",
    "fffffffffffffffffffffffffffffffffe00000000000000",
    "ffffffffffffffffffffffffffffffffff00000000000000",
    "ffffffffffffffffffffffffffffffffff80000000000000",
    "ffffffffffffffffffffffffffffffffffc0000000000000",
    "ffffffffffffffffffffffffffffffffffe0000000000000",
    "fffffffffffffffffffffffffffffffffff0000000000000",
    "fffffffffffffffffffffffffffffffffff8000000000000",
    "fffffffffffffffffffffffffffffffffffc000000000000",
    "fffffffffffffffffffffffffffffffffffe000000000000",
    "ffffffffffffffffffffffffffffffffffff000000000000",
    "ffffffffffffffffffffffffffffffffffff800000000000",
    "ffffffffffffffffffffffffffffffffffffc00000000000",
    "ffffffffffffffffffffffffffffffffffffe00000000000",
    "fffffffffffffffffffffffffffffffffffff00000000000",
    "fffffffffffffffffffffffffffffffffffff80000000000",
    "fffffffffffffffffffffffffffffffffffffc0000000000",
    "fffffffffffffffffffffffffffffffffffffe0000000000",
    "ffffffffffffffffffffffffffffffffffffff0000000000",
    "ffffffffffffffffffffffffffffffffffffff8000000000",
    "ffffffffffffffffffffffffffffffffffffffc000000000",
    "ffffffffffffffffffffffffffffffffffffffe000000000",
    "fffffffffffffffffffffffffffffffffffffff000000000",
    "fffffffffffffffffffffffffffffffffffffff800000000",
    "fffffffffffffffffffffffffffffffffffffffc00000000",
    "fffffffffffffffffffffffffffffffffffffffe00000000",
    "ffffffffffffffffffffffffffffffffffffffff00000000",
    "ffffffffffffffffffffffffffffffffffffffff80000000",
    "ffffffffffffffffffffffffffffffffffffffffc0000000",
    "ffffffffffffffffffffffffffffffffffffffffe0000000",
    "fffffffffffffffffffffffffffffffffffffffff0000000",
    "fffffffffffffffffffffffffffffffffffffffff8000000",
    "fffffffffffffffffffffffffffffffffffffffffc000000",
    "fffffffffffffffffffffffffffffffffffffffffe000000",
    "ffffffffffffffffffffffffffffffffffffffffff000000",
    "ffffffffffffffffffffffffffffffffffffffffff800000",
    "ffffffffffffffffffffffffffffffffffffffffffc00000",
    "ffffffffffffffffffffffffffffffffffffffffffe00000",
    "fffffffffffffffffffffffffffffffffffffffffff00000",
    "fffffffffffffffffffffffffffffffffffffffffff80000",
    "fffffffffffffffffffffffffffffffffffffffffffc0000",
    "fffffffffffffffffffffffffffffffffffffffffffe0000",
    "ffffffffffffffffffffffffffffffffffffffffffff0000",
    "ffffffffffffffffffffffffffffffffffffffffffff8000",
    "ffffffffffffffffffffffffffffffffffffffffffffc000",
    "ffffffffffffffffffffffffffffffffffffffffffffe000",
    "fffffffffffffffffffffffffffffffffffffffffffff000",
    "fffffffffffffffffffffffffffffffffffffffffffff800",
    "fffffffffffffffffffffffffffffffffffffffffffffc00",
    "fffffffffffffffffffffffffffffffffffffffffffffe00",
    "ffffffffffffffffffffffffffffffffffffffffffffff00",
    "ffffffffffffffffffffffffffffffffffffffffffffff80",
    "ffffffffffffffffffffffffffffffffffffffffffffffc0",
    "ffffffffffffffffffffffffffffffffffffffffffffffe0",
    "fffffffffffffffffffffffffffffffffffffffffffffff0",
    "fffffffffffffffffffffffffffffffffffffffffffffff8",
    "fffffffffffffffffffffffffffffffffffffffffffffffc",
    "fffffffffffffffffffffffffffffffffffffffffffffffe",
    "ffffffffffffffffffffffffffffffffffffffffffffffff",
};

static const std::string AES192_ECB_VARKEY_PLAIN = "00000000000000000000000000000000";

static const std::vector<std::string> AES192_ECB_VARKEY_CIPHER = {
    "de885dc87f5a92594082d02cc1e1b42c",
    "132b074e80f2a597bf5febd8ea5da55e",
    "6eccedf8de592c22fb81347b79f2db1f",
    "180b09f267c45145db2f826c2582d35c",
    "edd807ef7652d7eb0e13c8b5e15b3bc0",
    "9978bcf8dd8fd72241223ad24b31b8a4",
    "5310f654343e8f27e12c83a48d24ff81",
    "833f71258d53036b02952c76c744f5a1",
    "eba83ff200cff9318a92f8691a06b09f",
    "ff620ccbe9f3292abdf2176b09f04eba",
    "7ababc4b3f516c9aafb35f4140b548f9",
    "aa187824d9c4582b0916493ecbde8c57",
    "1c0ad553177fd5ea1092c9d626a29dc4",
    "a5dc46c37261194124ecaebd680408ec",
    "e4f2f2ae23e9b10bacfa58601531ba54",
    "b7d67cf1a1e91e8ff3a57a172c7bf412",
    "26706be06967884e847d137128ce47b3",
    "b2f8b409b0585909aad3a7b5a219072a",
    "5e4b7bff0290c78344c54a23b722cd20",
    "07093657552d4414227ce161e9ebf7dd",
    "e1af1e7d8bc225ed4dffb771ecbb9e67",
    "ef6555253635d8432156cfd9c11b145a",
    "fb4035074a5d4260c90cbd6da6c3fceb",
    "446ee416f9ad1c103eb0cc96751c88e1",
    "198ae2a4637ac0a7890a8fd1485445c9",
    "562012ec8faded0825fb2fa70ab30cbd",
    "cc8a64b46b5d88bf7f247d4dbaf38f05",
    "a168253762e2cc81b42d1e5001762699",
    "1b41f83b38ce5032c6cd7af98cf62061",
    "61a89990cd1411750d5fb0dc988447d4",
    "b5accc8ed629edf8c68a539183b1ea82",
    "b16fa71f846b81a13f361c43a851f290",
    "4fad6efdff5975aee7692234bcd54488",
    "ebfdb05a783d03082dfe5fdd80a00b17",
    "eb81b584766997af6ba5529d3bdd8609",
    "0cf4ff4f49c8a0ca060c443499e29313",
    "cc4ba8a8e029f8b26d8afff9df133bb6",
    "fefebf64360f38e4e63558f0ffc550c3",
    "12ad98cbf725137d6a8108c2bed99322",
    "6afaa996226198b3e2610413ce1b3f78",
    "2a8ce6747a7e39367828e290848502d9",
    "223736e8b8f89ca1e37b6deab40facf1",
    "c0f797e50418b95fa6013333917a9480",
    "a758de37c2ece2a02c73c01fedc9a132",
    "3a9b87ae77bae706803966c66c73adbd",
    "d365ab8df8ffd782e358121a4a4fc541",
    "c8dcd9e6f75e6c36c8daee0466f0ed74",
    "c79a637beb1c0304f14014c037e736dd",
    "105f0a25e84ac930d996281a5f954dd9",
    "42e4074b2927973e8d17ffa92f7fe615",
    "4fe2a9d2c1824449c69e3e0398f12963",
    "b7f29c1e1f62847a15253b28a1e9d712",
    "36ed5d29b903f31e8983ef8b0a2bf990",
    "27b8070270810f9d023f9dd7ff3b4aa2",
    "94d46e155c1228f61d1a0db4815ecc4b",
    "ca6108d1d98071428eeceef1714b96dd",
    "dc5b25b71b6296cf73dd2cdcac2f70b1",
    "44aba95e8a06a2d9d3530d2677878c80",
    "a570d20e89b467e8f5176061b81dd396",
    "758f4467a5d8f1e7307dc30b34e404f4",
    "bcea28e9071b5a2302970ff352451bc5",
    "7523c00bc177d331ad312e09c9015c1c",
    "ccac61e3183747b3f5836da21a1bc4f4",
    "707b075791878880b44189d3522b8c30",
    "7132d0c0e4a07593cf12ebb12be7688c",
    "effbac1644deb0c784275fe56e19ead3",
    "a005063f30f4228b374e2459738f26bb",
    "29975b5f48bb68fcbbc7cea93b452ed7",
    "cf3f2576e2afedc74bb1ca7eeec1c0e7",
    "07c403f5f966e0e3d9f296d6226dca28",
    "c8c20908249ab4a34d6dd0a31327ff1a",
    "c0541329ecb6159ab23b7fc5e6a21bca",
    "7aa1acf1a2ed9ba72bc6deb31d88b863",
    "808bd8eddabb6f3bf0d5a8a27be1fe8a",
    "273c7d7685e14ec66bbb96b8f05b6ddd",
    "32752eefc8c2a93f91b6e73eb07cca6e",
    "d893e7d62f6ce502c64f75e281f9c000",
    "8dfd999be5d0cfa35732c0ddc88ff5a5",
    "02647c76a300c3173b841487eb2bae9f",
    "172df8b02f04b53adab028b4e01acd87",
    "054b3bf4998aeb05afd87ec536533a36",
    "3783f7bf44c97f065258a666cae03020",
    "aad4c8a63f80954104de7b92cede1be1",
    "cbfe61810fd5467ccdacb75800f3ac07",
    "830d8a2590f7d8e1b55a737f4af45f34",
    "fffcd4683f858058e74314671d43fa2c",
    "523d0babbb82f46ebc9e70b1cd41ddd0",
    "344aab37080d7486f7d542a309e53eed",
    "56c5609d0906b23ab9caca816f5dbebd",
    "7026026eedd91adc6d831cdf9894bdc6",
    "88330baa4f2b618fc9d9b021bf503d5a",
    "fc9e0ea22480b0bac935c8a8ebefcdcf",
    "29ca779f398fb04f867da7e8a44756cb",
    "51f89c42985786bfc43c6df8ada36832",
    "6ac1de5fb8f21d874e91c53b560c50e3",
    "03aa9058490eda306001a8a9f48d0ca7",
    "e34ec71d6128d4871865d617c30b37e3",
    "14be1c535b17cabd0c4d93529d69bf47",
    "c9ef67756507beec9dd3862883478044",
    "40e231fa5a5948ce2134e92fc0664d4b",
    "03194b8e5dda5530d0c678c0b48f5d92",
    "90bd086f237cc4fd99f4d76bde6b4826",
    "19259761ca17130d6ed86d57cd7951ee",
    "d7cbb3f34b9b450f24b0e8518e54da6d",
    "725b9caebe9f7f417f4068d0d2ee20b3",
    "9d924b934a90ce1fd39b8a9794f82672",
    "c50562bf094526a91c5bc63c0c224995",
    "d2f11805046743bd74f57188d9188df7",
    "8dd274bd0f1b58ae345d9e7233f9b8f3",
    "9d6bdc8f4ce5feb0f3bed2e4b9a9bb0b",
    "fd5548bcf3f42565f7efa94562528d46",
    "d2ccaebd3a4c3e80b063748131ba4a71",
    "e03cb23d9e11c9d93f117e9c0a91b576",
    "78f933a2081ac1db84f69d10f4523fe0",
    "4061f7412ed320de0edc8851c2e2436f",
    "9064ba1cd04ce6bab98474330814b4d4",
    "48391bffb9cfff80ac238c886ef0a461",
    "b8d2a67df5a999fdbf93edd0343296c9",
    "aaca7367396b69a221bd632bea386eec",
    "a80fd5020dfe65f5f16293ec92c6fd89",
    "2162995b8217a67f1abc342e146406f8",
    "c6a6164b7a60bae4e986ffac28dfadd9",
    "64e0d7f900e3d9c83e4b8f96717b2146",
    "1ad2561de8c1232f5d8dbab4739b6cbb",
    "279689e9a557f58b1c3bf40c97a90964",
    "c4637e4a5e6377f9cc5a8638045de029",
    "492e607e5aea4688594b45f3aee3df90",
    "e8c4e4381feec74054954c05b777a00a",
    "91549514605f38246c9b724ad839f01d",
    "74b24e3b6fefe40a4f9ef7ac6e44d76a",
    "2437a683dc5d4b52abb4a123a8df86c6",
    "bb2852c891c5947d2ed44032c421b85f",
    "1b9f5fbd5e8a4264c0a85b80409afa5e",
    "30dab809f85a917fe924733f424ac589",
    "eaef5c1f8d605192646695ceadc65f32",
    "b8aa90040b4c15a12316b78e0f9586fc",
    "97fac8297ceaabc87d454350601e0673",
    "9b47ef567ac28dfe488492f157e2b2e0",
    "1b8426027ddb962b5c5ba7eb8bc9ab63",
    "e917fc77e71992a12dbe4c18068bec82",
    "dceebbc98840f8ae6daf76573b7e56f4",
    "4e11a9f74205125b61e0aee047eca20d",
    "f60467f55a1f17eab88e800120cbc284",
    "d436649f600b449ee276530f0cd83c11",
    "3bc0e3656a9e3ac7cd378a737f53b637",
    "6bacae63d33b928aa8380f8d54d88c17",
    "8935ffbc75ae6251bf8e859f085adcb9",
    "93dc4970fe35f67747cb0562c06d875a",
    "14f9df858975851797ba604fb0d16cc7",
    "02ea0c98dca10b38c21b3b14e8d1b71f",
    "8f091b1b5b0749b2adc803e63dda9b72",
    "05b389e3322c6da08384345a4137fd08",
    "381308c438f35b399f10ad71b05027d8",
    "68c230fcfa9279c3409fc423e2acbe04",
    "1c84a475acb011f3f59f4f46b76274c0",
    "45119b68cb3f8399ee60066b5611a4d7",
    "9423762f527a4060ffca312dcca22a16",
    "f361a2745a33f056a5ac6ace2f08e344",
    "5ef145766eca849f5d011536a6557fdb",
    "c9af27b2c89c9b4cf4a0c4106ac80318",
    "fb9c4f16c621f4eab7e9ac1d7551dd57",
    "138e06fba466fa70854d8c2e524cffb2",
    "fb4bc78b225070773f04c40466d4e90c",
    "8b2cbff1ed0150feda8a4799be94551f",
    "08b30d7b3f27962709a36bcadfb974bd",
    "fdf6d32e044d77adcf37fb97ac213326",
    "93cb284ecdcfd781a8afe32077949e88",
    "7b017bb02ec87b2b94c96e40a26fc71a",
    "c5c038b6990664ab08a3aaa5df9f3266",
    "4b7020be37fab6259b2a27f4ec551576",
    "60136703374f64e860b48ce31f930716",
    "8d63a269b14d506ccc401ab8a9f1b591",
    "d317f81dc6aa454aee4bd4a5a5cff4bd",
    "dddececd5354f04d530d76ed884246eb",
    "41c5205cc8fd8eda9a3cffd2518f365a",
    "cf42fb474293d96eca9db1b37b1ba676",
    "a231692607169b4ecdead5cd3b10db3e",
    "ace4b91c9c669e77e7acacd19859ed49",
    "75db7cfd4a7b2b62ab78a48f3ddaf4af",
    "c1faba2d46e259cf480d7c38e4572a58",
    "241c45bc6ae16dee6eb7bea128701582",
    "8fd03057cf1364420c2b78069a3e2502",
    "ddb505e6cc1384cbaec1df90b80beb20",
    "5674a3bed27bf4bd3622f9f5fe208306",
    "b687f26a89cfbfbb8e5eeac54055315e",
    "0547dd32d3b29ab6a4caeb606c5b6f78",
    "186861f8bc5386d31fb77f720c3226e6",
    "eacf1e6c4224efb38900b185ab1dfd42",
    "d241aab05a42d319de81d874f5c7b90d",
    "5eb9bc759e2ad8d2140a6c762ae9e1ab",
    "018596e15e78e2c064159defce5f3085",
    "dd8a493514231cbf56eccee4c40889fb",

};

#endif // __AESECBVARKEY192__
