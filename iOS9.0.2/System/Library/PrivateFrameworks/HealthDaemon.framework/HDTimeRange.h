/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDTimeRange : NSObject <NSCopying> {

	char _deleted;
	double _start;
	double _end;
	long long _sourceId;
	double _categoryValue;

}

@property (assign,nonatomic) double start;                      //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double end;                        //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) long long sourceId;                //@synthesize sourceId=_sourceId - In the implementation block
@property (assign,nonatomic) double categoryValue;              //@synthesize categoryValue=_categoryValue - In the implementation block
@property (assign,nonatomic) char deleted;                      //@synthesize deleted=_deleted - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)start;
-(void)setStart:(double)arg1 ;
-(double)end;
-(void)setEnd:(double)arg1 ;
-(long long)sourceId;
-(void)setSourceId:(long long)arg1 ;
-(void)setCategoryValue:(double)arg1 ;
-(double)categoryValue;
-(char)deleted;
-(void)setDeleted:(char)arg1 ;
@end
