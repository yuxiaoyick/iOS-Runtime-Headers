/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDiagnosticsItemProvider : NSObject {
    NSMutableDictionary * __loadHandlers;
}

@property (nonatomic, readonly) NSMutableDictionary *_loadHandlers;
@property (nonatomic, readonly) NSSet *registeredIdentifiers;

- (void).cxx_destruct;
- (id)_loadHandlers;
- (BOOL)hasItemForIdentifier:(id)arg1;
- (id)init;
- (id)itemForIdentifier:(id)arg1;
- (void)registerItemForIdentifier:(id)arg1 loadHandler:(id /* block */)arg2;
- (id)registeredIdentifiers;

@end
