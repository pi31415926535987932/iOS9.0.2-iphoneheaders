/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VKTimer;

@interface MKThrottledGate : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _maxAvailableTickets;
	float _availableTickets;
	float _refreshRate;
	NSMutableArray* _waitingJobs;
	VKTimer* _timer;

}
-(char)_replenishAvailableJobsIfNecessary;
-(id)initWithMax:(int)arg1 refreshRate:(float)arg2 queue:(id)arg3 ;
-(char)_dispatchWaitingJobsIfNecessary;
-(void)dispatch:(/*^block*/id)arg1 ;
-(void)_timerFired:(id)arg1 ;
-(void)_ensureTimer;
-(void)dealloc;
-(id)description;
@end

