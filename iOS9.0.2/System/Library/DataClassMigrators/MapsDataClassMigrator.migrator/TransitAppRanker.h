/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray;

@interface TransitAppRanker : NSObject <NSCoding> {

	NSMutableArray* _rankings;

}

@property (nonatomic,retain) NSMutableArray * rankings;              //@synthesize rankings=_rankings - In the implementation block
-(id)rankApps:(id)arg1 ;
-(id)recentlyLaunchedApps;
-(void)recordAppLaunch:(id)arg1 ;
-(id)initWithRecentlyLaunchedApps:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableArray *)rankings;
-(void)setRankings:(NSMutableArray *)arg1 ;
@end
