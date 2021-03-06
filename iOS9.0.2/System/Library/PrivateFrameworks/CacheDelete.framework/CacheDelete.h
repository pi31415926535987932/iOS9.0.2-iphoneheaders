/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/deleted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CacheDeleteClientProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class CacheDeleteListener, NSMutableSet, NSUserDefaults, NSMutableDictionary, NSDictionary, NSObject, NSURL;

@interface CacheDelete : NSObject <CacheDeleteClientProtocol> {

	char _cancel;
	CacheDeleteListener* _listener;
	NSMutableSet* _purgeableInFlight;
	NSMutableSet* _purgeInFlight;
	NSMutableSet* _periodicInFlight;
	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _services;
	NSMutableSet* _daemons;
	NSDictionary* _default_values;
	NSMutableDictionary* _optOuts;
	NSObject*<OS_dispatch_queue> _operation_queue;
	NSObject*<OS_dispatch_queue> _daemons_queue;
	NSObject*<OS_dispatch_queue> _collection_queue;
	NSObject*<OS_dispatch_queue> _defaults_queue;
	NSURL* _rootPath;
	int _purge_active_service_count;
	int _viable_purging_services;
	int _currentUrgency;
	NSObject*<OS_dispatch_queue> _purge_post_queue;
	NSObject*<OS_dispatch_semaphore> _purge_semaphore;
	unsigned long long _purge_amount_needed;
	unsigned long long _purge_amount_reported;

}

@property (nonatomic,retain) CacheDeleteListener * listener;                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableSet * purgeableInFlight;                    //@synthesize purgeableInFlight=_purgeableInFlight - In the implementation block
@property (nonatomic,retain) NSMutableSet * purgeInFlight;                        //@synthesize purgeInFlight=_purgeInFlight - In the implementation block
@property (nonatomic,retain) NSMutableSet * periodicInFlight;                     //@synthesize periodicInFlight=_periodicInFlight - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                       //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * services;                      //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) NSMutableSet * daemons;                              //@synthesize daemons=_daemons - In the implementation block
@property (nonatomic,retain) NSDictionary * default_values;                       //@synthesize default_values=_default_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * optOuts;                       //@synthesize optOuts=_optOuts - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> operation_queue;                  //@synthesize operation_queue=_operation_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> daemons_queue;                    //@synthesize daemons_queue=_daemons_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> collection_queue;                 //@synthesize collection_queue=_collection_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> defaults_queue;                   //@synthesize defaults_queue=_defaults_queue - In the implementation block
@property (assign) char cancel;                                                   //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,retain) NSURL * rootPath;                                    //@synthesize rootPath=_rootPath - In the implementation block
@property (assign) unsigned long long purge_amount_needed;                        //@synthesize purge_amount_needed=_purge_amount_needed - In the implementation block
@property (assign) unsigned long long purge_amount_reported;                      //@synthesize purge_amount_reported=_purge_amount_reported - In the implementation block
@property (assign) int purge_active_service_count;                                //@synthesize purge_active_service_count=_purge_active_service_count - In the implementation block
@property (assign) int viable_purging_services;                                   //@synthesize viable_purging_services=_viable_purging_services - In the implementation block
@property (assign) int currentUrgency;                                            //@synthesize currentUrgency=_currentUrgency - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> purge_post_queue;                 //@synthesize purge_post_queue=_purge_post_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> purge_semaphore;              //@synthesize purge_semaphore=_purge_semaphore - In the implementation block
-(id)purge:(id)arg1 callback:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)operation_queue;
-(NSMutableSet *)periodicInFlight;
-(char)updateInFlight:(id)arg1 set:(id)arg2 add:(char)arg3 ;
-(NSObject*<OS_dispatch_queue>)collection_queue;
-(NSMutableDictionary *)optOuts;
-(NSObject*<OS_dispatch_queue>)defaults_queue;
-(id)clientGetStateSync:(id)arg1 ;
-(void)clientSetStateSync:(id)arg1 key:(id)arg2 ;
-(id)cachedInfo:(id)arg1 ;
-(char)optOutService:(id)arg1 add:(char)arg2 ;
-(NSMutableSet *)purgeableInFlight;
-(void)updateServiceStats:(id)arg1 withInfo:(id)arg2 ;
-(unsigned)requestsInFlight:(id)arg1 ;
-(id)_checkInfo:(id)arg1 ;
-(int)urgencyFromInfo:(id)arg1 key:(id)arg2 ;
-(id)_totalAvailable:(int)arg1 info:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)purge_post_queue;
-(unsigned long long)purge_amount_needed;
-(int)viable_purging_services;
-(NSMutableSet *)purgeInFlight;
-(int)currentUrgency;
-(int)purge_active_service_count;
-(void)setPurge_active_service_count:(int)arg1 ;
-(unsigned long long)purge_amount_reported;
-(void)setPurge_amount_reported:(unsigned long long)arg1 ;
-(void)queueServiceRequest:(id)arg1 info:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)setViable_purging_services:(int)arg1 ;
-(void)reportPercentageForAmountRequested:(long long)arg1 amountPurged:(long long)arg2 identifier:(id)arg3 ;
-(NSObject*<OS_dispatch_semaphore>)purge_semaphore;
-(int)purgingServices;
-(void)setPurge_amount_needed:(unsigned long long)arg1 ;
-(void)setCurrentUrgency:(int)arg1 ;
-(void)setPurge_semaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)daemons_queue;
-(NSMutableSet *)daemons;
-(char)pingService:(id)arg1 ;
-(id)totalAvailable:(id)arg1 ;
-(void)notifyRecipients:(id)arg1 value:(id)arg2 ;
-(void)_clientSetState:(id)arg1 key:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(NSDictionary *)default_values;
-(void)_clientGetState:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)handleVFSStreamXPCEvent:(id)arg1 ;
-(void)performPeriodicsWithInfo:(id)arg1 ;
-(void)setPurgeableInFlight:(NSMutableSet *)arg1 ;
-(void)setPurgeInFlight:(NSMutableSet *)arg1 ;
-(void)setPeriodicInFlight:(NSMutableSet *)arg1 ;
-(void)setDaemons:(NSMutableSet *)arg1 ;
-(void)setDefault_values:(NSDictionary *)arg1 ;
-(void)setOptOuts:(NSMutableDictionary *)arg1 ;
-(void)setOperation_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDaemons_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCollection_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDefaults_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPurge_post_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)cancel;
-(id)init;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(CacheDeleteListener *)listener;
-(void)setListener:(CacheDeleteListener *)arg1 ;
-(void)setRootPath:(NSURL *)arg1 ;
-(void)setCancel:(char)arg1 ;
-(void)clientCheckin:(id)arg1 endpoint:(id)arg2 info:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)clientPurgeableSpace:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)clientItemizedPurgeableSpace:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)clientPurge:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)clientCancelPurge:(/*^block*/id)arg1 ;
-(void)clientSetState:(id)arg1 key:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)clientGetState:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(NSURL *)rootPath;
-(void)scanPlistsAtPath:(id)arg1 execBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)services;
-(void)setServices:(NSMutableDictionary *)arg1 ;
@end

