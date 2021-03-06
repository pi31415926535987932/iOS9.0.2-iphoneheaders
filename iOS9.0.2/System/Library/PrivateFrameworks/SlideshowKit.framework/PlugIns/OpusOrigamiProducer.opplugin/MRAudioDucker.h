/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRAudioDucker.h>

@class NSString;

@interface MRAudioDucker : NSObject <MRAudioDucker> {

	float _duckLevel;
	int _priority;
	double _duration;
	double _duckInDuration;
	double _duckOutDuration;
	double _time;
	double _parentDuration;
	double _duckInTime;
	double _duckOutTime;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time;                           //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double duckInTime;                     //@synthesize duckInTime=_duckInTime - In the implementation block
@property (assign,nonatomic) double duckOutTime;                    //@synthesize duckOutTime=_duckOutTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float duckLevel;                       //@synthesize duckLevel=_duckLevel - In the implementation block
@property (assign,nonatomic) double duckInDuration;                 //@synthesize duckInDuration=_duckInDuration - In the implementation block
@property (assign,nonatomic) double duckOutDuration;                //@synthesize duckOutDuration=_duckOutDuration - In the implementation block
@property (assign,nonatomic) double parentDuration;                 //@synthesize parentDuration=_parentDuration - In the implementation block
@property (assign,nonatomic) int priority;                          //@synthesize priority=_priority - In the implementation block
@property (readonly) float currentDuckLevel; 
-(float)duckLevel;
-(double)duckOutDuration;
-(double)duckInDuration;
-(void)setDuckInTime:(double)arg1 ;
-(double)duckInTime;
-(void)setDuckOutTime:(double)arg1 ;
-(void)setDuckLevel:(float)arg1 ;
-(void)setParentDuration:(double)arg1 ;
-(float)currentDuckLevel;
-(void)setDuckInDuration:(double)arg1 ;
-(void)setDuckOutDuration:(double)arg1 ;
-(double)parentDuration;
-(double)duckOutTime;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)setTime:(double)arg1 ;
-(double)time;
@end

