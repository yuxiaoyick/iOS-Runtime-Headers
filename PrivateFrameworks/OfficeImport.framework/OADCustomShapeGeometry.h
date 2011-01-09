/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADCustomShapeGeometry : OADShapeGeometry 
{
    struct CsRect<ChSINT4> { NSInteger x1[4]; } *mGeometryCoordSpace;
    struct CsPoint<ChSINT4> { NSInteger x1[2]; } *mLimo;
    NSMutableArray *mFormulas;
    NSMutableArray *mTextBodyRects;
    NSMutableArray *mPaths;
}


- (id)init;
- (void)dealloc;
- (struct CsRect<ChSINT4> { NSInteger x1[4]; })geometryCoordSpace;
- (void)setGeometryCoordSpace:(struct CsRect<ChSINT4> { NSInteger x1[4]; })arg1;
- (struct CsPoint<ChSINT4> { NSInteger x1[2]; })limo;
- (void)setLimo:(struct CsPoint<ChSINT4> { NSInteger x1[2]; })arg1;
- (NSUInteger)formulaCount;
- (id)formulaAtIndex:(NSUInteger)arg1;
- (void)addFormula:(id)arg1;
- (NSUInteger)textBodyRectCount;
- (id)textBodyRectAtIndex:(NSUInteger)arg1;
- (void)addTextBodyRect:(id)arg1;
- (NSUInteger)pathCount;
- (id)pathAtIndex:(NSUInteger)arg1;
- (void)addPath:(id)arg1;

@end