/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKCancellableRemoteOperation.h>

@class NSSet, NSString, EKEventStore, NSNumber;

@interface EKOccurrenceCacheSearch : NSObject <EKCancellableRemoteOperation> {

	NSSet* _calendars;
	NSString* _searchTerm;
	EKEventStore* _store;
	/*^block*/id _callback;
	NSNumber* _replyID;
	char _canceled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(/*^block*/id)arg4 ;
-(int)performSearchOperation:(unsigned)arg1 inCalendars:(id)arg2 withEventStore:(id)arg3 andSearchTerm:(id)arg4 ;
-(void)receivedBatchResultsFromServer:(id)arg1 finished:(char)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)run;
-(void)disconnect;
-(id)searchTerm;
@end
