/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQHStyle : NSObject 
{
    struct __CFDictionary { } *mStyles;
    struct __CFString { } *mCssClassAttribute;
}

+ (void)setSingleStyleAttribute:(struct __CFString { }*)arg1 value:(struct __CFString { }*)arg2 node:(id)arg3;
+ (void)setSingleStyleAttribute:(struct __CFString { }*)arg1 intValue:(NSInteger)arg2 node:(id)arg3;
+ (void)setSingleStyleAttribute:(struct __CFString { }*)arg1 pxValue:(NSInteger)arg2 node:(id)arg3;
+ (void)appendParentClass:(struct __CFString {}**)arg1 style:(id)arg2 classType:(Class)arg3 state:(id)arg4;
+ (void)createBaseStyleClassesString:(struct __CFArray { }*)arg1 classString:(struct __CFString {}**)arg2 classType:(Class)arg3 state:(id)arg4;

- (id)init;
- (void)dealloc;
- (void)addAttribute:(struct __CFString { }*)arg1 value:(struct __CFString { }*)arg2;
- (void)addAttribute:(struct __CFString { }*)arg1 intValue:(NSInteger)arg2;
- (void)addAttribute:(struct __CFString { }*)arg1 pxValue:(NSInteger)arg2;
- (void)addAttribute:(struct __CFString { }*)arg1 ptValue:(NSInteger)arg2;
- (void)addAttribute:(struct __CFString { }*)arg1 trblValue:(id)arg2;
- (BOOL)getAttribute:(struct __CFString { }*)arg1 intValue:(NSInteger*)arg2;
- (BOOL)getAttribute:(struct __CFString { }*)arg1 value:(const struct __CFString {}**)arg2;
- (BOOL)getAttribute:(struct __CFString { }*)arg1 trblValue:(id*)arg2;
- (struct __CFString { }*)createNamedStyle:(struct __CFString { }*)arg1;
- (void)setupCssClassAttribute:(id)arg1;
- (void)setStyleOnCurrentNode:(id)arg1;
- (void)addClass:(struct __CFString { }*)arg1;
- (void)setStyleOnCurrentNode:(id)arg1 mappingBaseStyleClass:(id)arg2 baseClassType:(Class)arg3;
- (void)setStyleOnCurrentNode:(id)arg1 mappingBaseStyleClasses:(struct __CFArray { }*)arg2 baseClassType:(Class)arg3;

@end