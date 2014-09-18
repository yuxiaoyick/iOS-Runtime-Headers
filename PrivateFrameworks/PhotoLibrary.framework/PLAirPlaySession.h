/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLAirPlaySessionDataSource>, AirPlayRemoteSlideshow, MediaControlClient, NSDictionary, NSMutableArray;

@interface PLAirPlaySession : NSObject {
    <PLAirPlaySessionDataSource> *_dataSource;
    MediaControlClient *_mediaControlClient;
    NSDictionary *_pickedRoute;
    AirPlayRemoteSlideshow *_remoteSlideshow;
    NSMutableArray *_streamedPhotoUuids;
    bool_sentPhoto;
    bool_streamingLocalSlideShow;
    bool_streamingPhotos;
    bool_streamingRemoteSlideshow;
    bool_supportsPhotoCaching;
}

@property <PLAirPlaySessionDataSource> * dataSource;
@property bool streamingLocalSlideShow;

+ (void)beginNetworkAssertion;
+ (bool)canDisplayMedia:(id)arg1;
+ (void)endNetworkAssertion;

- (id)_fixLegacyEvent:(id)arg1;
- (void)_reallySendPhotoData:(id)arg1 forPhotoWithUUID:(id)arg2 withTransition:(id)arg3 andAction:(id)arg4;
- (bool)_shouldCachePhotos;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2 andAction:(id)arg3;
- (void)_streamPhotosAdjacentToPhoto:(id)arg1 withTransition:(id)arg2;
- (bool)_streaming;
- (id)dataSource;
- (void)dealloc;
- (id)initWithPickedRoute:(id)arg1 mediaControlClient:(id)arg2 airplayRemoteSlideshow:(id)arg3;
- (void)invalidatePhotoCache;
- (id)pickedRouteID;
- (id)pickedRouteName;
- (void)setDataSource:(id)arg1;
- (void)setStreamingLocalSlideShow:(bool)arg1;
- (void)startRemoteSlideshowWithTheme:(id)arg1 remoteSlideshowDelegate:(id)arg2;
- (void)stopRemoteSlideshow;
- (void)stopStreaming;
- (void)streamPhoto:(id)arg1 withTransition:(id)arg2;
- (bool)streamingLocalSlideShow;
- (bool)supportsRemoteSlideshow;

@end