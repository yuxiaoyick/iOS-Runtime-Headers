/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSIndexSet;



@interface NSKeyValueChangeDictionary : NSDictionary 
{
    NSInteger _retainCountMinusOne;
    struct { 
        NSUInteger kind; 
        NSObject *oldValue; 
        NSObject *newValue; 
        NSIndexSet *indexes; 
    } _details;
    NSObject *_originalObservable;
    BOOL _isPriorNotification;
    BOOL _isRetainingObjects;
}


- (id)keyEnumerator;
- (NSUInteger)count;
- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (NSUInteger)retainCount;
- (void)setDetailsNoCopy:(struct { NSUInteger x1; id x2; id x3; id x4; })arg1 originalObservable:(id)arg2;
- (id)initWithDetailsNoCopy:(struct { NSUInteger x1; id x2; id x3; id x4; })arg1 originalObservable:(id)arg2 isPriorNotification:(BOOL)arg3;
- (void)retainObjects;
- (void)setOriginalObservable:(id)arg1;

@end