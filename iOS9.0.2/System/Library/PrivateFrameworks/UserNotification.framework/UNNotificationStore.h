/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNNotificationStore : NSObject {

	NSObject*<OS_dispatch_queue> _notificationsQueue;
	NSObject*<OS_dispatch_queue> _settingsQueue;
	NSMutableDictionary* _observersByBundleID;

}
+(id)sharedInstance;
+(void)initialize;
+(id)uniqueIdentifierForNotification:(id)arg1 ;
+(void)migratePushStore;
-(void)dealloc;
-(id)init;
-(id)_observersForBundleID:(id)arg1 ;
-(void)_enumerateObserversForBundleID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_allNotificationDataFromPath:(id)arg1 ;
-(id)_notificationStoreFilenameForBundleID:(id)arg1 ;
-(char)_notificationDataExistsAtPath:(id)arg1 ;
-(char)_saveNotificationList:(id)arg1 toPath:(id)arg2 ;
-(char)_removeNotificationsForBundleID:(id)arg1 ;
-(id)pathForSoundName:(id)arg1 forBundleID:(id)arg2 ;
-(id)_allNotificationsFromPath:(id)arg1 ;
-(void)_notifyObserversNotificationsDidChangeForBundleID:(id)arg1 ;
-(void)_saveNotificationWithTitle:(id)arg1 message:(id)arg2 soundName:(id)arg3 actionText:(id)arg4 badge:(id)arg5 userInfo:(id)arg6 launchImage:(id)arg7 fullDetails:(id)arg8 soundIsRingtone:(char)arg9 isRemoteNotification:(char)arg10 category:(id)arg11 forBundleID:(id)arg12 ;
-(id)savedNotificationDataForBundleID:(id)arg1 ;
-(void)addObserver:(id)arg1 forBundleID:(id)arg2 ;
-(void)removeObserver:(id)arg1 forBundleID:(id)arg2 ;
-(void)registerAppForNotificationsWithBundleID:(id)arg1 ;
-(void)unregisterAppForNotificationsWithBundleID:(id)arg1 ;
-(void)clearNotificationsForBundleID:(id)arg1 ;
-(void)saveRemoteNotificationWithTitle:(id)arg1 message:(id)arg2 soundName:(id)arg3 actionText:(id)arg4 badge:(id)arg5 userInfo:(id)arg6 launchImage:(id)arg7 category:(id)arg8 forBundleID:(id)arg9 ;
-(void)saveLocalNotification:(id)arg1 forBundleID:(id)arg2 ;
-(void)removeLocalNotification:(id)arg1 forBundleID:(id)arg2 ;
-(void)removeAllLocalNotificationsForBundleID:(id)arg1 ;
-(void)removeAllNotificationsForBundleID:(id)arg1 ;
-(id)removeNotificationsPassingTest:(/*^block*/id)arg1 forBundleID:(id)arg2 ;
-(void)makeTestNotificationStores;
-(id)savedNotificationsForBundleID:(id)arg1 ;
-(id)bundleIDsWithUpdatesSince:(id)arg1 ;
-(id)lastUpdateDateForBundleID:(id)arg1 ;
@end

