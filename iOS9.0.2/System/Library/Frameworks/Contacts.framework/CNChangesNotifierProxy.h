/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNChangeNotificationReceiver.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSMutableDictionary, NSCountedSet, NSObject, NSString;

@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver> {

	NSMapTable* _removalBlocks;
	NSMapTable* _notifyingBlocks;
	NSMutableDictionary* _notificationForwardingMapping;
	NSCountedSet* _supressedNotificationNames;
	NSMutableDictionary* _notificationsToBeSentOnceAllowed;
	NSObject*<OS_dispatch_queue> _notifierQueue;

}

@property (nonatomic,retain) NSMapTable * removalBlocks;                                          //@synthesize removalBlocks=_removalBlocks - In the implementation block
@property (nonatomic,retain) NSMapTable * notifyingBlocks;                                        //@synthesize notifyingBlocks=_notifyingBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * notificationForwardingMapping;               //@synthesize notificationForwardingMapping=_notificationForwardingMapping - In the implementation block
@property (nonatomic,retain) NSCountedSet * supressedNotificationNames;                           //@synthesize supressedNotificationNames=_supressedNotificationNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationsToBeSentOnceAllowed;              //@synthesize notificationsToBeSentOnceAllowed=_notificationsToBeSentOnceAllowed - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifierQueue;                          //@synthesize notifierQueue=_notifierQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postNotificationName:(id)arg1 fromSender:(id)arg2 userInfo:(id)arg3 shouldForwardExternally:(char)arg4 calledFromNotifierQueue:(char)arg5 ;
-(void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 userInfo:(id)arg3 calledFromNotifierQueue:(char)arg4 ;
-(void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 userInfo:(id)arg3 ;
-(void)addListenerForNotificationName:(id)arg1 registration:(/*^block*/id)arg2 removal:(/*^block*/id)arg3 ;
-(void)addNotificationPoster:(/*^block*/id)arg1 forNotificationName:(id)arg2 ;
-(void)postNotificationName:(id)arg1 fromSender:(id)arg2 ;
-(void)forwardNotificationName:(id)arg1 asNotificationName:(id)arg2 ;
-(void)removeAllRegisteredNotificationSources;
-(void)supressNotificationName:(id)arg1 ;
-(void)stopSupressionOfNotificationName:(id)arg1 ;
-(void)waitForCurrentTasksToFinish;
-(NSMapTable *)removalBlocks;
-(void)setRemovalBlocks:(NSMapTable *)arg1 ;
-(NSMapTable *)notifyingBlocks;
-(void)setNotifyingBlocks:(NSMapTable *)arg1 ;
-(NSMutableDictionary *)notificationForwardingMapping;
-(NSCountedSet *)supressedNotificationNames;
-(void)setSupressedNotificationNames:(NSCountedSet *)arg1 ;
-(NSMutableDictionary *)notificationsToBeSentOnceAllowed;
-(void)setNotificationsToBeSentOnceAllowed:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)notifierQueue;
-(void)setNotifierQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
@end

