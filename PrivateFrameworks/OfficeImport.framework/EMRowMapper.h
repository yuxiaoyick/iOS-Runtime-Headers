/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMRowMapper : CMMapper {
    unsigned int  columnCount;
    double * columnGrid;
    EDRowBlock * mRowBlock;
    struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; } * mRowInfo;
}

+ (void)mapEmptyRowAt:(id)arg1 colspan:(unsigned int)arg2 height:(double)arg3;

- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)cellWithColumnNumber:(unsigned int)arg1;
- (id)initWithEDRowBlock:(id)arg1 rowInfo:(struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)arg2 parent:(id)arg3;
- (void)insertEmptyCellAt:(id)arg1 withColSpan:(unsigned int)arg2 height:(double)arg3;
- (BOOL)isColumnHidden:(unsigned int)arg1;
- (BOOL)isMergedCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(unsigned int)arg3 lastColumn:(unsigned int)arg4;

@end
