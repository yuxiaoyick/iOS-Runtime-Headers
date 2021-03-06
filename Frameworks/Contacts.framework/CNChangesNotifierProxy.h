/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver> {
    NSMutableDictionary * _notificationForwardingMapping;
    NSMutableDictionary * _notificationsToBeSentOnceAllowed;
    NSObject<OS_dispatch_queue> * _notifierQueue;
    NSMapTable * _notifyingBlocks;
    NSMapTable * _removalBlocks;
    NSCountedSet * _supressedNotificationNames;
    BOOL  forwardsSelfGeneratedDistributedSaveNotifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSMutableDictionary *notificationForwardingMapping;
@property (nonatomic, retain) NSMutableDictionary *notificationsToBeSentOnceAllowed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifierQueue;
@property (nonatomic, retain) NSMapTable *notifyingBlocks;
@property (nonatomic, retain) NSMapTable *removalBlocks;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSCountedSet *supressedNotificationNames;

- (void)addListenerForNotificationName:(id)arg1 registration:(id /* block */)arg2 removal:(id /* block */)arg3;
- (void)addNotificationPoster:(id /* block */)arg1 forNotificationName:(id)arg2;
- (void)dealloc;
- (void)forwardNotificationName:(id)arg1 asNotificationName:(id)arg2;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (id)init;
- (id)notificationForwardingMapping;
- (id)notificationsToBeSentOnceAllowed;
- (id)notifierQueue;
- (id)notifyingBlocks;
- (void)postNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 isFromExternalProcess:(BOOL)arg4;
- (void)postNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 shouldForwardExternally:(BOOL)arg5 calledFromNotifierQueue:(BOOL)arg6 isFromExternalProcess:(BOOL)arg7;
- (void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 calledFromNotifierQueue:(BOOL)arg5 isFromExternalProcess:(BOOL)arg6;
- (void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(BOOL)arg5;
- (id)removalBlocks;
- (void)removeAllRegisteredNotificationSources;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1;
- (void)setNotificationsToBeSentOnceAllowed:(id)arg1;
- (void)setNotifierQueue:(id)arg1;
- (void)setNotifyingBlocks:(id)arg1;
- (void)setRemovalBlocks:(id)arg1;
- (void)setSupressedNotificationNames:(id)arg1;
- (void)stopSupressionOfNotificationName:(id)arg1;
- (void)supressNotificationName:(id)arg1;
- (id)supressedNotificationNames;
- (void)waitForCurrentTasksToFinish;

@end
