/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCModule.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, BRCClientRanksPersistedState, NSHashTable, NSObject, BRNotificationQueue, NSMutableDictionary, BRCXPCClient, NSString;

@interface BRCNotificationManager : NSObject <BRCModule> {

	BRCAccountSession* _session;
	BRCClientRanksPersistedState* _state;
	NSHashTable* _pipes;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	BRNotificationQueue* _notifs;
	NSMutableDictionary* _transferCache;
	BRCXPCClient* _client;
	AI _activeAliasQueries;
	char _isCancelled;

}

@property (readonly) char hasActiveAliasWatchers; 
@property (nonatomic,readonly) BRCAccountSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char isCancelled;                           //@synthesize isCancelled=_isCancelled - In the implementation block
-(BRCAccountSession *)session;
-(void)cancel;
-(void)suspend;
-(char)isCancelled;
-(void)resume;
-(void)close;
-(void)flushUpdates;
-(id)initWithAccountSession:(id)arg1 ;
-(char)hasActiveAliasWatchers;
-(void)registerContainers:(id)arg1 forFlags:(unsigned)arg2 ;
-(void)unregisterContainers:(id)arg1 forFlags:(unsigned)arg2 ;
-(void)getPipeWithXPCReceiver:(id)arg1 client:(id)arg2 root:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)pipeWithReceiver:(id)arg1 root:(id)arg2 ;
-(void)queueUpdate:(id)arg1 ;
-(void)invalidatePipesWatchingContainerID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setIsCancelled:(char)arg1 ;
@end

