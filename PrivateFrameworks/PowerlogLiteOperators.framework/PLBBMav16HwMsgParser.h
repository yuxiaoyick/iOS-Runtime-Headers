/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMav16HwMsgParser : PLBBMav13HwMsgParser {
    struct { unsigned int x1[7]; } * _mav16AppsPerf;
    struct { unsigned int x1[4]; } * _mav16AppsSleepVeto;
    struct { unsigned int x1[21]; } * _mav16MpssSleepVeto;
    struct { unsigned int x1[16]; } * _mav16QdspSpeed;
    struct { unsigned int x1; unsigned int x2; int x3; unsigned int x4[17]; unsigned int x5[12]; unsigned int x6[6]; unsigned int x7[3]; unsigned int x8[6]; unsigned int x9[2][7]; unsigned int x10[2][6]; unsigned int x11[2][6]; unsigned int x12[3]; unsigned int x13; unsigned int x14[3][2]; unsigned int x15[3][3][3]; unsigned int x16; unsigned int x17[3]; unsigned long long x18[8]; struct { unsigned char x_19_1_1; unsigned char x_19_1_2; unsigned char x_19_1_3[2]; unsigned char x_19_1_4[2]; } x19; } * _rfEnhLTEMav16;
    struct { unsigned int x1; unsigned int x2; unsigned int x3[2][3]; unsigned int x4[2][4]; unsigned int x5[2]; unsigned int x6[4]; unsigned int x7[4]; unsigned int x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; } * _rfEnhWCDMAMav16;
}

@property (nonatomic) struct { unsigned int x1[7]; }*mav16AppsPerf;
@property (nonatomic) struct { unsigned int x1[4]; }*mav16AppsSleepVeto;
@property (nonatomic) struct { unsigned int x1[21]; }*mav16MpssSleepVeto;
@property (nonatomic) struct { unsigned int x1[16]; }*mav16QdspSpeed;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; int x3; unsigned int x4[17]; unsigned int x5[12]; unsigned int x6[6]; unsigned int x7[3]; unsigned int x8[6]; unsigned int x9[2][7]; unsigned int x10[2][6]; unsigned int x11[2][6]; unsigned int x12[3]; unsigned int x13; unsigned int x14[3][2]; unsigned int x15[3][3][3]; unsigned int x16; unsigned int x17[3]; unsigned long long x18[8]; struct { unsigned char x_19_1_1; unsigned char x_19_1_2; unsigned char x_19_1_3[2]; unsigned char x_19_1_4[2]; } x19; }*rfEnhLTEMav16;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3[2][3]; unsigned int x4[2][4]; unsigned int x5[2]; unsigned int x6[4]; unsigned int x7[4]; unsigned int x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; }*rfEnhWCDMAMav16;

- (void)logMav16AppsPerfWithLogger:(id)arg1;
- (void)logMav16HwRFEnhLTEWithLogger:(id)arg1;
- (void)logMav16HwRFEnhWCDMAWithLogger:(id)arg1;
- (void)logMav16MPSSWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (struct { unsigned int x1[7]; }*)mav16AppsPerf;
- (struct { unsigned int x1[4]; }*)mav16AppsSleepVeto;
- (struct { unsigned int x1[21]; }*)mav16MpssSleepVeto;
- (struct { unsigned int x1[16]; }*)mav16QdspSpeed;
- (void)parseData:(id)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; unsigned int x4[17]; unsigned int x5[12]; unsigned int x6[6]; unsigned int x7[3]; unsigned int x8[6]; unsigned int x9[2][7]; unsigned int x10[2][6]; unsigned int x11[2][6]; unsigned int x12[3]; unsigned int x13; unsigned int x14[3][2]; unsigned int x15[3][3][3]; unsigned int x16; unsigned int x17[3]; unsigned long long x18[8]; struct { unsigned char x_19_1_1; unsigned char x_19_1_2; unsigned char x_19_1_3[2]; unsigned char x_19_1_4[2]; } x19; }*)rfEnhLTEMav16;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3[2][3]; unsigned int x4[2][4]; unsigned int x5[2]; unsigned int x6[4]; unsigned int x7[4]; unsigned int x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; }*)rfEnhWCDMAMav16;
- (void)setMav16AppsPerf:(struct { unsigned int x1[7]; }*)arg1;
- (void)setMav16AppsSleepVeto:(struct { unsigned int x1[4]; }*)arg1;
- (void)setMav16MpssSleepVeto:(struct { unsigned int x1[21]; }*)arg1;
- (void)setMav16QdspSpeed:(struct { unsigned int x1[16]; }*)arg1;
- (void)setRfEnhLTEMav16:(struct { unsigned int x1; unsigned int x2; int x3; unsigned int x4[17]; unsigned int x5[12]; unsigned int x6[6]; unsigned int x7[3]; unsigned int x8[6]; unsigned int x9[2][7]; unsigned int x10[2][6]; unsigned int x11[2][6]; unsigned int x12[3]; unsigned int x13; unsigned int x14[3][2]; unsigned int x15[3][3][3]; unsigned int x16; unsigned int x17[3]; unsigned long long x18[8]; struct { unsigned char x_19_1_1; unsigned char x_19_1_2; unsigned char x_19_1_3[2]; unsigned char x_19_1_4[2]; } x19; }*)arg1;
- (void)setRfEnhWCDMAMav16:(struct { unsigned int x1; unsigned int x2; unsigned int x3[2][3]; unsigned int x4[2][4]; unsigned int x5[2]; unsigned int x6[4]; unsigned int x7[4]; unsigned int x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; }*)arg1;

@end
