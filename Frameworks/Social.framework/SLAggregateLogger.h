/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLAggregateLogger : NSObject {
}

+ (id)_bundleIdForPID:(int)arg1;
+ (BOOL)_twitterAttachmentsContainImage:(id)arg1;
+ (BOOL)_twitterAttachmentsContainURL:(id)arg1;
+ (BOOL)_weiboAttachmentsContainImage:(id)arg1;
+ (BOOL)_weiboAttachmentsContainURL:(id)arg1;
+ (void)logFacebookPost:(id)arg1 fromProcessWithPID:(int)arg2;
+ (void)logTweetWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4;
+ (void)logWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4;

@end