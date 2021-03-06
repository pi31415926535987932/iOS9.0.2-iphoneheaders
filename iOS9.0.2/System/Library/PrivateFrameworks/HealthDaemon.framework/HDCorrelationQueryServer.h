/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSDictionary;

@interface HDCorrelationQueryServer : HDQueryServer {

	int _behaviorVersion;
	char _suspended;
	NSDictionary* _dataFilters;

}

@property (nonatomic,readonly) NSDictionary * dataFilters;              //@synthesize dataFilters=_dataFilters - In the implementation block
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
-(void)_queue_start;
-(char)_queue_validateConfiguration:(id*)arg1 ;
-(NSDictionary *)dataFilters;
@end

