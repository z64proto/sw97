#include "z_arrow_wind.h"

static u64 texture2[] = {
    0x0002111542b3e5ea, 0xeaefe9dafff2fcfe, 0xfffafef5fbf4e1f7, 0xdeeee37041130b00, 0x000407092696c1ef,
    0xe7f8e2e3f9fafafd, 0xfff9f5fbeefed2ea, 0xf5edc75a1e060a00, 0x00030607126788c3, 0xfdfbe0f1efe7fcfc,
    0xfff9edfef6f1dfee, 0xe3df932e12090202, 0x000409051f2646a9, 0xeef0f5f3f9eefbf8, 0xfffcf5faffd9f4f0,
    0xb3855c0f12030206, 0x000304062b0a51ae, 0xcadef8f9f2fff3fc, 0xfffef8fdffdbefea, 0xb65f600a13020204,
    0x0000050f1e1e67b7, 0xdbdff3eaf8fbf7ff, 0xfffcf0fafbe6e1ee, 0xe8837e29080b0002, 0x00040408093cb1bb,
    0xf2e5f2e6f4edffff, 0xfffeececfae6f3f7, 0xe7bc8440080f0400, 0x000404091841b6e0, 0xf1dff0f9f0f2fdff,
    0xfffef9fbf9e8ffde, 0xe8caac5c08190601, 0x00040b07373b94c2, 0xedf3f1f8eefef7fe, 0xfffdfdf9f5f5f8d3,
    0xf0c1b3560c130302, 0x0004060623197fbc, 0xe4fbe6f1eefef9fb, 0xfffcfef2fbf7f3e4, 0xc5ca851f0d1b0204,
    0x000102071a1352a0, 0xc4f7f4f1f6fafbfb, 0xfefafdeffbf8eff1, 0xbf944536030b0306, 0x00020f031322404c,
    0xb9f9ebe9f5fffbfd, 0xfffbfef4f9f7f4c5, 0xa748262205020404, 0x00031405012b3d5f, 0xc2e7eceafcf8fbfb,
    0xfffcfff4f9e6eade, 0x88501f0c140a0103, 0x00030b04042c5b67, 0xceeae6f5fde6fefe, 0xfefdfef4f3e0f0e5,
    0x9560192710040301, 0x0006030419237b6e, 0xe8faeef6eef9fbfc, 0xfcfcfcf4e4f0f8dc, 0xb986322b13020400,
    0x000701020f2e69b9, 0xd6f3f3f0e7f4f6f5, 0xf8f5f5e7efe3efec, 0xceaf4f380b010504, 0x0004020215374cb7,
    0xd1ede5e3eadfeeec, 0xefeceee9dae5eddf, 0xc99e612a08000408, 0x0001030516272976, 0xb8c6e0d2d6dce3e2,
    0xe3e2e0ded5d7d5dc, 0xba4d671f14000605, 0x0001030414230e50, 0x8fb9c4b6c6c7d0cf, 0xd0d1cdbdd0c1bcba,
    0x9e38471d05020a00, 0x000200080b111337, 0x76a9aeaeb2b3bbba, 0xbab6b9b5b4acab9a, 0x84262c1702040902,
    0x000402020216143d, 0x748f9e9d9b9ba2a0, 0xa29f9fa196979297, 0x661d261309020601, 0x00040105041d2459,
    0x6f89838a85818989, 0x898886868386837d, 0x6648280a0d040200, 0x0102010c02203e61, 0x5a6e6e74736c716f,
    0x6f6e6d71686e666f, 0x614b33060d020501, 0x0102010904303f4b, 0x524e575758565554, 0x5554535a51565150,
    0x513a31140c030501, 0x0101030904212f33, 0x3b3c4040413e3e3d, 0x403f4040413e3d36, 0x3f372f1005040301,
    0x0101020504121c24, 0x2b2f2e2b2e2c2b2d, 0x2d2e302e31292e28, 0x2c21210905020302, 0x01010104040a1316,
    0x1f1f1e1e22211e1f, 0x1f202022231d211b, 0x1d170f0508030101, 0x0101010305040a0b, 0x0e13131314120d0c,
    0x0d0e13151513110e, 0x0f0f080306010101, 0x0102010506050403, 0x0305050604050303, 0x0303040606040404,
    0x0405050503020201, 0x0101010303020202, 0x0203020202030202, 0x0202020203020202, 0x0202020202010101,
    0x0101020202020202, 0x0202020202020202, 0x0202020202020202, 0x0202020202010101, 0x0101020101010101,
    0x0102010101020101, 0x0101010102010201, 0x0101010102020101, 0x0101010101010101, 0x0101010101010101,
    0x0101010101010101, 0x0101010101010101, 0x0101010101010101, 0x0101010101010101, 0x0101010201010101,
    0x0101010101010101, 0x0101010202010202, 0x0302010202020202, 0x0202010102020201, 0x0101020202010101,
    0x0101020202030303, 0x0304040505040303, 0x0202040506050503, 0x0303040302010101, 0x010101020402060a,
    0x0c0d0f100e0f0d0d, 0x0a0d0e10100e0f0d, 0x0b07070203010101, 0x0101010304040a11, 0x1414171617171617,
    0x1616161818161615, 0x150d0d0602020101, 0x01010102030a1819, 0x211e2020211f2122, 0x20211f2122202120,
    0x1f1a130a02030101, 0x01020203060e2228, 0x2c292c2f2d2d2e2e, 0x2c2d2e2f2f2c2f28, 0x2b27211302060201,
    0x010203020e0f2530, 0x393b3c3d3a3e3d3d, 0x3d3e3e3f3c3c3e34, 0x3b2f2c1604060101, 0x010202020b082739,
    0x454c4549484c4d4c, 0x4e4c4c4a4c4b4a45, 0x3d3e290a05090102, 0x010101030a071d38, 0x46595857575a5a5b,
    0x5b5a5b565c5a5657, 0x46371a1402050203, 0x01010702080f1b20, 0x4f6b6564686f6d6c, 0x6f6b6e6b6c6b6857,
    0x4920110f03010202, 0x01020a0301161f30, 0x6276797780808182, 0x8381837f82777873, 0x462910070b060102,
    0x00020703031a353d, 0x7a8c8992988b9a99, 0x99999a949387918c, 0x5b3a0f180a030201, 0x000402031118544c,
    0xa1ada5aaa6afb0b1, 0xb1b1b2ada1a9af9c, 0x835f241e0e020300, 0x000501020c245392, 0xa9c1c1c0b9c4c6c5,
    0xc8c5c7b9c2b8c1c0, 0xa78c402e09010403, 0x00030202133144a4, 0xbcd6cfcdd6cbdad9, 0xdbd9dad6c9d2d9cd,
    0xb990592707000407, 0x0001030516272978, 0xbbcae5d7dbe3eaea, 0xebe9e8e5dcdfdce5, 0xc2506b2014000705,
    0x000103051728105c, 0xa5d5e3d4e6e8f4f3, 0xf4f4f1def4e2dcdb, 0xba41532206020c00, 0x0003000b0e161848,
    0x9de0e6e6efedf9f9, 0xfaf7f8f3f2e8e7d1, 0xb1333b1f02050c02, 0x0006020303211f5e, 0xb2def3f5f4f3fffc,
    0xfffcfafeebefe7eb, 0xa12d3c1e0e020901, 0x00070109063440a1, 0xcafbeffbf5eefffc, 0xfffbf9f9f3f6f4ea,
    0xbd85491217060200, 0x0004021a034787d4, 0xc4f4f4fbfbf1fffd, 0xfffaf4fce8f6e4f9, 0xdaa4700d1c040902,
    0x000402110285afd5, 0xedd9f8f7f8f9fbfe, 0xfffcf1fee4faedec, 0xe8a589331e070c01, 0x000208150376b0c6,
    0xebe2f7f0f9fbfaff, 0xfffffbf2f7eff3da, 0xf6d3ac330e0b0802, 0x0001050b06558ac0, 0xedfcf2dcfdeaf4ff,
    0xfffffef0fcd9fedc, 0xeeaaa82410050703, 0x000200090b3d88a4, 0xf5e9e1dbfff9f4fd, 0xfffff4fafedbffd5,
    0xe0a7631422090300, 0x000401041a166d83, 0xc8f0e6e8fffdfaff, 0xfffaf3fbfaf0fedd, 0xc9b94a111e030303,
    0x00060104171d6697, 0xc8faeaeffffaf7fe, 0xfff7fdeffbeef6ea, 0xea8b482d0e060704, 0x00020209104098dc,
    0xf0e6def4f8fff0fc, 0xfefbf8e9e4f1d8fb, 0xfb998a5c07070602, 0x00000f0c1b74cce8, 0xfdd9d7feedfff8fb,
    0xfefbf5fbeeeedef4, 0xe8e3be8814090402, 0x0000141a3f98e8d3, 0xebf0e2f0f8f6fefb, 0xfffdfaf3fbeae9ed,
    0xe7efe19733120c00,
};

static u64 texture1[] = {
    0x0000010101010102, 0x0202020201010000, 0x0000000000000000, 0x0000010101020201, 0x0001010103020202,
    0x0202020202010100, 0x0000000000000000, 0x0001010101010101, 0x0303040607080809, 0x0c0c090805040404,
    0x0405040301010203, 0x0303050605040403, 0x080a0c0f0f111317, 0x1715120e0c0b0c0d, 0x0c0b0a060304070a,
    0x09070a0909070503, 0x10141717191a2426, 0x1a15131919171311, 0x100b060304060b12, 0x1411101214140e09,
    0x1c21222123293832, 0x312a2223261c1818, 0x15120e0b0a0f171a, 0x1c1d2021201b140d, 0x252122262d333f3b,
    0x453e3636261f1d1a, 0x181a1e1f1f211c11, 0x15252c24180f0804, 0x291e191c20232a3d, 0x473937392b261e13,
    0x131d272a2920110c, 0x192e3427170b0400, 0x30251b15131c314a, 0x3f2924293028160b, 0x182b2e322e1c141a,
    0x2e3d403f3a301c09, 0x241c161521333d39, 0x2b211e1b1b181116, 0x2b3634403e25181e, 0x2e434b4f555a5641,
    0x09060c2640403028, 0x28251a110c0a1532, 0x4d5356594429180f, 0x17354f5243405261, 0x01011b4448302822,
    0x1c1611141b120c20, 0x3e504e381a0f111c, 0x38576f839179737e, 0x010a455c412c2c30, 0x2b24232b31261507,
    0x040b0b0000000e52, 0x7879718bbdbfbec3, 0x070650746c483a39, 0x44534a2e17101514, 0x04000000000a3884,
    0x8c858199b7bfcbb4, 0x0100112851604822, 0x2b4e491600000004, 0x070000022e73aeb6, 0xa99ba3ccf2cfc0aa,
    0x0d362d082a40532e, 0x2647502804000004, 0x090902000c486671, 0x706c7ea9e8e7d8c5, 0x5780604354456875,
    0x68778280775b3920, 0x1c32628482644841, 0x415a899ea8bfd2bd, 0x8dbabe9b655c708c, 0xa7b2b6bcad88583e,
    0x4685bcdaf0d99761, 0x5583a9a67e616267, 0x58acd3cfab8e878f, 0x9caec9bf5014397c, 0xb9d9d0afa9aa8d56,
    0x50a1b1975b2f1917, 0x3c6b96b3b2a0958a, 0x716ca5e7ac6fa3eb, 0xfff9e1bcc1b6a684, 0x66939b703e2a2833,
    0x47576e889a967954, 0x426e96c6f7fff7f1, 0xf6fbf8f2f5f7edda, 0xb69b543b333a5f7b, 0x687b8da0bab89878,
    0x86a38491bddcd8e9, 0xf9fdfdfcf8f4e9ec, 0xdc9138262d537e58, 0x889fb8d9e8ecf6e8, 0xde9ba2bfb0daf1ff,
    0xf5e8eef5f2e3e3e2, 0xd18d513f42667e42, 0xa8ada2a8c0e3ffff, 0xfcd7dcc6d2f5fac8, 0x8d82abd2d9d5c4c5,
    0xb58658555d6e908f, 0x966f4f2e2861bbf1, 0xfbfcf9f9fdfede8d, 0x637287918fa3b598, 0x9e78576a808ea5c1,
    0x67452a1100045acd, 0xf8fcfefefbf9e7c7, 0xb3acaba2a2aba382, 0x989e9297a8b5cbee, 0x50361d050000409c,
    0xc7ccd9ebe6d0b8a5, 0x937e63536b7d8792, 0x939ec8e6eef3f8ce, 0x4331160d0f245891, 0xacadb7c6bc9d867c,
    0x6f695c31203d648d, 0x909cd2d3e8f3d680, 0x77372538698b9fb3, 0xb9b3b7b3a78c786e, 0x5439311d0a20425a,
    0x74bca1b9b8a8b464, 0xc3793f5e99bfc6c3, 0xcbd2d3d3c08f767a, 0x6938181419201519, 0x3fbb91d195b0ab7b,
    0x96a95c596d95c6e4, 0xe9f2fafad3ae8d57, 0x452c1d2b4231050d, 0x33b887bad2cbabbe, 0xaea9604e5e8eebe5,
    0xe8eff6f5dccdbf54, 0x1b0002143b3d1e0e, 0x31a2c8bfd0d8eee5, 0xbc745b5f83b5f7e8, 0xdcd3c1e8d3cfd07b,
    0x453d2d061a40473c, 0x4878b8dcf4fff0c4, 0x826e6785b9e4f8ea, 0xcce0ceeaadb5d777, 0x4e61551d193d4b48,
    0x4f637eaad3d1ae89, 0x868599bce4fbfae9, 0xb7c4cca78e9be36d, 0x352e372b2a303547, 0x57698498adab7f5a,
    0x8da6c7e8f7f7f9fb, 0xe1c1ad9ab4cfd187, 0x7a89a5b29a78696f, 0x7e98a6b7c1a27052, 0xb5d7f0f6f3f2f6fe,
    0xfffcf4f0ece7d7bf, 0xb7d2dadce3d7be9f, 0x96a6bbbb97707695, 0xe0f7fdfbf7f4f0eb, 0xf5f9f4efe9cead92,
    0xbbd3c5d2d8ebe6c7, 0xb2bfbf9d756b87b7, 0xcfcbcfddf1f7f4ed, 0xe2d9cdc0b8b2918a, 0xd1cae7ece4f0f3e7,
    0xe6d9b49594978e84, 0xb39d9699b3deefe3, 0xd5c1b8aa9c9d9f9b, 0xdfe1f0e9e3f4f4f8, 0xfcdfb2938f887160,
    0xbaa38d757db4d1b7, 0xb7bfad8da39da8cd, 0xe6f1eff6f9fafafb, 0xfcf0cd9373595768, 0x908373697fb3c7b1,
    0xb3c6b47b8eb3c0d1, 0xccc7bfcbf1fdfefc, 0xfdf4f9cb976a636e, 0x5151608fbed3d3cc, 0xcec6ab7d616b7f7f,
    0x6f6877a1edfefdfa, 0xfafcfaf8e0a98a82, 0x5a5e82bed0b9b8bd, 0xad967f7368565b5d, 0x58687994eaedfbfb,
    0xfdfdffffffefd8c0, 0xa99bc0c9a58d8a87, 0x8087888171656d78, 0x697aaebeedc0eefe, 0xfdfcf1eafefffffe,
    0x9f9eb1bfb8aca694, 0x8ca0b8b39a95826f, 0x676f94b7e6cde6fe, 0xfcf9e5d0f8dbd5dd, 0x6b6f788793a2c0c9,
    0xbbd0d4dbecf2e8b4, 0x83717b97d1e6dffd, 0xfefdf9f5d9a48d9f, 0x777d837f8490b5de, 0xe2e9ddeffefffff4,
    0xaf839196bbe3d2f1, 0xfffefff1b88f8590, 0x99b4b09b96afcfda, 0xecfafbfefefcfefa, 0xc5878f94aec5b3c2,
    0xf2ffffe0a28b8c98, 0xb3d6d8c3b8cedac8, 0xe6fdfcfcfcfdfdff, 0xda978e95979c979f, 0xc0d3caa594989eba,
    0xb8d8e4e5ebf0ebe6, 0xedfbfefdfdf8f1fc, 0xe9ab959c999b9ca3, 0x9e979eb4c3b2afd0, 0xb7cbe0eaf2f5f8fe,
    0xfcfafbfcfaf4f4fc, 0xdda9a1a7a7a7a6a6, 0xa4a4afcfddc6bbcd, 0xc6cbd9e5eef8fcfc, 0xfdfcfbfbfbfdfde3,
    0xb8abb1b7bfcac9bd, 0xb3b4b5bccdd0c7d1, 0xd6dde8f6fefdfbfc, 0xfffefcfbfbfbfaec, 0xd9d5d7e5eff0f1db,
    0xc7c5c6c1d0ded3d5, 0xe4edf7fefffaf0ec, 0xf4fefefcfbfbfafd, 0xfffdfcfdf9f1eff0, 0xd8cbc7d1e7e8ddde,
    0xeef2f9fbf7f7f9f2, 0xe9fcfcfdfcfbfbf8, 0xf4f5faf7f9f7eef2, 0xe9dde2e7e7e7ebe9, 0xecebf8f1e8f9efe5,
    0xe7faf0fafdfcfdfa, 0xf3f1f9f7faf0edf5, 0xf6efeae2dadfecf3, 0xe7e9faeee9f9f3eb, 0xf5f6e8f4fdfefcf8,
    0xf3eef6faf9f4f5f7, 0xf5eee2dedfe7f2fa, 0xe9ebfaf1edf3fbfb, 0xf9eeebf1fbfdfbf7, 0xf2eef0f7f6f6f5ee,
    0xf0f3f1ebeef6fdfd, 0xeceef6fbf3f1f3f2, 0xf2f0f0f4f7f7f6f5, 0xf2f2f2f4f6f6f3f0, 0xf2f6f9f7f9fdfefd,
    0xf0eff3fafdfcfcfc, 0xf8f7f7f9f7f4f3f2, 0xf2f3f5f6f7f9f8f8, 0xf9fcfcfdfefefefd, 0xf4f3f5f8fafbfafc,
    0xfdfdfcfcfaf7f6f3, 0xf2f3f4f5f9fafafb, 0xfbfcfdfefefefefe, 0xf7f7f9fafafbfdfe, 0xfefefefdfbfaf8f8,
    0xf7f6f5f6f9fbfaf8, 0xf8f9fbfefffefffe, 0xfcfafcfcfcfdfefe, 0xfffffefefdfcfcfc, 0xfcfcfbf9fcfdfcf9,
    0xfbfcfdfefffffffe,
};

static UNK_TYPE vertices1[] = {
    0x00420271, 0xFFBE0000, 0x060006C2, 0x3E52C2FF, 0x000002BC, 0x00000000, 0x07000800, 0x007800FF, 0x005D0271,
    0x00000000, 0x080006C2, 0x575200FF, 0x00BD01DB, 0xFFB20000, 0x07000419, 0x5E3FD9FF, 0x00BD01DB, 0x004E0000,
    0x09000419, 0x5E3F27FF, 0x01AF001B, 0x00000000, 0x08000005, 0x6B3500FF, 0x0131001B, 0x01310000, 0x0A000005,
    0x4C354CFF, 0x000002BC, 0x00000000, 0x09000800, 0x007800FF, 0x00420271, 0x00420000, 0x0A0006C2, 0x3E523EFF,
    0x004E01DB, 0x00BD0000, 0x0B000419, 0x273F5EFF, 0x0000001B, 0x01AF0000, 0x0C000005, 0x00356BFF, 0x000002BC,
    0x00000000, 0x0B000800, 0x007800FF, 0x00000271, 0x005D0000, 0x0C0006C2, 0x005257FF, 0xFFB201DB, 0x00BD0000,
    0x0D000419, 0xD93F5EFF, 0xFECF001B, 0x01310000, 0x0E000005, 0xB4354CFF, 0x000002BC, 0x00000000, 0x0D000800,
    0x007800FF, 0xFFBE0271, 0x00420000, 0x0E0006C2, 0xC2523EFF, 0xFF4301DB, 0x004E0000, 0x0F000419, 0xA23F27FF,
    0xFE51001B, 0x00000000, 0x10000005, 0x953500FF, 0xFFA30271, 0x00000000, 0x100006C2, 0xA95200FF, 0xFF4301DB,
    0xFFB20000, 0x11000419, 0xA23FD9FF, 0xFE51001B, 0x00000000, 0x00000005, 0x953500FF, 0xFF4301DB, 0xFFB20000,
    0x01000419, 0xA23FD9FF, 0xFECF001B, 0xFECF0000, 0x02000005, 0xB435B4FF, 0xFFA30271, 0x00000000, 0x000006C2,
    0xA95200FF, 0x000002BC, 0x00000000, 0x01000800, 0x007800FF, 0xFFBE0271, 0xFFBE0000, 0x020006C2, 0xC252C2FF,
    0xFFB201DB, 0xFF430000, 0x03000419, 0xD93FA2FF, 0x0000001B, 0xFE510000, 0x04000005, 0x003595FF, 0x000002BC,
    0x00000000, 0x03000800, 0x007800FF, 0x00000271, 0xFFA30000, 0x040006C2, 0x0052A9FF, 0x004E01DB, 0xFF430000,
    0x05000419, 0x273FA2FF,
};

static UNK_TYPE vertices2[] = {
    0x0000001B, 0xFE510000, 0x04000005, 0x003595FF, 0x004E01DB, 0xFF430000, 0x05000419, 0x273FA2FF, 0x0131001B,
    0xFECF0000, 0x06000005, 0x4C35B4FF, 0x00000271, 0xFFA30000, 0x040006C2, 0x0052A9FF, 0x000002BC, 0x00000000,
    0x05000800, 0x007800FF, 0x00420271, 0xFFBE0000, 0x060006C2, 0x3E52C2FF, 0x00BD01DB, 0xFFB20000, 0x07000419,
    0x5E3FD9FF, 0x01AF001B, 0x00000000, 0x08000005, 0x6B3500FF, 0xFFBE0271, 0x00420000, 0x060006C2, 0xC2523EFF,
    0x000002BC, 0x00000000, 0x07000800, 0x007800FF, 0xFFA30271, 0x00000000, 0x080006C2, 0xA95200FF,
};

static Gfx sTextureDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(texture1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, 1, 15),
    gsDPLoadMultiBlock(texture2, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_MIRROR | G_TX_WRAP, 5, 6, 1, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

static Gfx sVertexDL[] = {
    gsSPVertex(vertices1, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 2, 7, 8, 0),
    gsSP2Triangles(2, 8, 4, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 6, 0, 6, 9, 10, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 9, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(10, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 14, 17, 18, 0),
    gsSP2Triangles(16, 19, 17, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 22, 0),
    gsSP2Triangles(22, 26, 27, 0, 22, 27, 23, 0),
    gsSP2Triangles(23, 27, 28, 0, 26, 29, 30, 0),
    gsSP2Triangles(26, 30, 27, 0, 27, 30, 31, 0),
    gsSP1Triangle(27, 31, 28, 0),
    gsSPVertex(vertices2, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 2, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSPEndDisplayList(),
};