/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSCountedSet, NSObject;

@interface ADSAssertionManager : NSObject {

	NSMutableSet* _clientAssertions;
	NSCountedSet* _objectAssertions;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _powerAssertionID;
	double _shutdownScheduledTime;

}

@property (nonatomic,readonly) int numberOfActiveAssertions; 
@property (assign,nonatomic) NSMutableSet * clientAssertions;                   //@synthesize clientAssertions=_clientAssertions - In the implementation block
@property (nonatomic,retain) NSCountedSet * objectAssertions;                   //@synthesize objectAssertions=_objectAssertions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double shutdownScheduledTime;                      //@synthesize shutdownScheduledTime=_shutdownScheduledTime - In the implementation block
@property (assign,nonatomic) unsigned powerAssertionID;                         //@synthesize powerAssertionID=_powerAssertionID - In the implementation block
+(id)sharedInstance;
-(void)takeClientAssertion:(id)arg1 ;
-(void)returnClientAssertion:(id)arg1 ;
-(int)numberOfActiveAssertions;
-(void)takeObjectAssertion:(id)arg1 ;
-(void)returnObjectAssertion:(id)arg1 ;
-(NSMutableSet *)clientAssertions;
-(void)_takeClientAssertion:(id)arg1 ;
-(void)_returnClientAssertion:(id)arg1 ;
-(void)_releasePowerAssertionIfHeld;
-(void)_takePowerAssertionForInterval:(double)arg1 ;
-(void)setShutdownScheduledTime:(double)arg1 ;
-(double)shutdownScheduledTime;
-(void)_shutdown;
-(NSCountedSet *)objectAssertions;
-(void)setClientAssertions:(NSMutableSet *)arg1 ;
-(void)setObjectAssertions:(NSCountedSet *)arg1 ;
-(unsigned)powerAssertionID;
-(void)setPowerAssertionID:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)init;
@end

