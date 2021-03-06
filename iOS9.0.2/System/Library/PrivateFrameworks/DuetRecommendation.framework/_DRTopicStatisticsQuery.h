/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDuet/_DKQuery.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPredicate, _DRTopicInterestSummary;

@interface _DRTopicStatisticsQuery : _DKQuery {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	NSPredicate* _predicate;
	_DRTopicInterestSummary* _summary;

}

@property (retain) _DRTopicInterestSummary * summary;              //@synthesize summary=_summary - In the implementation block
+(id)topicStatisticsQueryWithFilter:(id)arg1 ;
+(id)sumExpression;
+(id)countExpression;
+(id)topicStatisticsQuery;
-(void)clearSummary;
-(void)setSummary:(_DRTopicInterestSummary *)arg1 ;
-(void)handleResults:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 ;
-(void)executeUsingCoreDataStorage:(id)arg1 reponseQueue:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 ;
-(_DRTopicInterestSummary *)summary;
@end

