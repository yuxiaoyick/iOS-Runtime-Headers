/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCameraViewController : UIViewController <CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * __resultProcessingQueue;
    NSMutableDictionary * __resultQueuePendingLivePhotoProperties;
    CAMThumbnailGenerator * __resultQueueThumbnailGenerator;
    CAMReviewButton * __reviewButton;
    BOOL  _automaticallyManagesCameraSession;
    CAMBurstController * _burstController;
    CUCaptureController * _captureController;
    <CAMCameraCaptureDelegate> * _captureDelegate;
    <CAMCameraConfigurationDelegate> * _configurationDelegate;
    CAMIrisVideoController * _irisVideoController;
    CAMKeepAliveController * _keepAliveController;
    CAMLocationController * _locationController;
    CAMMotionController * _motionController;
    CAMNebulaDaemonProxyManager * _nebulaDaemonProxyManager;
    CAMPersistenceController * _persistenceController;
    CAMPowerController * _powerController;
    <CAMCameraViewControllerPresentationDelegate> * _presentationDelegate;
    CAMProtectionController * _protectionController;
    CAMRemoteShutterController * _remoteShutterController;
    CAMTimelapseController * _timelapseController;
    CAMViewfinderViewController * _viewfinderViewController;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_resultProcessingQueue;
@property (nonatomic, readonly) NSMutableDictionary *_resultQueuePendingLivePhotoProperties;
@property (nonatomic, readonly) CAMThumbnailGenerator *_resultQueueThumbnailGenerator;
@property (nonatomic, readonly) CAMReviewButton *_reviewButton;
@property (nonatomic) BOOL automaticallyAdjustsApplicationIdleTimer;
@property (nonatomic) BOOL automaticallyManagesCameraSession;
@property (nonatomic, readonly) CAMBurstController *burstController;
@property (nonatomic, readonly) CUCaptureController *captureController;
@property (nonatomic) <CAMCameraCaptureDelegate> *captureDelegate;
@property (nonatomic, readonly) int captureDevice;
@property (nonatomic, readonly) int captureMode;
@property (nonatomic) <CAMCameraConfigurationDelegate> *configurationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisablingAdditionalCaptures, nonatomic) BOOL disablingAdditionalCaptures;
@property (getter=isDisablingMultipleCaptureFeatures, nonatomic) BOOL disablingMultipleCaptureFeatures;
@property (nonatomic) int flashMode;
@property (readonly) unsigned int hash;
@property (setter=setHDRMode:, nonatomic) int hdrMode;
@property (nonatomic, readonly) CAMIrisVideoController *irisVideoController;
@property (nonatomic, readonly) CAMKeepAliveController *keepAliveController;
@property (nonatomic) int livePhotoMode;
@property (nonatomic, readonly) CAMLocationController *locationController;
@property (nonatomic, readonly) CAMMotionController *motionController;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager;
@property (nonatomic) unsigned int persistenceBehavior;
@property (nonatomic, readonly) CAMPersistenceController *persistenceController;
@property (nonatomic, readonly) CAMPowerController *powerController;
@property (nonatomic) <CAMCameraViewControllerPresentationDelegate> *presentationDelegate;
@property (nonatomic, readonly) CAMProtectionController *protectionController;
@property (getter=isRecording, nonatomic, readonly) BOOL recording;
@property (nonatomic, readonly) CAMRemoteShutterController *remoteShutterController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMTimelapseController *timelapseController;
@property (nonatomic) int timerDuration;
@property (nonatomic) int torchMode;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;

+ (BOOL)isEmulatingImagePicker;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_behaviorDefinedDestinationURLForRequest:(id)arg1 withLocalDestinationURL:(id)arg2 linkedDestinationURL:(id)arg3;
- (unsigned int)_capturePersistenceBehaviorForViewfinderPersistenceBehavior:(unsigned int)arg1;
- (id)_clientPropertiesForLivePhotoVideoURL:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 uniqueIdentifier:(id)arg3;
- (id)_clientPropertiesForStillImageWithURL:(id)arg1 metadata:(id)arg2 creationDate:(id)arg3 captureOrientation:(int)arg4 fullsizeSurface:(void*)arg5 fullsizeSize:(unsigned long)arg6 previewSurface:(void*)arg7 previewOrientation:(int)arg8 uniqueIdentifier:(id)arg9 forOriginal:(BOOL)arg10 livePhoto:(BOOL)arg11 savedToPhotoLibrary:(BOOL)arg12;
- (id)_clientPropertiesForVideoURL:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 size:(struct CGSize { float x1; float x2; })arg3 creationDate:(id)arg4 captureOrientation:(int)arg5 previewSurface:(void*)arg6 previewOrientation:(int)arg7 adjustments:(id)arg8 uniqueIdentifier:(id)arg9 forLivePhoto:(BOOL)arg10 savedToPhotoLibrary:(BOOL)arg11;
- (void)_commonCAMCameraViewControllerInitializationWithLaunchOptions:(id)arg1 usingEmulationMode:(int)arg2 initialLayoutStyle:(int)arg3 privateOptions:(int)arg4;
- (BOOL)_couldProvidePendingLivePhotoUpdateForPairingIdentifier:(id)arg1 withProperties:(id)arg2;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfLivePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfPhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3;
- (id)_previewImageFromVideoURL:(id)arg1;
- (id)_resultProcessingQueue;
- (void)_resultQueueHandleFallbackPhotoForPairingIdentifierIfNecessary:(id)arg1;
- (id)_resultQueuePendingLivePhotoProperties;
- (id)_resultQueueProcessLivePhotoForPairingIdentifier:(id)arg1 combinedProperties:(out id*)arg2 error:(id*)arg3;
- (id)_resultQueueSafeImageFromSurface:(void*)arg1 imageOrientation:(int)arg2;
- (id)_resultQueueThumbnailGenerator;
- (BOOL)_resultQueueUpdatePendingLivePhotoForPairingIdentifier:(id)arg1 withProperties:(id)arg2;
- (id)_reviewButton;
- (unsigned int)_viewfinderPersistenceBehaviorForCapturePersistenceBehavior:(unsigned int)arg1;
- (BOOL)automaticallyAdjustsApplicationIdleTimer;
- (BOOL)automaticallyManagesCameraSession;
- (id)burstController;
- (id)captureController;
- (void)captureController:(id)arg1 didGenerateStillImageCaptureResult:(id)arg2 fromRequest:(id)arg3;
- (id)captureDelegate;
- (int)captureDevice;
- (int)captureMode;
- (BOOL)capturePhoto;
- (id)childViewControllerForStatusBarHidden;
- (id)configurationDelegate;
- (void)configureForCaptureMode:(int)arg1 captureDevice:(int)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (int)flashMode;
- (void)handleReviewButtonReleased:(id)arg1;
- (int)hdrMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomLaunchOptions:(id)arg1 usingEmulationMode:(int)arg2;
- (id)initWithInitialLayoutStyle:(int)arg1 privateOptions:(int)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)irisVideoController;
- (BOOL)isDisablingAdditionalCaptures;
- (BOOL)isDisablingMultipleCaptureFeatures;
- (BOOL)isRecording;
- (id)keepAliveController;
- (int)livePhotoMode;
- (void)loadView;
- (id)locationController;
- (id)motionController;
- (id)nebulaDaemonProxyManager;
- (unsigned int)persistenceBehavior;
- (id)persistenceController;
- (void)persistenceController:(id)arg1 didCompleteAllLocalPersistenceForRequest:(id)arg2;
- (void)persistenceController:(id)arg1 didGenerateStillImageLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (id)powerController;
- (int)preferredStatusBarUpdateAnimation;
- (id)presentationDelegate;
- (id)protectionController;
- (id)remoteShutterController;
- (void)resumeCameraSession;
- (id)reviewButton;
- (void)setAutomaticallyAdjustsApplicationIdleTimer:(BOOL)arg1;
- (void)setAutomaticallyManagesCameraSession:(BOOL)arg1;
- (void)setCaptureDelegate:(id)arg1;
- (void)setConfigurationDelegate:(id)arg1;
- (void)setDisablingAdditionalCaptures:(BOOL)arg1;
- (void)setDisablingMultipleCaptureFeatures:(BOOL)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setHDRMode:(int)arg1;
- (void)setLivePhotoMode:(int)arg1;
- (void)setPersistenceBehavior:(unsigned int)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setTimerDuration:(int)arg1;
- (void)setTorchMode:(int)arg1;
- (BOOL)startRecording;
- (BOOL)stopRecording;
- (void)suspendCameraSession;
- (id)timelapseController;
- (int)timerDuration;
- (int)torchMode;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)viewfinderViewController;

@end