/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAnimationKeyframe.h>

@interface MPAnimationKeyframe2D : MPAnimationKeyframe {

	CGPoint _point;

}

@property (assign,nonatomic) CGPoint point;              //@synthesize point=_point - In the implementation block
+(id)keyframe2DWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
+(id)keyframe2DWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned)arg3 ;
-(id)keyframe;
-(id)initKeyframe2DWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
@end

