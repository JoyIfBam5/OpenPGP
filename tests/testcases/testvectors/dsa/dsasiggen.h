#ifndef __DSASIGGEN___
#define __DSASIGGEN___

#include <string>
#include <vector>

// Test vectors from <http://csrc.nist.gov/groups/STM/cavp/documents/dss/186-2rsatestvectors.zip>

static const std::string DSA_SIGGEN_P = "f5422387a66acb198173f466e987ca692fd2337af0ed1ec7aa5f2e2088d0742c2d41ded76317001ca4044115f00aff09ad59d49b07c35ec2b25088be17ac391af17575d52c232153df94f0023a0a17ca29d8548dfa08c5f034bad0bd4511ffae6b3c504c6f728d31d1e92aad9e88382a8a42b050441a747bb71dd84cb01d9ee7";
static const std::string DSA_SIGGEN_Q = "f4a9d1750b46e27c3af7587c5d019ffc99f11f25";
static const std::string DSA_SIGGEN_G = "7400ad91528a6c9e891f3f5fce7496ef4d01bf91a979736547049406ab4a2d2fe49fa3730cfb86a5af3ff21f5022f07e4ee0c15a88b8bd7b5f0bf8dea3863afb4f1cac16aba490d93f44be79c1cd01ce2e12dfdb75c593d64e5bf97e839526dbcc0288cd3beb2fd7941f67d138faa88f9de90901efdc752569a4d1afbd193846";

static const std::vector<std::string> DSA_SIGGEN_MSG = {
    "96452f7f94b9cc004931df8f8118be7e56f16a1502e00934f16c96391b83d72490be8ffa54e7f6676eb966a63ce657a6095f8d65e1cf90a0a4685daf5ae35babc6c290d13ed9152bba0cc76d2a5a401d0d1b06f63f85018f12753338a16da32461d89acef996129554b46ca9f47b612b89ad3b90c20b4547631a809b982797da",
    "2442558a93ab35d337859dfcdc766801de7e69f84987ae473f3d05159a1fc0fed3d6b60b23c68ae1e7e4303849c7ac8f1d011d1e09affb0de94f9de371d2fe4114f2c0d025c671783d940ed3dce6c5e153e0fffde1d09e0f1c07830492e8547bb13e7cc1e4d37300ff3e3fb3ddfc3b5d47c2177b181220b79f0dc15e45884a14",
    "8156dde7d803fb5e448f24b6fc65e9d3a89dd2a5c5cdeb9f4a227f6b8caf24dc5f04f7247e0329472defbbcf1cc685c28fd17dd1bc7936d2745ca77006a02e216187d5597844d3feeb0e561be3727fd83dedaeaaecba01c798e917dd8bb11a03ce07fcf08f6f006ac6137d021912dffffc1aee981c395366fef05718e38aef69",
    "6eb86b8da45de61f2763623f4f9511a308fe5f5f24f3de09f6547f1b1c0e08989ce4c2f33370722ce9648b3ce916a2b3903c22a0c4f341b18707339bcb6e9dbc88154cff0de0270194ec62721817f5bd6bc24deb83d541c4140447386551e8fe5cd2717bdab5ece54f814ea8859ef209c018460909a0c58cc7d425ba8fc0d1a6",
    "ef704a9751b197cbab02c41c6aedcaf65cda019dc2d2d815a689c93f6f9c8c44b2178b364b3a97f5ad7dd95076d10b6d4729e86bd239e045347d11fa867e73ebae5152847b60021ef26dce24e2d33175bf0f490aac8088d9da6badf91142f2068c2687c70aaa400e22da8be0d77ca4d66c950cc37a2f37973f5a84843971735f",
    "fb1a183bef2774df13ca9d6e9018a7b3d25908638f02b4ad05e4861283a2e2772a689979f5da0c00f74b9517e43022fbd3d42371424da75d5baec191767e31e3de694082d836ec8ae1f945d5388a17159c35c91f57b3858a7b599a796c901eb59e85d7ffa0225ca45a3c7751930ece29b6e6c215d51e985bee4ed6736dc0f016",
    "909bd8364d24376cf1a0cec4cbaf0c074d899a4612f08471206399256a9514c4991d7ccb0b6fc8601c0bc72ba5f4bf67c3645539dabeac40d9c4d16dbf0a57155eaa3e445e3a1a5586fb70bf37536432397e91e3bb803924945e9e37cf8daf6467abe7494f6d7372b5d9932988b5428f383f19ecbd1e7144da99c82ba30766d9",
    "edfd936e3353580bdc1bfe66295ef48024d0b43d330ef6c5ee24242b2e520f4d6610e0fb374f515b3e021d8b31ddb4892a5c34504208954462f623d05690324e23970d279b692f3b2e80b683033c14f448e208a7c6e4cd38b863916cddf22816cc9d023b882a5a74549eb194c8037b8b2569188ae62b056897735445ea00596d",
    "7773e6891e9290b559e9b3151e2793eb7ab44605d6e7188f7a792d2b4f396844e9028c9ec4eaa132cebd9a3a26aa3488243b211b998b66f458b30226f585d02dcc7dae8045f4df6a5797ae154b1854e8c3231c12fa94c5674de7286cfbef1bad29cb945729171202fb5f38cf14d9bbb35f537f12826afd9062fde824e9e1106e",
    "d0a895655ea4f48e51c9cd6bc19d1d52c1bd9e6aed22f60d42a42e7133bc6588f88ec6242a27b75f8d03533a2dd21b84ac7be8feda6225bc86e73ace942f4b205026239f02c46b9dc39020778e6344759a6fd3f1e77ff8bc178081bd804191db7f77941e0f0478109a791b6a0fd9ffec34a0458d3e03d9d49f7aea861f7c9d81",
    "9402c3945911c34f31a9d7be273df8ffb0fce9e13149d3f5c26c2ce83287dc0f4bcba34457ebb5f1e3d1a86ac2919080559b69530a34b567232765fab9b7fd9500d9f4e2cca059bd54f9bd8d36984cd5bc323d065eed6d98881546589d10e6043b947d15c117f7dc0e87dcd08c3c74276e2b2ea3355c42af799e96aae679df83",
    "ef003bf0929d1882a1603a1b1b6227b6618cf79fdfaa1327eec13d9cf9a3d178dfc04ad9993f07311d4e503f82b6943e64b2f45c8a01066dc63ad2e11d6021f328b6f824bad45fe8c4fb669f75a66ac6a561956f73dea4ee2d46edd671cda02492894db93d84a60e5d1087233b5a33b8ea42e1c0e26a7713eb8d95633d13d571",
    "689c06a852105401bac5b1b296a5f57daf254c2fb310e97f8686f93ada44d69dff267e02fce943c0de36c44c50dc1ba46c5e58edd1ad2f5af636ed51be1fb0c94cced8f718acb929422892f227fec38733b93a69f6762f4479ec1117d2a9c096f69efccdcfde1e058ea305eb439254efaa40dbeb48f45205b7af4dd63f696ccc",
    "49614e9c6427f7ecd20043c93a09a5684e3b0897f3f714f3a2e1ad5b0ef2bda407c9348e9e424df78a4a124fcaf2224c8cc2b2df4e4fd266430ff123f86da4ed3719a3252ca214ecc6460d9360095453a104693fa000c6764c43659d0caa838da2f8a448556ed7324f9c3b7e4476c2e654aa359f3331788c872410b291d2e2ec",
    "f75f0ebf1f92b3512786f4792e2d095b5f598b0420243ef08c8f2ecf2469fd88c1737b7fcec17714b363d56c9445e1733c54e32154e2f4fdd94c0fe0cdda6bfc2ce6081c2141882d7ad241fe5a8090442d5370e1e1d54b6654bf10d608d185ad1e02df2082d990a7631b60b9e6a6bfd61b9d59cb30c5ec32e42f56383f18f3a3",
};

static const std::vector<std::string> DSA_SIGGEN_X = {
    "485e8ad4a4e49a85e0397af0bb115df175ead894",
    "497a2a6bed53eb794cb2f5d2b674d8917c2e9545",
    "205bc343787dcd90c9cbd87d64244c84bf51c21d",
    "716f09df7e8abc8b7f44e4b830efeaa81ac4f61a",
    "b78cfcb8150ea5236b1b4cc44d7bf55ea642bc2c",
    "62c5b9cb5f29702e07b145178311bc649e5867ba",
    "763dd1a2fa7a4381f89b303a4e5304865f0fd5f9",
    "b8617b5c050f43ac42fe3b2b28977a4d427c4655",
    "49f14f1ca8818647e2c35e4df83ea6d324256813",
    "ddc5ca24fbdd075e983232ac2d18fc45ae513cf3",
    "8fbd66112a6005412542af9a055b5885c7df48aa",
    "3116ddce5ef1d092a72da0cda23981c8133d6830",
    "d1a8f8d707c583075f38774ac21637fda8380e34",
    "6b2011f0c947cd2c804a3f118544dcc8487ab8c8",
    "13d8071de4ff2588b920e1dcce25b1471273121d",
};

static const std::vector<std::string> DSA_SIGGEN_Y = {
    "ec86482ea1c463198d074bad01790283fb8866e53ab5e821219f0f4a25e7d0473f9cbd2ab7348625d322ea7f09ec9a15bbcc5a9ff1f3692392768970e9e865545d3aa2934148f6d0a6ec410a16d5059c58ce428912f532cbc8f9bbbcf3657367d159212c11afd856587b1b092ab1bdae3c443661e6ba27078d03eb31e63e5922",
    "bbac399917b73b53c691c4ac5794ae7e875ac1d91919108ff4059d52b1b61efee48897b1c4f86d7a3c45d547703b017ca8c681989e6d2659fc0caf298e56855a757d7ccd831ad909040f7e30892af6e8303079a0927e15982cd32a97f004135a795c49926a2c6571ded0b526576ee30147cf364fff26fc4e2595603564e15530",
    "497c934eda1e6eed086b5e8d19053808eaf52ceaa9b0ea17aac8be232ee3a3c3af47fce20cb2626906156f00d2fa3dcb16dbe22d3e6049ce2d0c8a27d27eade10553a3360192612af57b900fa34ea8c811e2190a8a5a91790813c4f5667f993fe16d770ccd717255c26e65fa0b5ad02d33f097e1aa59c7ddf9c46d2fb51caff9",
    "573b3165403d4488251152d1cc517a39af7bd7c60641662cfc42be647ea4ab72cc05993300f8030f6ac0b14e4333739d015fa48941b8defeffed5256ec4d53a46f2c3f7298dc443ce949ac9cb37dc608189d9169f2c680446f0824a73220d645527b6805aea196847b4f8f32b2063fb0c8129031a3953dc94b3285b7c0e5c5f6",
    "a9fcd269b906728bdef7f11f92b989200807bbd689a8b338678ddb99f70f1f4b892975c70a8d5dfbbb7fbfeb00fbff3d03111e4475470dca9256e14d101a42d130118a1e284c236bdd58d64f0d9b4649240fa7830bf14636faa5294113f6477a6106647b617836a2ada5e35fd571ff0c9ab0964ebc423af4802d8a19258c550c",
    "adc96f9a87bb90ffcdddd148538e87fb05a6e52c4547f72dd11b8996e0258678b40db8724c3e0acd565dfb4b08f531685cd27394fa3ac3b3e9b6e5af2f3ada0147d51248d823064c271a49817f7f4ecc54573018b0ab327faa25a6717f2418485314198114effb58ddcc8dd5809e731abe51090681c2a811850b635e64c6414b",
    "8989ef9b6368f0139c6ec59676945d46700bcd6de9100a144ead9b84e2810a514470f286b6248faa437e2c8571fd2b86aafe0fdf69e3bc29f150e5a2f308c2dc377feef183ff25eab62a5491e832b4c3ce27a3bc9276b0bad4ef7fc602cdfde7b7ac35c250c8cb214144a98d0f73cf443b7c2efe15537c2f6fdfdd899ea9869b",
    "ef0b8b09503981a2d9d86db08487e317079c9fe38b3d7c64f7ceece94414839523955068d02d5aeff202f885c3a6d4e909cd3f4ca08910065d7f6147c832a08efff6f5aebb6d7aad8d523be3c80ae894149b50f82475a4e1f7de900cfefa4df56b567eac906908143dce40d414033c4d8480d21b45dd88353ae627852a12756a",
    "94af211274719cc945275450ec91b73df14319653a2dd6a0bf8f3f2b4ed8de8f177720b9c356bf32f8928d93f57e7af7b6708d2e13038744003d789cb2d72ea5ee22b35d4c181c003b6b5d108eaa89c92ecd99e78b30a95b0ad372535f9c0d16f14af33f711dd18841ae4eeafdf76ee3a33feb7f3b1054447fd1554fa698f443",
    "6ba2116f8d3ba6379fffe636bc0cbcd625c3a0e91b8a36e1e7209b8f8502213ccfae27d26eb14bf7719b20ed1ab79bc57270c4a169e33c0f099e0825fd888160f008f1985f3eb0ec8204e941e4a7084b5e326a1aaf802eb5a105c107a0a6adae0c72b088034a0d7f11fb3d8030b1b2b96f6b7a4b22266888576766ef72f288e7",
    "34c5bc0d97d79bcf2205ce77916ce8b6d247695a0feefaf5baf8cfa14345f383221f3c1744d2d5400c9313028ceb7589cfa5d906a1f3d49f7c6eaf4c8b091d6c7631842cf2a4cf37c7d70d6054e58026b96fea287f3518a1ce4508c62f33f2ba1463875a92cc2e0f56b2f0a6620b1e22f9a8fd13a663e9b9d446c9169188d2e7",
    "b3ea34513bfd5f6bf4b21b7e790f2dbf07be8811506239a2277b01c13e8497406365c1dde1c4a610e616299fc8fb086f888837000d95915676b02bdd9da99fdde63c1f7e1613ff49c942eb2685b4d2a3c5c3814be9a001cf4c6f633837ef85380a1f9ca77f4952f1cb2fa95e185fc5c53f5e4162d1dfb70bfd863e7217749baa",
    "c012c947cad108fcd6db6de31f23a8ffaa2ccc5c5829e71f9e4eaa5c2da0b033cef4b10775d95b6da1c7accf719d6369370e0fd0b1e6149185a3184c183539441c7a378ee2cb2026c99b8ccfe4149bb6268adfc2a0ffce3a76a43c387382b23f7e342280b893ca3a0cc97225b791edbe9b8d722aa324cf152b8497696e5d9583",
    "68094aee62043f9a3f698f3227374d484d98b400ced910757dc9dd3855ff3b2ed5f0af99536dc7a60aef69a3abca67a2d36f8a16241b033d5126b7ff29f9f2fc1ea388ab33938fce6cbd229f0e46a9809c353d8fd429e45b03b774913d3df045b9536036d6d2a53cf81ad9c6a6a12490b5449bbc5c8ebf4342dbb3d06f211aba",
    "470fa4196363933af41df5643c3b3f79f9cbf2b14fb63881e7759be0d75f5ba2d42d747c646c9db583a6f86bc4158da2f0ccdc2a9a309a798a866b662775bfbc875ac459e1335e3ad6ce9bb84450acd33a4e7d1e58cb0d7f60a0ce68e99feeaa6457bdcba818e0135715cea14e42801f24976db7e56063ede5ddf22320f189e6",
};

static const std::vector<std::string> DSA_SIGGEN_K = {
    "dd40049049bec3ef358731c86e2fc429ff0bdd33",
    "db5aad1489bd8d8718e8a4902490fd8fd7cc04e6",
    "00327d7a18cfb09e2ef63f82499907e911410d9a",
    "02158026c145f057aaa29b62f893059efff78b97",
    "07c291c8085bf32710ad1b46b56433cf10e4c445",
    "86af85bc57b71e9958c11f6e9c2b16e4382e3821",
    "59676917dcc590af5e721f64e4acb9afdb8ac244",
    "82673837320ae52d4ffece84dbec5d13e75be443",
    "82af99d99439b5e2b158e026e3eab1e59d6265c7",
    "9a11aa2fb4d2e6a7d5b976db98d1520f255ff600",
    "a875a5f296cefd0fe22e60f220e4c6bf911782d3",
    "84a334fef01ba71826b905d91f9e42f82a88296f",
    "282a4d2270297e6bf448ffced20e1cae4ecd1162",
    "576f659367ed035fea23673328d723fdc087f916",
    "d0b5ec481929cb65a1c1f29525b454ea5c18b0d6",
};

static const std::vector<std::string> DSA_SIGGEN_R = {
    "ed4715b8d218d31b7adf0bea5165777a7414315e",
    "99c5988fa945373fdb92b53ce180131ff85f9ae8",
    "3336735b585c0f424929df04d6f044d81ed0bd42",
    "225ef9d7ec4e936720fd8fd5c3e063717e0f08f9",
    "21ef1c00784249f22bbf11feb212c3496844eaa3",
    "cf3a6af86e44fcb297bc5d648dff8b680111c014",
    "e195c93933c2dea8fb96f1425a382d08f124387b",
    "72c034e78cf4bd881fef242018008cac45b8b37a",
    "e6b0613d026d6e6b252d398202f61e74e6f3d53d",
    "0ccb90bfecd259dea5c978d33d6c17e0eeb27135",
    "2d46d7659a7bd3690ee27fa086223528e6dc895b",
    "e5d68bcb2b07c0def180a4f5a92f615d0eb0acaf",
    "89a761e1fa972667b0daf011e93e9076c7037f61",
    "4a8437825ad0143fc3f4b8635e9a9a85e610f37f",
    "1b9f4b97da1343c0a4f2961b1253013b518308b0",
};

static const std::vector<std::string> DSA_SIGGEN_S = {
    "29c70a036aa83eb0742f1fa3f56ccead0fc0f61d",
    "d1e636e57953720ccc9651bce341dcaca60e157d",
    "61f95d173669e0968d05d5be7cb0e12bf27403c4",
    "32554575de3afc77f239a1a3678493dbf1b98b01",
    "8f8acac1620d5e0e88630b7c108e6a08408f53c0",
    "f199c34a20adf8d15881291b3621a2c90e6134fa",
    "480a794776333a7ac3500876812f395025f9640c",
    "3d3e26bd232e8382a841f9754fdec679799fc03e",
    "b1b35fe1916a6c2549ab0e3f18c2cfa2dd45298d",
    "4157e51f4b2c679026c472ae002424dcf50a5245",
    "b2fb7c2a87b787a02d386b8c67c79518b4f3cea8",
    "219cee9517f905556b2a334132063424dad59dfa",
    "a0455a604ea904c8d0831d190308f9b4c8099bb0",
    "debf06e261d68b0a99780ced918997681f2f930a",
    "436f1199978c53de730239ec9ce2b9fa9add8979",
};

#endif // __DSASIGGEN__
