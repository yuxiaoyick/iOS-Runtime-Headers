/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout> {
    HFWallpaperSlice * _blurredWallpaperSlice;
    HUGridLayoutOptions * _layoutOptions;
    NSMutableDictionary * _overrideAttributesByIndexPath;
    HUWallpaperView * _wallpaperView;
}

@property (nonatomic, retain) HFWallpaperSlice *blurredWallpaperSlice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, readonly) NSMutableDictionary *overrideAttributesByIndexPath;
@property (readonly) Class superclass;
@property (nonatomic) HUWallpaperView *wallpaperView;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (void)_invalidateCollectionViewLayoutsForSubviewsOfView:(id)arg1;
- (id)_modifiedLayoutAttributesForAttributes:(id)arg1;
- (void)applyOverrideAttributes:(id)arg1 toItemAtIndexPath:(id)arg2;
- (id)blurredWallpaperSlice;
- (void)clearAllOverrideAttributes;
- (void)clearOverrideAttributesForItemAtIndexPath:(id)arg1;
- (id)init;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutOptions;
- (id)overrideAttributesByIndexPath;
- (void)setBlurredWallpaperSlice:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setWallpaperView:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)wallpaperView;

@end
